#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int MySAGMax(int arr)
{
    int max = 0,i;

    int len = strlen(arr);
    for(i=0; i<len; i++){          //loop for calculating max
        if(arr[i] > arr[i+1]){
            max = arr[i];
        }
    }

    printf("The max is:%.2f ", max);
    return max;
}

