/** @file MySAGInsert.c
 * @brief Insert - function
 *
 * This function adds an element to the stream
 * 
 * @author
 * @date 23 March 2022
 * @bug No known issues
 */

/* Includes */

#include <stdio.h>
#include <string.h>
#include "module.h"

/**
 * @brief Insert - function
 *
 * This function adds an element to the stream
 * 
 * 
 * @return returns the array with given values
 */

int MySAGInsert(int arr[], int value)
{
	int len = strlen(arr);
	arr[len] = value;
	return arr;
}
