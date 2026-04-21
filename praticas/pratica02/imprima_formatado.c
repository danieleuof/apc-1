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

    char *produto_a1 = "Camiseta";  
    char *quantidade_a1 = "002";
    char *valor_a1 = "39.99";
    printf("%s        %s      %s\n", produto_a1, quantidade_a1, valor_a1);

    char *produto_a2 = "Calca";  
    char *quantidade_a2 = "001";
    char *valor_a2 = "89.90";
    printf("%s           %s      %s\n", produto_a2, quantidade_a2, valor_a2);

    char *produto_a3 = "Meia Social";  
    char *quantidade_a3 = "003";
    char *valor_a3 = "19.99";
    printf("%s     %s      %s\n", produto_a3, quantidade_a3, valor_a3);

    printf("==============================\n");
    char *total = "Total";  
    char *valor_do_total = "229.85";
    printf("%s                   %s\n", total, valor_do_total);

    return 0;
}