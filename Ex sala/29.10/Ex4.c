#include<stdio.h>
#define tam 100
int procuranovetor(int vet[tam],int valor,int qtde)
{
    int i=0, cont=0;
    while (i<=qtde-1)
    {
        if (vet[i]==valor)
        {
            cont++;
        }
        i++;
    }
    return cont;
    
}
int main ()
{
    int vet[tam], i, qtde, valor;
    do
    {
        printf("Informe quantos valores serao digitados. Maximo: %d\n", tam);
        scanf("%d", &qtde);
    } while (qtde>=tam || qtde<=0);
    for ( i = 0; i < qtde; i++)
    {
        printf("Informe o valor para a posicao &d do vetor:", i+1);
        scanf("%d", &vet[i]);
    }
    printf("Informe um valor numerico para buscr no vetor:");
    scanf("%d", &valor);
    printf("O numero de vezes que %d aparece no vetor eh: %d", valor, procuranovetor(vet, valor, qtde)) ;
    return 0;
}