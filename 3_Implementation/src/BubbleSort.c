#include "Sorting.h"
/**
 * @brief Bubble Sort function 
 * 
 * @param array_ptr 
 * @param array_size 
 * @return int* 
 */
int* BubbleSort(int array_ptr[], int array_size)
{
      
     for (int i = 0; i < array_size-1; i++)        
       for (int j = 0; j < array_size-i-1; j++) 
           if (array_ptr[j] > array_ptr[j+1])
               swap(&array_ptr[j], &array_ptr[j+1]);
  // printf("Bubble Sort: ");
  return array_ptr;
}
