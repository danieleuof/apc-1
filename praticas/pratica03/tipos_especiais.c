#include <stdio.h>
int main () {
    int numero_de_paises = 195;
    int numero_de_idiomas = 7100;
    long int populacao_mundial = 8274065924L;
    long double proporcao_aurea = 1.61803398874989484820L;

    printf("O numero de paises eh %i\n", numero_de_paises);
    printf("O numero de idiomas eh %i\n", numero_de_idiomas);
    printf("A populacao mundial eh %lld\n", populacao_mundial);
    printf("A proporcao aurea eh %.19Lf\n", proporcao_aurea);


    return 0;
}