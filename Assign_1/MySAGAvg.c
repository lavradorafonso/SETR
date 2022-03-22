#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

