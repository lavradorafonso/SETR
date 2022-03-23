/** @file MySAGFreq.c
 * @brief Frequency of a given value - function
 *
 * This function counts the number of times a given value is on an array
 * 
 * @author
 * @date 23 March 2022
 * @bug There are no known issues
 */

/* Includes */

#include <stdio.h>
#include <string.h>
#include "module.h"

/**
 * @brief Frequency of a given value - function
 *
 * This function counts the number of times a given value is on an array
 * 
 * 
 * @return returns the number of times a given value is on an array
 */

int MySAGFreq(int arr[], int value){
	int len = strlen(arr);
	int i =0;
	int cnt=0;
	for(i; i<len; i++){
		if(arr[i] == value){
			cnt++;
		}
	}
	return cnt;
}
