/**
 * @file stats.c
 * @brief This file contains the functions for computing the statistics of a given array of data.
 *
 * @author Oleksandr Hryshchuk
 * @date June 18, 2022
 *
 */

#include <stddef.h>
#include <stdio.h>
#include "stats.h"

/**
 * @brief Prints the statistics of an array including minimum, maximum, mean, and median to stdout.
 * 
 * @param array_ptr Pointer to the first element of the array.
 * @param array_size Size of the array.
 *
 */
void print_statistics(unsigned char* array_ptr, size_t array_size)
{
  unsigned char min = find_minimum(array_ptr, array_size);
  unsigned char max = find_maximum(array_ptr, array_size);
  unsigned char mean = find_mean(array_ptr, array_size);
  unsigned char median = find_median(array_ptr, array_size);

  printf("Array's Statistics:\n");
  printf("Minimum: %d\n", min);
  printf("Maximum: %d\n", max);
  printf("Mean: %d\n", mean);
  printf("Median: %d\n", median);
}

/**
 * @brief Prints elements of an array to stdout.
 * 
 * @param array_ptr Pointer to the first element of the array.
 * @param array_size Size of the array.
 */
void print_array(unsigned char* array_ptr, size_t array_size)
{
  for (size_t i = 0; i < array_size; i++) {
    printf("%d ", array_ptr[i]);
  }
  printf("\n");
}

/**
 * @brief Prints elements of an array to stdout. Sorts the array from largest to smallest.
 * 
 * @param array_ptr Pointer to the first element of the array.
 * @param array_size Size of the array.
 */
void sort_array(unsigned char* array_ptr, size_t array_size)
{
  for (size_t i = 0; i < array_size; i++) {
    for (size_t j = i + 1; j < array_size; j++) {
      if (array_ptr[i] < array_ptr[j]) {
        unsigned char temp = array_ptr[i];
        array_ptr[i] = array_ptr[j];
        array_ptr[j] = temp;
      }
    }
  }
}

/**
 * @brief Finds the median value of an array.
 * 
 * @param array_ptr Pointer to the first element of the array.
 * @param array_size Size of the array.
 * @return unsigned char The median value of the array. 
 */
unsigned char find_median(unsigned char* array_ptr, size_t array_size)
{
  sort_array(array_ptr, array_size);
  if (array_size % 2 == 0) {
    return (array_ptr[array_size / 2] + array_ptr[array_size / 2 - 1]) / 2;
  } else {
    return array_ptr[array_size / 2];
  }
}

/**
 * @brief Finds the mean of an array.
 * 
 * @param array_ptr Pointer to the first element of the array.
 * @param array_size Size of the array.
 * @return unsigned char 
 */
unsigned char find_mean(unsigned char* array_ptr, size_t array_size)
{
  unsigned int mean = 0;
  for (size_t i = 0; i < array_size; i++) {
    mean += array_ptr[i];
  }
  mean /= array_size;
  return mean;
}

/**
 * @brief Finds maximum value in an array.
 * 
 * @param array_ptr Pointer to the first element of the array.
 * @param array_size Size of the array.
 * @return unsigned char 
 */
unsigned char find_maximum(unsigned char* array_ptr, size_t array_size)
{
  unsigned char max = array_ptr[0];
  for (size_t i = 0; i < array_size; i++) {
    if (array_ptr[i] > max) {
      max = array_ptr[i];
    }
  }
  return max;
}

/**
 * @brief Finds minimum value in an array.
 * 
 * @param array_ptr Pointer to the first element of the array.
 * @param array_size Size of the array.
 * @return unsigned char 
 */
unsigned char find_minimum(unsigned char* array_ptr, size_t array_size)
{
  unsigned char min = array_ptr[0];
  for (size_t i = 0; i < array_size; i++) {
    if (array_ptr[i] < min) {
      min = array_ptr[i];
    }
  }
  return min;
}

/* Size of the Data Set */
#define SIZE (40)

void main() {
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  sort_array(test, SIZE);
  print_array(test, SIZE);
  print_statistics(test, SIZE);
}

/* Add other Implementation File Code Here */
