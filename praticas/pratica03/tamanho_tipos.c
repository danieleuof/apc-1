#include <stdio.h>
int main () {

    /*
    char           tamanho em bytes = 1
    short int      tamanho em bytes = 2
    int            tamanho em bytes = 4
    long int       tamanho em bytes = 8
    long long int  tamanho em bytes = 8
    float          tamanho em bytes = 4
    double         tamanho em bytes = 8
    long double    tamanho em bytes = 16
    */

    printf("char:           %d bytes\n", sizeof(char));
    printf("shot int:       %d bytes\n", sizeof(short int));
    printf("int:            %d bytes\n", sizeof(int));
    printf("long int:       %d bytes\n", sizeof(long int));
    printf("long long int:  %d bytes\n", sizeof(long long int));
    printf("float:          %d bytes\n", sizeof(float));
    printf("double:         %d bytes\n", sizeof(double));
    printf("long double:    %d bytes\n", sizeof(long double));


    return 0;
}