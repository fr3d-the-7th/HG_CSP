// HG silly sentences
#include<stdio.h>
#include <math.h>//for math stuff/calculations
#include <string.h>//for string stuff

int main(){

    char d1[30];
    char a1[30];
    char n1[30];
    char v1[30];
    char n2[30];

    printf("tell me a random day: \n");
    scanf("%s", &d1);


    printf("tell me a random adjective: \n");
    scanf("%s", &a1);


    printf("tell me a random noun: \n");
    scanf("%s", &n1);


    printf("tell me a random verb ending in -ing: \n");
    scanf("%s", &v1);


    printf("tell me a another random noun: \n");
    scanf("%s", &n2);




    strcat(a1, " ");
    strcat(a1, n1);


    printf("I was late on %s because a %s was %s on my %s.\n", d1, a1, v1, n2);
    return 0;
}