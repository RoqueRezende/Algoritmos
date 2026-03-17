
//Escrever um programa em linguagem C que leia, a partir do teclado, os elementos de uma
//matriz com valores reais de dimensão M × N. Determine e imprima na tela o Grau de Esparsidade
//da Matriz. O Grau de Esparsidade de uma Matriz é a relação entre o Número de Elementos Nulos e
//o Número Total de Elementos da Matriz. Os valores de M e N devem ser definidos pela diretiva
//#define. Exemplo de execução (para M = 3 e N = 4):
//6.
//3 0 0 2
//0 2 1 0
//0 3 7 1
//7.
//O grau de Esparsidade é 5 / 12 = 0.4166
#include <stdio.h>
#define m 3
#define n 4
int main ()
{
    int i, j;
    int mat[m][n];
    int cont0=0;
    float result;
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("Digite [%d][%d]: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n=== Matriz Lida ===\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (mat[i][j]==0)
            {
                cont0++;
            }
        }
    }
    result=(float)cont0/(m*n);
    printf("\nGrau de Esparsidade: %f", result);
}