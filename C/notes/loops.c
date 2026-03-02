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
        }else if (guess <number){
            printf("your guess is too low. Try again.\n");
        }else{
            printf("your guess is too high. Try again.\n");
        }
        }


}



return 0;
}