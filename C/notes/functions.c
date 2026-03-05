// HG 6 functions notes in C
#include<stdio.h>
#include <math.h>//for math stuff/calculations
#include <string.h>//for string stuff
#include <stdbool.h>//for blloean statements
#include <stdlib.h>
#include <time.h>
// example 1
int x = 0;
void add(){
    x++;
}


//ex 2
float devide(int z, int y){
    return (float)z/ y;
}
//ex 3
void hello(char* name){
printf("hello %s. Welcome to my program!\n", name);


}

int main(){
    // example 1 continued
    add();
    add();
    add();
    add();
    add();
    add();
    add();
    add();
    add(); 
    add();
    printf("%d\n", x);
// example 2 continued
    float q = devide(8,4);
    printf("%.2f\n", q);
    printf("%.2f\n", devide(75,2));
 // example 3 continued
    hello("Alex");
    hello("Bob");
    hello("Jimmy");
    hello("Harry");
    hello("Joe");
    hello("Sue");
return 0;
}