#include<stdio.h>
#define tam 20
int main()
{
    int i, vet[tam], result;
    for ( i = 0; i < tam; i++)
    {
        printf("Digite o numero de posicao %d:\n", i+1);
        scanf("%d", &vet[i]);
        result=vet[i]*(i+1);
        printf("%d x %d = %d\n", vet[i], i+1, result);
    }
    return 0;
}