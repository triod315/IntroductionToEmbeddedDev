/**
 * @file stats.h
 * @brief This file contains the declaration of the functions for the statistics.
 *
 * @author Oleksandr Hryshchuk 
 * @date June 18, 2022  
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the statistics of an array including minimum, maximum, mean, and median to stdout.
 * 
 * @param array_ptr Pointer to the first element of the array.
 * @param array_size Size of the array.
 *
 */
void print_statistics(unsigned char* array_ptr, size_t array_size);

/**
 * @brief Prints elements of an array to stdout.
 * 
 * @param array_ptr Pointer to the first element of the array.
 * @param array_size Size of the array.
 */
void print_array(unsigned char* array_ptr, size_t array_size);

/**
 * @brief Finds the median value of an array.
 * 
 * @param array_ptr Pointer to the first element of the array.
 * @param array_size Size of the array.
 * @return unsigned char The median value of the array. 
 */
unsigned char find_median(unsigned char* array_ptr, size_t array_size);

/**
 * @brief Prints elements of an array to stdout. Sorts the array from largest to smallest.
 * 
 * @param array_ptr Pointer to the first element of the array.
 * @param array_size Size of the array.
 */
void sort_array(unsigned char* array_ptr, size_t array_size);

/**
 * @brief Finds the mean of an array.
 * 
 * @param array_ptr Pointer to the first element of the array.
 * @param array_size Size of the array.
 * @return unsigned char 
 */
unsigned char find_mean(unsigned char* array_ptr, size_t array_size);

/**
 * @brief Prints elements of an array to stdout. Sorts the array from largest to smallest.
 * 
 * @param array_ptr Pointer to the first element of the array.
 * @param array_size Size of the array.
 */
void sort_array(unsigned char* array_ptr, size_t array_size);

/**
 * @brief Finds maximum value in an array.
 * 
 * @param array_ptr Pointer to the first element of the array.
 * @param array_size Size of the array.
 * @return unsigned char 
 */
unsigned char find_maximum(unsigned char* array_ptr, size_t array_size);

/**
 * @brief Finds minimum value in an array.
 * 
 * @param array_ptr Pointer to the first element of the array.
 * @param array_size Size of the array.
 * @return unsigned char 
 */
unsigned char find_minimum(unsigned char* array_ptr, size_t array_size);

#endif /* __STATS_H__ */
