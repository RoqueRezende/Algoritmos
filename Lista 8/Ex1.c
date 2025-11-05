#include<stdio.h>
#define tam 5
int main()
{
    int vet[tam], i, posicaomaior=0, nummaior;
    for ( i = 0; i < tam; i++)
    {
        printf("Digite o numero %d:", i+1);
        scanf("%d", &vet[i]);
    }
    nummaior=vet[tam];
    for ( i = 0; i < tam; i++)
    {
        if (vet[i]>nummaior)
        {
            nummaior=vet[i];
            posicaomaior=i;
        }
    }
    printf("\nO maior numero eh %d, e sua posicao eh %d", nummaior, vet[tam]+1);
    return 0; 
}