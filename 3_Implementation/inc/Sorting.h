/**
 * @file Sorting.h
 * @author Nallanukala Krishna Tulasi
 * @brief 
 * @version 0.1
 * @date 2021-09-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __SORTING_H__
#define __SORTING_H__

#include <stdio.h>
#include <stdlib.h>

void swap(int* variable_one, int* variable_two);

void Display(int array_ptr[], int array_size);

int* BubbleSort(int array_ptr[], int array_size);

int* InsertionSort(int array_ptr[], int array_size);

int* SelectionSort(int array_ptr[], int array_size);

int* QuickSort(int array_ptr[], int first_index, int array_size);

int* MergeSort(int array_ptr[], int first_index, int array_size);

#endif 
