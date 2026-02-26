//
#include<stdio.h>
#include <math.h>//for math stuff/calculations
#include <string.h>//for string stuff
#include <stdbool.h>

int main(){

    int grade = 97;
    bool isProgramming = true;
    if (grade > 90){
        printf("Your grade is %d percent, That is an A!\n", grade);
    }else if (grade > 80){
        printf("Your grade is %d percent, That is an B!\n", grade);
    }else if (grade > 70){
        printf("Your grade is %d percent, That is an C!\n", grade);
    }else if (grade > 60){
        printf("Your grade is %d percent, That is an B!\n", grade);
    }else{
        printf("Your grade is %d percent, That is a failing grade. FIX IT!\n", grade);
    }

    int num = 4;
    if (num < 10 && num >-10){
       printf("Your number is %d, That is single digit number\n", num);
    }else if (num < 100 && num >-100){
        printf("Your number is %d, That is double digit number\n", num);
    }else if (num < 1000 && num >-1000){
        printf("Your number is %d, That is triple digit number\n", num);
    }else{
        printf("THATS A BIG NUMBER!");
    }

    char name[] = "Andy";
    if (strcmp(name, "Andy") == 0){
        printf("Welcome Admin\n");
    }else{
       printf("Welcome %s!", name);
    }


return 0;
}