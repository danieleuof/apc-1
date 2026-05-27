#include <stdio.h>
int main() {

    int numero = 0;
    int fatorial = 1;

    printf("Entre com um número inteiro positivo para calcular seu fatorial: ");
    scanf("%i", &numero);
    while(getchar() != '\n');

    // i começa em 1 e vai até o numero, SE o numero for menor ou igual a "numero", soma 1 na variavel i (++i)
    for (i = 1; i <= numero; ++i) {
            fatorial = fatorial * i;
    }
    printf("O fatorial do número escolhido é: %i \n", fatorial);

    return 0;
}