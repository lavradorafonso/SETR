/** @file MySAGMax.c
 * @brief Maximum - function
 *
 * This function gets the maximum value of the array
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
 * @brief Maximum - function
 *
 * This function gets the maximum value of the array
 * 
 * 
 * @return returns the maximum value of the array
 */

int MySAGMax(int arr[])
{
    int max = 0,i;

    int len = strlen(arr);
    for(i=0; i<len; i++){          //loop for calculating max
        if(arr[i] > arr[i+1]){
            max = arr[i];
        }
    }

    printf("The max is:%.2d ", max);
    return max;
}

