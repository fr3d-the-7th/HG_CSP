// HG Time of Day
#include<stdio.h>
#include <string.h>//for string stuff
#include <stdbool.h>//for blloean statements
int main(){

float tm;
printf("please enter the curent time in military and using a decimal instead of a colon (ie. 1:30 PM = 13.3): ");
scanf("%f", &tm);
if (tm < 12 && tm >= 5){
    printf("Top of the morning to ya!");

}else if (tm <= 17 && tm >= 12){
    printf("Good afternoon!");

}else if (tm >= 17 && tm <= 24){
    printf("Evening!");

}else if (tm >= 0 && tm < 5){
    printf("Go to bed or I will force you to, you sleep deprived zombie!");
    
}else{
    printf("You either don't know how time works, or have decided to be a jerk. Fix. It.");
}



return 0;
}