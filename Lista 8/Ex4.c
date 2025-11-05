//Dado um vetor N contendo 15 valores positivos digitados por você, separa num vetor P os
//valores pares e num vetor I os valores impares. Depois mostre somente os valores pares e
//impares em seus respectivos vetores. Utilize procedimento.
#include<stdio.h>
#define tam 15
int main()
{
    int vet[tam], i, p=0, n=0;
    for ( i = 0; i < tam; i++)
    {
        printf("Digite o numero %d:", i+1);
        scanf("%d", &vet[i]);
    }
    printf("Valores pares\n");
    for ( i = 0; i < tam; i++)
    {
        if (vet[i]%2==0)
        {
            printf("Posicao %d -> Valor %d\n", i, vet[i]);
        }
    }
    printf("Valores impares\n");
    for ( i = 0; i < tam ; i++)
    {
        if (vet[i]%2!=0)
        {
            printf("Posicao %d -> Valor %d\n", i, vet[i]);
        } 
    }
    return 0;
}
