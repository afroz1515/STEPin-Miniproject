#include "Sorting.h"
/**
 * @brief Merge Sort function
 * 
 * @param array 
 * @param left 
 * @param mid 
 * @param right 
 */
void merge(int array[], int left, int mid, int right)
{
    int i, j, k;
    int limit1 = mid - left + 1;
    int limit2 = right - mid;
 
    // create temp arrays 
    int Left[limit1], Right[limit2];
 
    // Copy data to temp arrays Left[] and Right[] 
    for (i = 0; i < limit1; i++)
        Left[i] = array[left + i];
    for (j = 0; j < limit2; j++)
        Right[j] = array[mid + 1 + j];
 
    // Merge the temp arrays back into array[left..right]
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = left; // Initial index of merged subarray
    while (i < limit1 && j < limit2) {
        if (Left[i] <= Right[j]) {
            array[k] = Left[i];
            i++;
        }
        else {
            array[k] = Right[j];
            j++;
        }
        k++;
    }
 
    // Copy the remaining elements of Left[], if there are any 
    while (i < limit1) {
        array[k] = Left[i];
        i++;
        k++;
    }
 
    // Copy the remaining elements of Right[], if there are any 
    while (j < limit2) {
        array[k] = Right[j];
        j++;
        k++;
    }
}
 

int* MergeSort(int array_ptr[], int left, int right)
{
    if (left < right) {
        // Same as (left+right)/2, but avoids overflow 
        int mid = left + (right - left) / 2;
 
        // Sort first and second halves
        MergeSort(array_ptr, left, mid);
        MergeSort(array_ptr, mid + 1, right);
 
        merge(array_ptr, left, mid, right);
    }
    return array_ptr;
}
