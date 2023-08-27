#include <stdio.h>

#define NUM_TRY 5

// evitar "numeros magicos" numeros no meio do código, sempre crie uma var ou defina antes, MUITO RUIM para manutenção futura


int main() {


        // printf == print    

    printf("################################\n");
    printf("* Welcome to my guessing game! *\n");
    printf("################################\n");
    printf("\n");


        // sempre declarar antes do que é a variável (int, floar, double, char)
    
    int secretnumber = 42;
    int try;
    
    for (int i = 0; i <= NUM_TRY; i++) {

        printf("You already used %d of %d chances\n", i, NUM_TRY);
        printf("Take a guess!!!\n");
        printf("-----------------------------------\n");


            // scanf = input;

        scanf("%d", &try);
        printf("\nYour guess was %d.\n\n", try);

        if (try < 0){
            printf("You cant use a negative number.\n");
            printf("Put a positive number.\n\n");
            i--;
            continue; // continue ée um break que não finaliza o for "break menos bravo"
        }
        
            // falso -> 0 e Verdadeiro -> 1;
        
        int win = (try == secretnumber); 
        int higher = (try > secretnumber);
        int lower = (try < secretnumber);
        int over = (i == NUM_TRY);

        
        if (win) {
            printf("Congrats! You win! The Secret Number is %d.\n\n\n", secretnumber);
            break;

        }else if (higher) {
            printf("You Number is HIGHER than the Secret Number.\n Try again!\n\n");

        }else if(lower) {
            printf("You Number is LOWER than the Secr5et Number.\n Try again!\n\n");
            
        }else if (over) {
            printf("Game OVER!\n");
            printf("You missed! HA-HA-HA!!!\n\n\n");
            break;
        }
    
        printf("You missed! HA-HA-HA!!!\n\n\n");
        printf("TRY AGAIN!!!\n\n\n");
        
        }
    return 0;
}
