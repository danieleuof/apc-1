#include <stdio.h> 
int main () {
    int dia;

    printf("Entre com um um número correspondente ao dia da semana (1 a 7): ");
    scanf("%i", &dia);
    while(getchar() != '\n');

    /* if(dia == 1 || dia == 7) {
        printf("O dia %i eh um final de semana!");
    } else {
        printf("O dia %i eh um dia util!\n");
    } */
    switch(dia) {
        case 1: printf("O dia eh um final de semana!\n"); break;
        case 2: printf("O dia eh um dia util!\n"); break;
        case 3: printf("O dia eh um dia util!\n"); break;
        case 4: printf("O dia eh um dia util!\n"); break;
        case 5: printf("O dia eh um dia util!\n"); break;
        case 6: printf("O dia eh um dia util!\n"); break;
        case 7: printf("O dia eh um final de semana!\n"); break;
        default: printf("Dia invalido! Tente de novo.\n");
    }

    return 0;
}