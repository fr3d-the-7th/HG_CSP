// HG integers and floats notes
#include<stdio.h>
#include <math.h>

int main(){
    int people = 11;
    int apples = 24;
    int room = 200;
     printf("%d, %d, %d\n", people, apples, room);

    float pi = 3.1415f;
    float liters = 2.4;
    float fahrenheit = 72.8;
    printf("pi = %f, liters = %.2f, fahrenheit = %.1f\n", pi, liters, fahrenheit);
    printf("Each person gets %.2f apples\n", (float) apples/people);
    printf("%d\n", (int) round(liters));
    printf("%d is 2 to the power of three. \n", (int) pow(2, 3));
    printf("%.3f\n",sqrt(10));


return 0;
}