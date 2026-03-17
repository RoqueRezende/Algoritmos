//Dada uma matriz A (3 x 4) imprimir o número de linhas e o número de colunas nulas da matriz.
//Exemplo:
//0 0 0 0
//1 0 2 2
//4 0 5 6
//0 0 0 0
//tem duas linhas nulas e uma coluna nulas
#include <stdio.h>

int main ()
{
    int i, j;
    int a[3][4];
    int lnula = 0, cnula = 0;
    int somaLinha, somaColuna;

    printf("\n===Dados da Matriz===\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Digite valores da matriz: ");
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n===Matriz Descrita===\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        somaLinha = 0;
        for (j = 0; j < 4; j++)
            somaLinha += a[i][j];

        if (somaLinha == 0)
            lnula++;
    }
    for (j = 0; j < 4; j++)
    {
        somaColuna = 0;
        for (i = 0; i < 3; i++)
            somaColuna += a[i][j];

        if (somaColuna == 0)
            cnula++;
    }

    printf("\n==Resultado==\n");
    printf("Existem %d linhas nulas\n", lnula);
    printf("Existem %d colunas nulas\n", cnula);

    return 0;
}

