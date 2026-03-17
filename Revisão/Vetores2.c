//Sendo dado um conjunto A de 100 números inteiros ,determinar 2 outros conjuntos, contendo
//o primeiro conjunto os números negativos de A e o segundo conjunto os números que são
//múltiplos de um número inteiro X . Observação: Considerar que existam pelo menos um múltiplo e
//um negativo.
#include <stdio.h>
#define tam 5
int main ()
{
    int A[tam], B[tam], x;
    int i;
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    for ( i = 0; i < tam; i++)
    {
        printf("Digite o valor %d do conjunto A: ", i+1);
        scanf("%d", &A[i]);
    }
    for ( i = 0; i < tam; i++)
    {
        printf("Digite o valor %d do conjunto B: ", i+1);
        scanf("%d", &B[i]);
    }
    printf("\n=== Valores do conjunto A negativos ===\n");
    for ( i = 0; i < tam; i++)
    {
        if (A[i]<0)
        {
            printf("%d ", A[i]);
        }
        
    }
    printf("\n=== Valores do conjunto B multiplos de X ===\n");
    for ( i = 0; i < tam; i++)
    {
        if (B[i] %x == 0)
        {
            printf("%d ", B[i]);
        }
        
    }
    return 0;
}
