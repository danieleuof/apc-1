#include <stdio.h>
int main () {

    float nota1;
    float nota2;

    printf("Qual a sua primeira nota? ");
    scanf("%f", &nota1);
    while(getchar() != '\n'); //limpar o buffer
    printf("Qual a sua segunda nota? ");
    scanf("%f", &nota2);
    printf("A primeira nota foi: %.2f\n", nota1);
    printf("A segunda nota foi: %.2f\n", nota2);

    return 0;
}