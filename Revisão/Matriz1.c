//Escreva um programa em Linguagem C, para ler do teclado uma matriz de MxN elementos
//inteiros que deverá ser impressa sob o Titulo de “Matriz Lida”. O programa deverá também criar
//uma nova matriz com todos os elementos da matriz lida, substituindo os valores pares da matriz
//pelos seus inversos, e os valores ímpares pelos seus quadrados. Imprimir a matriz resultante sob o
//título “Matriz Processada”. Usar N e M através de define (use quaisquer valores superiores a 50)
//Exemplo: O programa leu os valores abaixo: (onde M = 2 e N = 3):
//1 2 3 4 5 6
//e produziu as impressões abaixo
//Matriz Lida:
//1 2 3
//4 5 6
//Matriz Processada
//1.000000 0.500000 9.000000
//0.250000 25.000000 0.166667
#include<stdio.h>
#define m 2
#define n 3
int main()
{
    int i, j;
    int mat[m][n];
    float processada[m][n];

    printf("=== Digite valores da matriz para ser lido ===\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("Digite [%d][%d]: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("=== Matriz lida ===\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
    
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (mat[i][j] %2==0)
            {
                processada[i][j] = 1.0/mat[i][j];
            }
            else
            {
                processada[i][j] = mat[i][j]*mat[i][j];
            }
        }
    }

    printf("=== Matriz processada ===\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%f", processada[i][j]);
        }
        printf("\n");
    }
    return 0;
}