#ifndef __SEARCHING_H__
#define __SEARCHING_H__

#include <stdio.h>

int search_array(int *arr, int needle, int start, int end);
int linear_search(int *arr, int size, int key);
int binary_search(int *arr, int size, int key);
int ternary_search(int *arr, int size, int key);
int exponential_search(int *arr, int size, int key);
int interpolation_search(int *arr, int size, int key);
int jump_search(int *arr, int size, int key);

#endif /* __SEARCHING_H__ */
