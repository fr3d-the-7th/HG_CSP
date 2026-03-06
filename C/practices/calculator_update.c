//HG 6 Financial Calculator - c
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float get(char* subject){
    float bill;
    printf("Tell me your monthly %s: $\n", subject);
    scanf("%f", &bill);
    return bill;
}

float calcu(float bucks, float income){
float percent = bucks/income*100;

return percent;
}
int main(){
float income = get("income");
float util = get("utilitiles bill");
float food = get("grocery buget");
float vroom = get("transpotation cost");
float save = get("investment into saving");
float extra = income-util-food-vroom-save;

printf("Your monthly income is $%.2f\n", income);
printf("your monthly utilitiles bill is %.2f percent of your income.\n", calcu(util, income));
printf("your monthly grocery buget is %.2f percent of your income.\n", calcu(food, income));
printf("your monthly transpotation cost is %.2f percent of your income.\n", calcu(vroom, income));
printf("your monthly investment into saving is %.2f percent of your income.\n", calcu(save, income));
printf("You have $%.2f left thats %.2f percent of your income! Enjoy it or pay off any debts! :)\n", extra, calcu(extra, income));
return 0;
}