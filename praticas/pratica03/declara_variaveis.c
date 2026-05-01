#include <stdio.h>
int main () {

    int idade;
    char sexo;
    float altura;
    double peso;

    printf("Qual eh a sua idade? ");
    scanf("%i", &idade);
    while(getchar() != '\n'); //limpar o buffer
    printf("Qual eh o seu sexo? ");
    scanf("%c", &sexo);
    while(getchar() != '\n');
    printf("Qual a sua altura? ");
    scanf("%f", &altura);
    while(getchar() != '\n');
    printf("Quanto eh o seu peso? ");
    scanf("%lf", &peso);
    while(getchar() != '\n');

    printf("\n");
    printf("Voce tem:      %i anos\n", idade);
    printf("Seu sexo eh:   %c\n", sexo);
    printf("Sua altura eh: %.2f\n", altura);
    printf("Seu peso eh:   %.2lf\n", peso);

    return 0;
}