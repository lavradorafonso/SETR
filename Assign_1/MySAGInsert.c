#include <stdio.h>
#include <string.h>
#include "module.h"

int MySAGInsert(int arr[], int value)
{
	int len = strlen(arr);
	arr[len] = value;
	return arr; 
}
