#include <stdio.h>
#include <cs50.h>

int main(void){

    int n;

    do{
        n = get_int("n: ");
    }while (n < 1);


    for(int i = 0; i < n; i++){
        for(int j = n-1; j > i; j--){
            printf(" ");
        }

        for(int l = 0; l <= i; l++){
            printf("#");
        }
        printf("  ");
        
        for(int l = 0; l <= i; l++){
            printf("#");
        }
        printf("\n");
    }

}