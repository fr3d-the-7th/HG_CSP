// HG 6 FizzBuzz
#include<stdio.h>
#include <math.h>//for math stuff/calculations
#include <string.h>//for string stuff
#include <stdbool.h>//for blloean statements
#include <stdlib.h>
#include <time.h>

int main(){

for(int n = 1; n <= 50; n++ ){
    if(n%5 == 0 && n%3 == 0){
        printf("FizzBuzz\n");
    }else if(n%5 == 0){
        printf("Buzz\n");
    }else if( n%3 == 0){
        printf("Fizz\n");
    }else{
        printf("%d\n", n);
        
}
}

return 0;
}