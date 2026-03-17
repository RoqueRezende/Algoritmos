//Dada uma matriz quadrada de ordem 5, separar os elementos da diagonal secundária em um vetor. 
#include <stdio.h>
int main ()
{
    int i=0, j=0, L, M;
    printf("\nQuantas linhas vai ter a Matriz?: ");
    scanf("%d", &L);
    printf("\nQuantas colunas vai ter a Matriz?: ");
    scanf("%d", &M);
    int mat[L][M];
    for ( i = 0; i < L; i++)
    {
        for ( j = 0; j < M; j++)
        {
            printf("\nDigite o valor de [%d,%d]: ", i+1, j+1);
            scanf("%d", &mat[i][j]);            
        }
            
    }
    printf("===ELEMENTOS DA DIAGONAL SECUNDARIA===");
    for ( i = 0; i < L; i++)
    {
        for ( j = 0; j < M; j++)
        {
           if (i+j==M-1)
            {
                printf("\n%d ", mat[i][j]);
            }
            
        }
        
    }
    return 0;
}