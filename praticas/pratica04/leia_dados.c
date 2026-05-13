#include <stdio.h>
int main () {

    int idade;
    char sexo;
    float altura;
    double peso;

    printf("Qual eh a sua idade? ");
    scanf("%i", &idade);
    while(getchar() != '\n'); //limpar o buffer

    printf("Qual a sua altura? ");
    scanf("%f", &altura);
    while(getchar() != '\n');

    printf("Qual eh o seu sexo? ");
    scanf("%c", &sexo);
    while(getchar() != '\n');
    
    printf("Quanto eh o seu peso? ");
    scanf("%lf", &peso);
    while(getchar() != '\n');

    printf("\n");
    printf("====================\n");
    printf("Informações pessoais\n");
    printf("====================\n");
    printf("Idade:      %i anos\n", idade);
    printf("Altura:     %.2f\n", altura);
    printf("Sexo:       %c\n", sexo);
    printf("Peso:       %.3lf\n", peso);
    printf("====================\n");

    return 0;
}