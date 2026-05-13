#include <stdio.h>
int main () {
    #define ICMS 0.17
    #define ISS 0.05
    #define PIS 0.0165
    // ICMS (17%), ISS (5%) e PIS (1,65%)

    float valor_produto;

    printf("Qual o valor do produto? ");
    scanf("%f", &valor_produto);

    float valor_icms = valor_produto * ICMS;
    float valor_iss = valor_produto * ISS;
    float valor_pis = valor_produto * PIS;
    float valor_final = (1 + ICMS + ISS + PIS) * valor_produto;

    printf("O valor do produto é: R$ %f\n", valor_produto);
    printf("O valor do imposto ICMS a ser acrescentado é: R$ %f\n", valor_icms);
    printf("O valor do imposto ISS a ser acrescentado é:  R$ %f\n", valor_iss);
    printf("O valor do imposto PIS a ser acrescentado é:  R$ %f\n", valor_pis);
    printf("O valor final do produto, com os impostos, é: R$ %f\n", valor_final);

    return 0;
}