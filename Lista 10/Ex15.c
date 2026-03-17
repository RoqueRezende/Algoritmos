//Dadas duas matrizes reais A (m x n) e B (m x n), fazer um programa que calcula a soma de A
//com B. A soma deve ser efetuada por uma função que recebe 2 (duas) matrizes. Nesta função utilize
//uma terceira matriz que recebe o resultado da soma das duas outras.
#include<stdio.h>
void somamatriz(int A[5][5], int B[5][5], int C[5][5])
{
    int i, j;
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            C[i][j]= A[i][j] + B[i][j];
        }       
    }
    
}
int main() 
{
    int i, j;
    printf("\n=====Digite a Ordem das Matrizes=====\n");
    int A[5][5], B[5][5], C[5][5];
    printf("==Digite os valores da matriz A==\n");
    for (i = 0; i < 5; i++) 
    {
        for (j = 0; j < 5; j++) 
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n==Digite os valores da matriz B==\n");
    for (i = 0; i < 5; i++) 
    {
        for (j = 0; j < 5; j++) 
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    printf("\n===Matriz A Descrita===\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n===Matriz B Descrita===\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%3d ", B[i][j]);
        }
        printf("\n");
    }
    somamatriz(A, B, C);
    printf("\n======= Matriz C =======\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%3d ", C[i][j]);
        }
        printf("\n");
    }
    
}