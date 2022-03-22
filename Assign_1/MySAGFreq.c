#include <studio.h>
#include <string.h>

int MySAGFreq(arr, value){
	int len = strlen(arr);
	int i =0;
	int cnt=0;
	for(i; i<len; i++){
		if(arr[i]==value){cnt++};
	}
	return cnt;
}
