#include "Sorting.h"
/**
 * @brief Quick Sort function
 * 
 */
 
/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int partition (int array[], int low, int high)
{
    int pivot = array[high]; // pivot
    int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
 
    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (array[j] < pivot)
        {
            i++; // increment index of smaller element
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}
 
/* The main function that implements QuickSort
array_ptr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
int* QuickSort(int array_ptr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, array[p] is now
        at right place */
        int pi = partition(array_ptr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        QuickSort(array_ptr, low, pi - 1);
        QuickSort(array_ptr, pi + 1, high);
    }
    return array_ptr;
}
