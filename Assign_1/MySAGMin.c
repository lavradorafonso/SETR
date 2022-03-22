#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
