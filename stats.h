/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief print_statistics print data array content on the screen. 
 *
 * This function print statistics a function that prints
 * the statistics of an array includint minimum,
 * maximum, mean, and median.
 *
 * @param unsigned char *min Pointer to minimum value.
 * @param unsigned char *max Pointer to maximum value.
 * @param double *mean Pointer to mean/average value.
 * @param unsigned char *med Pointer to median value.
 *
 */
void print_statistics(unsigned char *min, unsigned char *max, double *mean,unsigned char *med);

/**
 * @brief print_array print XX array content on the screen. 
 *
 * This function print on the screen given an array of 
 * data and a length.
 *
 * @param unsigned char *data[] Pointer to data array.
 * @param unsigned int SIZE Array size
 *
 */
void print_array(unsigned char data[], unsigned int data_size);

/**
 * @brief find_median find median value
 *
 * This function find and return a value that separating the higher
 * half from lower half of a data array.
 *
 * @param unsigned char data[] Pointer to data array.
 * @param unsigned int SIZE Array size
 *
 * @return unsigned char median Index of median value
 */
int find_median(unsigned char data[], unsigned int data_size);

/**
 * @brief find_mean return average value
 *
 * This function returns the mean of given an array of 
 * data and a length
 *
 * @param unsigned char data[] Pointer to data array.
 * @param unsigned int SIZE Array size
 *
 * @return unsigned char mean Average value
 */
double find_mean(unsigned char data[], unsigned int data_size);

/**
 * @brief find_maximum find maximum value of an array.
 *
 * This function check each n-element of data array 
 * and return highest value.
 *
 * @param unsigned char data[] Pointer to data array.
 * @param unsigned int SIZE Array size
 *
 * @return data[data_size-1]
 */
int find_maximum(unsigned char data[], unsigned int data_size);

/**
 * @brief find_minimum find minimum value of an array.
 *
 * This function check each n-element of data array 
 * and return lowest value.(Tip: as we already sorted
 * data array maximum value lays in last index of array)
 *
 * @param unsigned char data[] Pointer to data array.
 * @param unsigned int SIZE Array size
 *
 * @return data[0]
 */
int find_minimum(unsigned char data[], unsigned int data_size);

/**
 * @brief sort_array function sort given array by Z-A.
 *
 * Given an array of data and a length, sort the array
 * from largest to smallest.(Tip: as we already sorted
 * data array minimum value lays in data[0] - 0 index)
 *
 * @param unsigned char data[] Pointer to data array.
 * @param unsigned int SIZE Array size
 *
 */
void sort_array(unsigned char data[], unsigned int data_size);

/**
 * @brief swap two values
 *
 * Function takes two pointers to variables and swap their value
 * in between through third variable.
 *
 * @param int *ptr1 Pointer to first variable.
 * @param int *ptr2 Pointer to second variable.
 *
 */
void swap(unsigned char* ptr1, unsigned char* ptr2);

#endif /* __STATS_H__ */

