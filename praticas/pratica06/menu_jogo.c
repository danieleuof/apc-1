#include <stdio.h> 
int main () {
    int opcao_escolhida;

    printf("===================\n");
    printf("       MENU\n");
    printf("===================\n");
    printf("1 - Novo jogo\n");
    printf("2 - Continuar jogo\n");
    printf("3 - Ver pontuação\n");
    printf("4 - Sair\n");
    printf("\n");
    printf("Escolha uma opcao: ");
    scanf("%i", &opcao_escolhida);
    while(getchar() != '\n');

    switch(opcao_escolhida) {
        case 1: printf("A opcao escolhida foi: Novo jogo.\n"); break;
        case 2: printf("A opcao escolhida foi: Continuar jogo.\n"); break;
        case 3: printf("A opcao escolhida foi: Ver pontuacao.\n"); break;
        case 4: printf("A opcao escolhida foi: Sair.\n"); break;
        default: printf("Opcao invalida! Tente novamente.\n");
    }

    return 0;
}