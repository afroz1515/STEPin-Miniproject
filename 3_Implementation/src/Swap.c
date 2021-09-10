#include "Sorting.h"
/**
 * @brief Swap the elements passed into the "swap" function
 * 
 * @param variable_one 
 * @param variable_two 
 */
void swap(int* variable_one, int* variable_two)
{
    int temp=*variable_one;
    *variable_one=*variable_two;
    *variable_two=temp;
}
