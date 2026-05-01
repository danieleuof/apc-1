#include <stdio.h>
int main () {

    int primeiro_inteiro;
    int segundo_inteiro;

    printf("Entre com um inteiro: ");
    scanf("%i", &primeiro_inteiro);
    while(getchar() != '\n'); //limpar o buffer
    printf("Entre outro número inteiro: ");
    scanf("%i", &segundo_inteiro);
    printf("O primeiro inteiro escolhido foi: %i\n", primeiro_inteiro);
    printf("O segundo inteiro escolhido foi: %i\n", segundo_inteiro);

    return 0;
}