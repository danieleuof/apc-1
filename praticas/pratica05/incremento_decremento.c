#include <stdio.h>
int main () {

    int numero;

    printf("Entre com um numero inteiro: ");
    scanf("%i", &numero);

    int reset = numero;

    printf("Incremento pré-fixado: %i\n", ++numero);
    numero = reset; //resetando o valor
    printf("Decremento pré-fixado: %i\n", --numero);
    numero = reset;
    printf("Incremento pós-fixado: %i\n", numero++);
    numero = reset;
    printf("Decremento pós-fixado: %i\n", numero--);
    numero = reset;

    return 0;
}