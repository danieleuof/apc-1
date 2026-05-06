#include <stdio.h>
int main () {
    int numero;

    printf("Entre com um número inteiro maior que 999: ");
    scanf("%i", &numero);
    while(getchar() != '\n');

    int milhares = numero / 1000;
    int centenas = (numero % 1000) / 100;
    int dezenas = (numero % 100) /10;
    int unidades = numero % 10;
    
    printf("Decomposicao do numero %i:\n", numero);
    printf("Milhar(es): %i\n", milhares);
    printf("Centena(s): %i\n", centenas);
    printf("Dezena(s):  %i\n", dezenas);
    printf("Unidade(s): %i\n", unidades);

    return 0;
}