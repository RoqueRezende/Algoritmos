//Escrever um programa que gera os números de 1000 a 1999 e escrever aqueles que divididos por 11 onde o resto da divisão é igual a 5.
#include<stdio.h>
int main ()
{
    int i=1000;
    printf("programa vai gerar numeros de 1000 a 1999 e escrever aqueles que divididos por 11 onde o resto da divisão é igual a 5.\n");
    while (i <= 1999)
    {
        if (i %11==5)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
