#include <stdio.h>
#include <string.h>

int MySAGFreq(int arr[], int value){
	int len = strlen(arr);
	int i =0;
	int cnt=0;
	for(i; i<len; i++){
		if(arr[i] == value){cnt++;};
	}
	return cnt;
}
