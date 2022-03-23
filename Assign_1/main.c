/** @file main.c
 * @brief Test functions
 *
 * main.c is a file to test the functions created
 * 
 * @author 
 * @date 23 March 2022
 * @bug Not working
 */

/* Includes */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "module.h"


/**
 * @brief Test functions
 *
 * main.c is a file to test the functions created
 * 
 * 
 * @return main always returns 0
 */


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
