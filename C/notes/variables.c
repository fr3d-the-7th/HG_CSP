// This is how you write comments in C!
#include <stdio.h> // lets you do inputs and outputs

int main(){
    int number = 8;
    float pi = 3.14;
    char grade = 'A'; //single hcaracter= single quotes
    char name[] = "Jake"; //string use [] after nameing the varable

    printf("Working!\n\n");
    printf("%d\n", number);
    printf("The digits of pi are:%f\n", pi);
    printf("Your name is %s. You are %d old. You have an %c in programing. Pi is %f\n", name, number, grade, pi);
    return 0;
}
