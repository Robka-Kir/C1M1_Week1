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
 * @file stats.c
 * @brief Program find, sort and print value given in an array
 *
 * This program find in given an array minimum, maximum, mean/average, median 
 * value and print them to the screen. More over program sort all array element
 * descent order (Z-A) and print it. After all analysis and sorting is done,
 * program print that data to screen in nicely formatted table.
 *
 * @author Robert Kirilin
 * @date 2020-09-27
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char data[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char max, min, median;
  double mean;
  
  /* Statistics and Printing Functions Go Here */
  printf("\nPrinting default data array"); 
  print_array(data, SIZE);  // Printing default data array

  sort_array(data, SIZE);   // Call corting function with data[SIZE] array to sord 

  printf("\nPrinting sorted data array"); 
  print_array(data, SIZE);  // Printing sorted data array

  median = find_median(data,SIZE);// Assign median value with function find_median() returned value
  mean = find_mean(data,SIZE);    // Assign mean value with function find_mean() returned value
  max = find_maximum(data,SIZE);  // Assign max value with function find_maximum() returned value
  min = find_minimum(data,SIZE);  // Assign min value with function find_minimum() returned value

  print_statistics(&max, &min, &mean, &median); // Print table with results
}

/* Add other Implementation File Code Here */
void swap(unsigned char* ptr1, unsigned char* ptr2){
  unsigned char temp;
  temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp; 
}

void print_statistics(unsigned char *min, unsigned char *max, double *mean,unsigned char *med){
  // Table header
  printf("\nData array statistics\n%-10s %-10s %-10s %-10s\n", "Minimum", "Maximum", "Mean", "Median");
  printf("\n%-10.0u %-10.0u %-10.3f %-10.0u\n",*min, *max, *mean, *med);
}

void print_array(unsigned char data[], unsigned int data_size){ 
  for(unsigned int i = 0; i < data_size; i++){
    if(i%8 == 0)
      printf("\n");    
    printf("%d\t", data[i]);
  }
  printf("\n\n");
}

int find_median(unsigned char data[], unsigned int data_size){
  int index = (data_size+1)/2-1;
  return (data[index]);
}

double find_mean(unsigned char data[], unsigned int data_size){
  double sum = 0.0;
  for(unsigned int i = 0; i < data_size; i++)
    sum += data[i];
  return (sum/data_size);
}

int find_maximum(unsigned char data[], unsigned int data_size){
  return data[data_size-1];
}

int find_minimum(unsigned char data[], unsigned int data_size){   
  return data[0];
}

void sort_array(unsigned char data[], unsigned int data_size){
  int i, j, temp;
  for(i = 0; i < data_size-1; i++){
    for(j = 0; j < data_size-i-1; j++){
      if(data[j] > data[j+1])
        swap(&data[j], &data[j+1]);
    }
  }
}


