#include <stdio.h> 
int main () {
/*
==============================
      N O T A    L E G A L
==============================
Produto         Qtd Valor Unit
Camiseta        002      39.99
Calca           001      89.90
Meia Social     003      19.99
==============================
Total                   229.85
*/

    printf("==============================\n");
    printf("     N O T A    L E G A L\n");
    printf("==============================\n");
    printf("Produto         Qtd Valor Unit\n");

    float quantidade_a1;
    float valor_a1;

    codigo_a1 = Camiseta;
    quantidade_a1 = 002f;
    valor_a1 = 39.99f;

    printf("%0.2f %39.99f\n", quantidade_a1, valor_a1);

    printf("==============================\n");

    return 0;
}