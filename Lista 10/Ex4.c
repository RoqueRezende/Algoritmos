//Encontrar o maior elemento e a sua respectiva posição de uma matriz B de dimensão 7x5.
#include<stdio.h>
int main()
{
    int i, j;
    int mat[7][5];
    int maior=0;
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 7; j++)
        {
            printf("Digite valores da matriz B: ");
            scanf("%d", &mat[i][j]);
        }
    }
    printf("==== Matriz dada ====\n\n");
     for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            printf("%d ", mat[i][j]); 
        }
        printf("\n");
    }
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 7; j++)
        {
            if (mat[i][j]>maior)
            {
               maior=mat[i][j];
            }
        }
    }
    printf("\nMaior valor da matriz eh: %d", maior);
    return 0;
}