//Dado 3 conjuntos de números, de tamanho N, calcular a média de cada um dos conjuntos.
#include <stdio.h>
int main()
{
    int soma1=0, soma2=0, soma3=0, n, i;
    float media1, media2, media3;
    printf("\nDigite a quantidade de conjuntos de cada um voce deseja: ");
    scanf("%d", &n);
    int c1[n], c2[n], c3[n];
    for ( i = 0; i < n; i++)
    {
        printf("Digite o valor %d do conjunto 1: ", i+1);
        scanf("%d", &c1[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("Digite o valor %d do conjunto 2: ", i+1);
        scanf("%d", &c2[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("Digite o valor %d do conjunto 3: ", i+1);
        scanf("%d", &c3[i]);   
    }
    for ( i = 0; i < n; i++)
    {
        soma1 += c1[i];         
    }
    for ( i = 0; i < n; i++)
    {
        soma2 += c2[i];         
    }
    for ( i = 0; i < n; i++)
    {
        soma3 += c3[i];         
    }
    for ( i = 0; i < n; i++)
    {
        media1=soma1/n;
    }
    for ( i = 0; i < n; i++)
    {
        media2=soma2/n;
    }
    for ( i = 0; i < n; i++)
    {
        media3=soma3/n;
    }
    printf("===Resultados===\n");
    printf("A media do conjunto 1 eh: %.1f\n", media1);
    printf("A media do conjunto 2 eh: %.1f\n", media2);
    printf("A media do conjunto 3 eh: %.1f\n", media3);
    return 0;
}