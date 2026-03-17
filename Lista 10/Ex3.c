//Faça um programa que preenche uma matriz 10x10 com o produto dos índices de cada posição. 
#include <stdio.h>

int main()
{
    int i, j;
    int mat[10][10];
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            mat[i][j] = (i+1) * (j+1);
        }
    }
    printf("=== Matriz 10x10 com produto dos índices ===\n\n");

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%3d ", mat[i][j]); 
        }
        printf("\n");
    }

    return 0;
}
