#include "Sorting.h"
/**
 * @brief Selection Sort function
 * 
 * @param array_ptr 
 * @param array_size 
 * @return int* 
 */
int* SelectionSort(int* array_ptr, int array_size)
{
    int i, j, min_idx;
  
    // One by one move boundary of unsorted subarray
    for (i = 0; i < array_size-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < array_size; j++)
          if (array_ptr[j] < array_ptr[min_idx])
            min_idx = j;
  
        // Swap the found minimum element with the first element
        swap(&array_ptr[min_idx], &array_ptr[i]);
    }
    return array_ptr;
}
