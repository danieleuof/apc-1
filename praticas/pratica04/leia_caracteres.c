#include <stdio.h>
int main () {

    char caractere_escolhido;

    printf("Entre com um caractere: ");
    scanf("%c", &caractere_escolhido);
    printf("O caractere escolhido foi: %c\n", caractere_escolhido);
    printf("Codigo ASCII: %d\n", caractere_escolhido);



    return 0;
}