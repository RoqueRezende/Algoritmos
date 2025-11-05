//Dado um conjunto N contendo 15 valores positivos, separar os elementos pares dos impares,
//usando apenas um vetor extra. Observação: Existiam elementos pares e impares no conjunto.
#include<stdio.h>
#define tam 15
int main()
{
    int a[tam], b[tam], i, j;
    for ( i = 0; i < tam; i++)
    {
        printf("\nDigite o valor %d:");
        scanf("%d", &a[i]);
    }
    for ( i = 0; i < tam; i++)
    {
        if (a[i]%2==0)
        {
            /* code */
        }
        
    }
    for ( i = 0; i < tam; i++)
    {
        if (a[i]%2!=0)
        {
            /* code */
        }
    }
    printf("\nVetores originais\n");
   for ( i = 0; i < tam; i++)
    {
        printf("%d", &);
    } 
    printf("\nVetores pares seguidos de impares\n");
    for ( i = 0; i < tam; i++)
    {
        printf("%d", &);
    }
    return 0;
}