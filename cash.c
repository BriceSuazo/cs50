#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){

    float n;
    int cents;

    do{
        n = get_float("Change owed: ");
        cents = round(n * 100);
    }while (cents <= 0);


    float counter = 0;

    if(cents >= 25){
        do{
            cents = cents - 25;
            counter = counter + 1;
        }while (cents >= 25);
    }

    if(cents >= 10 && cents < 25){
        do{
            cents = cents - 10;
            counter = counter + 1;
        }while (cents >= 10);
    }

    if(cents >= 5 && cents < 10){
        do{
            cents = cents - 5;
            counter = counter + 1;
        }while (cents >= 5);
    }

    if(cents >= 1 && cents < 5){
        do{
            cents = cents - 1;
            counter = counter + 1;
        }while (cents >= 1);
    }

    printf("%.0f", counter);
}