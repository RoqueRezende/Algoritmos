#include<stdio.h>
#define tam 10
int main()
{
    int i, vet[tam];
    for ( i=0; i<vet[tam]; i++)
    {
        printf("Digite valores desejados na posicao:%d\n", i+1);
        scanf("%d", &vet[i]);
        if (vet[i]%2==0)
            vet[i]=vet[i]+10;
    }
    for ( i = 0; i < tam; i++)
        printf("%d-", vet[i]);
    printf("\n");
    return 0;
}