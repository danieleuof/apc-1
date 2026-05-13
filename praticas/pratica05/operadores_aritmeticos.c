#include <stdio.h>
int main () {

    float numero1;
    float numero2;

    printf("Entre com um número real: ");
    scanf("%f", &numero1);
    while(getchar() != '\n');
    printf("Entre com outro número real: ");
    scanf("%f", &numero2);
    while(getchar() != '\n');

    float soma = numero1 + numero2;
    float subtracao = numero1 - numero2;
    float multiplicacao = numero1 * numero2;
    float divisao = numero1 / numero2;

    printf("%f + %f = %f\n", numero1, numero2, soma);
    printf("%f - %f = %f\n", numero1, numero2, subtracao);
    printf("%f * %f = %f\n", numero1, numero2, multiplicacao);
    printf("%f / %f = %f\n", numero1, numero2, divisao);

    return 0;
}