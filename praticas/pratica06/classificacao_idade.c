#include <stdio.h> 
int main () {
    /* criança (0-12 anos)
    adolescente (13-17 anos)
    adulto (18-64 anos)
    idoso (65+ anos) */
    int idade;

    printf("Entre com sua idade: ");
    scanf("%i", &idade);

    int crianca = idade <= 12;
    int adolescente = idade > 12 && idade < 18;
    int adulto = idade >= 18 && idade < 65;

    if (crianca) {
        printf("Voce eh uma crianca de %i anos!\n", idade);
    } else if (adolescente) {
        printf("Voce eh um adolescente de %i anos!\n", idade);
    } else if (adulto) {
        printf("Voce eh um adulto de %i anos!\n", idade);
    } else {
        printf("Voce eh um idoso de %i anos!\n", idade);
    }
    return 0;
}