// HG Finiancial Claculator - C
#include <stdio.h>
#include <math.h>

int main(){

    float income;
    float rent;
    float util;
    float food;
    float vroom;
    float save = income/10
    printf("Tell me your monthly income: \n");
    scanf("%f", &income);

    printf("Tell me your monthly rent: \n");
    scanf("%f", &rent);
    
    printf("Tell me your monthly utilitiles bill: \n");
    scanf("%f", &util);

 
    printf("Tell me your monthly grocery buget: \n");
    scanf("%f", &food);

    printf("Tell me your monthly transpotation cost: \n");
    scanf("%f", &vroom);

    printf("Your income is: %.2f.\n", income);
    printf("Your rent is: $%.2f. That's %.2f percent of you income.\n", rent, rent/income*100);
    printf("Your utilitiles bill is: $%.2f. That's %.2f percent of you income.\n", util, util/income*100);
    printf("your grocery buget is: $%.2f. That's %.2f percent of you income.\n", food, food/income*100);
    printf("Your transpotation cost is: $%.2f. That's %.2f percent of you income.\n", vroom, vroom/income*100);
    printf("It is recomended that individuals save 10 percent of their income. In your case that would be $%.2f\n", save);
    printf("After all expenses you have $%.2f left.\n", income-(rent+util+vroom+food);





}