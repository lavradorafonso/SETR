#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "module.h"

int main(void){
    printf("Teste: ");
    int a = MySAGInit(5);
    a = MySAGInsert(a,4);
    int c = MySAGFreq(a,4);
    int avg = MySAGAvg(a);
    int max = MySAGMax(a);
    int min = MySAGMin(a);

    return 0;
}
