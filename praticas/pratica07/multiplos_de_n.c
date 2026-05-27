#include <stdio.h>
int main() {
    int numero;
    int multiplos = 1;

    printf("Entre com um número inteiro positivo para imprimir seus múltiplos no intervalo de 1 a 100: ");
    scanf("%i", &numero);
    while(getchar() != '\n');

    printf("Alguns múltiplos do número %i são:\n"), numero;

    int i;
    for (i = 1; i <= 100; ++i) {
        if (i % numero == 0) {
            printf("%i ", i);
        }
    }
    printf("\n");

    return 0;
}