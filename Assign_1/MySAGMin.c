/** @file MySAGMin.c
 * @brief Minimum - function
 *
 * This function gets the minimum value of the array
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
 * @brief Minimum - function
 *
 * This function gets the minimum value of the array
 * 
 * 
 * @return returns the minimum value of the array
 */

int MySAGMin(int arr[])
{
    int min = 0,i;

    int len = strlen(arr);
    for(i=0; i<len; i++){          //loop for calculating max
        if(arr[i] < arr[i+1]){
            min = arr[i];
        }
    }

    printf("The max is:%.2d ", min);
    return min;
}
