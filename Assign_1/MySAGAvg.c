/** @file MySAGAvg.c
 * @brief Average - function
 *
 * This function does the average of an array, returns the average of the values of the stream  
 * window (rounded to an int)
 * 
 * @author
 * @date 23 March 2022
 * @bug No known issues
 */

/* Includes */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "module.h"

/**
 * @brief Average function
 *
 * Average function, returns the average of the values of the stream window (rounded to an int)
 * 
 * 
 * @return always returns the average
 */

int MySAGAvg(int arr[])
{
    int total = 0,i;

    int len = strlen(arr);
    for(i=0; i<=len; i++){
        total = total + arr[i];     //loop for calculating total
    }

    int avg = total/i;              //calculate average
    printf("The average is:%.2d ", avg);
    return avg;
}

