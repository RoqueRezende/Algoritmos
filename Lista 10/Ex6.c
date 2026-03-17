//Escreva um programa que lê uma matriz M[5,5] e calcula as somas:
//b) da coluna 2 de M;
//c) da diagonal principal;
//d) da diagonal secundária;
//e) de todos os elementos da matriz;
//Escreva estas somas e a matriz.
#include<stdio.h>
int main()
{
    int i, j;
    int mat[5][5];
    int somaL4=0, somaC2=0, somaDP=0, somaDS=0, somatot=0;
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("Digite valores da matriz: ");
            scanf("%d", &mat[i][j]);
        }       
    }
    printf("==== Matriz dada ====\n\n");
     for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", mat[i][j]); 
        }
        printf("\n");
    }
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            somatot+=mat[i][j];
            if (i==4)
            {
                somaL4+=mat[i][j];
            }
            if (j==2)
            {
                somaC2+=mat[i][j];
            }
            if (i==j)
            {
                somaDP+=mat[i][j];
            }
            if (i + j == 4)
            {
                somaDS+=mat[i][j];
            }
            
        }
        
    }
    printf("\n=== Resultados ===\n");
    printf("a) Soma da linha 4: %d\n", somaL4);
    printf("b) Soma da coluna 2: %d\n", somaC2);
    printf("c) Soma da diagonal principal: %d\n", somaDP);
    printf("d) Soma da diagonal secundaria: %d\n", somaDS);
    printf("e) Soma de todos os elementos: %d\n", somatot);
    return 0;
}