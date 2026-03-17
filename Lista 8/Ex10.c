#include <stdio.h>
#define tam 10

int main()
{
    int a[tam], x, i, mult[tam], neg[tam];
    int contmult = 0, contneg = 0;

    printf("==Digite valores inteiros do conjunto A==\n");
    for (i = 0; i < tam; i++)
    {
        printf("Digite o valor %d do conjunto A: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("\nDigite o valor de x: ");
    scanf("%d", &x);
    for (i = 0; i < tam; i++)
    {
        if (a[i] < 0)
        {
            neg[contneg] = a[i];
            contneg++;
        }
    }
    for (i = 0; i < tam; i++)
    {
        if (a[i] % x == 0)
        {
            mult[contmult] = a[i];
            contmult++;
        }
    }
    printf("\n=== Resultado de Negativos ===\n");
    for (i = 0; i < contneg; i++)
    {
        printf("%d ", neg[i]);
    }
    printf("\n\n=== Resultado de Multiplos ===\n");
    for (i = 0; i < contmult; i++)
    {
        printf("%d ", mult[i]);
    }
    printf("\n");
    return 0;
}
