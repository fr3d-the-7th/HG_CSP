//HG Loops and Lists notes
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int main(){
//example 1
    int i = 1;
    while(i <= 10){
        printf("%d\n", i);
        i++; //increase i by 
    
    //get random number
    srand(time(NULL));//;lets us create a rando number
    printf("%d\n", (rand() % 5) + 5);
    printf("%d\n", (rand() % 10) + 1);
    printf("%d\n", rand() % 11);
    }
    //example 2
    int goose = rand() %10 +1;
    int count = 1;
    while(count < goose){
        printf("Duck\n");
        count++;
    }
    printf("GOOSE!\n");

    int number = rand() %20 + 1;
    while (true){
        int guess;
        printf("Guess a number between 1 and 20:");
        if (guess == number){
            printf("You win! The number was %d\n", number);
            break;
        }else if (guess <number){
            printf("your guess is too low. Try again.\n");
        }else{
            printf("your guess is too high. Try again.\n");
        }
        }


}

//for loops ex 1

for(int i = 20; i >= 0; i--){

    printf("%d, ", i);
    }
//for loops ex 2
    int grades[] = {65,81,9,78,98,97,90,78};
int grade_len = sizeof(grades)/sizeof(grades[0]);
for(int index = 0; index <grade_len; index++){
    printf("%d\n", grades[index] +5);


}
//for loops ex 3
srand(time(NULL));
int goose = rand() %15 +1 

for(int count = 1;count < goose; count++);{

    printf("Duck\n");
}
printf("Goose!\n");
return 0;
}