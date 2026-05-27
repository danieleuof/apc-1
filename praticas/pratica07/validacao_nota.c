#include <stdio.h>
int main() {
    float nota;

    printf("Entre com sua nota (0 a 10): ");
    scanf("%f", &nota);
    while(getchar() != '\n');

    while (nota < 0 || nota > 10) {

        printf("Erro! Entre com uma nota entre 0 e 10.\n");

        printf("Entre com sua nota (0 a 10): ");
        scanf("%f", &nota);
        while(getchar() != '\n');
    }

    printf("Sua nota é: %.2f\n", nota);

    return 0;
}