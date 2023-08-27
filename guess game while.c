#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // imprime cabecalho do nosso jogo
    printf("******************************************\n");
    printf("* Welcome to my guessing game! *\n");
    printf("******************************************\n");

    // como gerar random nums
    int segs = time(0);     // time(0) é uma função que está sempre mudando de valor pois ela é de acordo com o tempo que está passando a cada momento
    srand(segs);            // srand passa a "semente" para a função rand poder criar o número random
    
    int bignum = rand();    // devolve um num random (dependendo da seed (semente) para que os num gerados sejam diferentes)

    int secretnumber = bignum % 100;

    int guess;
    int try = 1;

    double points = 1000;

    while(1) {

        printf("Guess numbber %d\n", try);
        printf("Take a guess!\n\n");

        scanf("%d", &guess);
        printf("\nYour guess was %d\n\n", guess);

        if(guess < 0) {
            printf("You cant use a negative number!\n\n");
            continue;
        }

        int acertou = (guess == secretnumber);
        int maior = guess > secretnumber;

        if(acertou) {
            printf("Congrats! You win!\n");
            printf("Play again your a good player!\n\n");

            break;
        }

        else if(maior) {
            printf("You Number is HIGHER than the Secret Number.\n\n");
        } 

        else {
            printf("You Number is LOWER than the Secr5et Number.\n\n");
        }

        try++;

        // abs define o módulo do numero (SEMPRE POSITIVO)
        // Declarar o tipo antes da VARIAVEL ou VALOR
        
        double losspoints = abs(guess - secretnumber) / (double)2;     
        points = points - losspoints;
    }

    printf("The end!\n");
    printf("You win with %d guesses!\n", guess);
    printf("Total points: %.1f\n\n\n", points);

        // %.xf para imprimir o numero x de casas após a virgula
}