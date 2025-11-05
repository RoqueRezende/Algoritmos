#include<stdio.h>
int main()
{
    int i, soma=0;
    printf("Multiplos de 7 entre 100 e 200 sao: \n");
    for (i=100; i<=200; i++)
    {
        if (i%7==0)
        {
            printf("%d+", i);
            soma=soma+i;
        }
        
    }
    printf("\nValor da soma eh:%d\n", soma);
    return 0;
}