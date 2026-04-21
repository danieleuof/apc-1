#include <stdio.h>

int main () {
    int idade;

    printf("Entre com a sua idade: ");
    scanf("%i", &idade);
    while (getchar() != '\n');

    // && => 0 Falso E qualquer coisa = Sempre Falso
    printf("Voce eh uma crianca? %i\n", idade >= 0 && idade <=12);
    printf("Voce eh um adolecente? %i\n", idade > 12 && idade <16);
    printf("Voce eh um jovem? %i\n", idade >= 16 && idade <= 20);
    printf("Voce eh um adulto? %i\n", idade > 20 && idade < 60);
    printf("Voce eh um idoso? %i\n", idade >= 60);
    // || => 1 Verdadeiro OU qualquer coisa = Sempre Verdadeiro
    printf("Voce tem prioridade para vacinar? %i\n", idade <= 6 || idade >= 60);

    // ! => NÃO Verdadeiro = Falso, NAO Falso = Verdadeiro
    printf("Voce nao pode votar? %i\n", !(idade >= 16));

    return 0;
}