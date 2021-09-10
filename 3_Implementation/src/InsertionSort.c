#include "Sorting.h"
/**
 * @brief Insertion Sort
 * 
 * @param array_ptr 
 * @param array_size 
 * @return int* 
 */
int* InsertionSort(int array_ptr[], int array_size)
{
    int i, j, temp;
    for (i = 1; i < array_size; i++) {
        temp = array_ptr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && array_ptr[j] > temp) {
            array_ptr[j + 1] = array_ptr[j];
            j = j - 1;
        }
        array_ptr[j + 1] = temp;
    }

    
   // Display(array_ptr,array_size);
   return array_ptr;
}
