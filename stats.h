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
 * @brief print_statistics print XX array content on the screen. 
 *
 * This function print statistics a function that prints
 * the statistics of an array includint minimum,
 * maximum, mean, and median.
 *
 * @param unsigned char *min[] Pointer to minimum value.
 * @param unsigned char *max[] Pointer to maximum value.
 * @param unsigned char *mean[] Pointer to mean/average value.
 * @param unsigned char *med[] Pointer to median value.
 *
 * @return 0
 */
void print_statistics(unsigned char *min[], unsigned char *max[], unsigned char *mean[],unsigned char *med[]);

/**
 * @brief print_array print XX array content on the screen. 
 *
 * This function print on the screen given an array of 
 * data and a length.
 *
 * @param unsigned char *data[] Pointer to data array.
 * @param unsigned int SIZE Array size
 *
 * @return 0
 */
void print_array(unsigned char *data[], unsigned int SIZE);

/**
 * @brief find_median find median value
 *
 * This function find and return a value that separating the higher
 * half from lower half of a data array.
 *
 * @param unsigned char *data[] Pointer to data array.
 * @param unsigned int SIZE Array size
 *
 * @return 0
 */
void find_median(unsigned char *data[], unsigned int SIZE);

/**
 * @brief find_mean return average value
 *
 * This function returns the mean of given an array of 
 * data and a length
 *
 * @param unsigned char *data[] Pointer to data array.
 * @param unsigned int SIZE Array size
 *
 * @return unsigned char mean Average value
 */
void find_mean(unsigned char *data[], unsigned int SIZE);

/**
 * @brief find_maximum find maximum value of an array.
 *
 * This function check each n-element of data array 
 * and return highest value.
 *
 * @param unsigned char *data[] Pointer to data array.
 * @param unsigned int SIZE Array size
 *
 * @return unsigned char maximum
 */
void find_maximum(unsigned char *data[], unsigned int SIZE);

/**
 * @brief find_minimum find minimum value of an array.
 *
 * This function check each n-element of data array 
 * and return lowest value.
 *
 * @param unsigned char *data[] Pointer to data array.
 * @param unsigned int SIZE Array size
 *
 * @return unsigned char minimum
 */
void find_minimum(unsigned char *data[], unsigned int SIZE);

/**
 * @brief sort_array function sort given array by Z-A.
 *
 * Given an array of data and a length, sort the array
 * from largest to smallest.
 *
 * @param unsigned char *data[] Pointer to data array.
 * @param unsigned int SIZE Array size
 *
 * @return 0
 */
void sort_array(unsigned char *data[], unsigned int SIZE);

#endif /* __STATS_H__ */

