//
#include<stdio.h>
#include <math.h>//for math stuff/calculations
#include <string.h>//for string stuff
#include <stdbool.h>//for blloean statements
#include <stdlib.h>
#include <time.h>

int main(){
    //example 1
    int grades[] = {65,81,9,78,98,97,90,78};
    printf("%d\n", grades[2]); //sigle item from the array based on index # (0 is an index #)
    grades[2] = 64;
    printf("%d\n", grades[2]);
    grades[4] = 0;

return 0;
}