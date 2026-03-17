//Faça um programa que leia e armazene 5 valores inteiros em um vetor Vet1. Leia outros 5
//valores inteiros e armazene num vetor Vet2. A partir destes valores lidos, mostre na tela:
//a soma dos elementos de cada vetor, nas respectivas posições;
//a diferença dos elementos de cada vetor, nas respectivas posições;
//o produto dos elementos de cada vetor, nas respectivas posições;
//a divisão entre os elementos de cada vetor, nas respectivas posições (verificar divisão por 0).
#include<stdio.h>
#define tam 5
int main()
{
    int vet1[tam], vet2[tam], i, soma[tam], sub[tam], prod[tam];
    float div[tam];
    for ( i = 0; i < tam; i++)
    {
        printf("Digite o valor %d do vetor 1: ", i+1);
        scanf("%d", &vet1[i]);
        printf("Digite os valor %d do vetor 2: ", i+1);
        scanf("%d", &vet2[i]);
    }
    for ( i = 0; i < tam; i++)
    {
        soma[i]=vet1[i]+vet2[i];
        sub[i]=vet1[i]-vet2[i];
        prod[i]=vet1[i]*vet2[i];
        if (vet2[i]!=0)
        {
            div[i]=vet1[i]/vet2[i];
        }
        else
        {
            div[i]=0;
        }
    }
    printf("\n==Resultados==\n");
    for ( i = 0; i < tam; i++)
    {
        printf("A soma dos vetores da posição %d eh: %d\n", i+1, soma[i]);
        printf("A Subtracao dos vetores da posicao %d eh: %d\n", i+1, sub[i]);
        printf("O produto dos vetores da posicao %d eh: %d\n", i+1, prod[i]);
        printf("A divisao dos vetores da posicao %d eh: %.2f\n", i+1, div[i]);
        printf("\n=========================================\n");
    }
    return 0;
}

