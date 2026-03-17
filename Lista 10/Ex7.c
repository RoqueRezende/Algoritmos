//Dizemos que uma matriz quadrada inteira é um quadrado mágico se a soma dos elementos de
//cada linha, a soma dos elementos de cada coluna e a soma dos elementos das diagonais principal e
//secundária são todos iguais. Dada uma matriz quadrada A (n x m), verificar se A é um quadrado mágico. 
#include<stdio.h>
int main()
{ 
    int i, j;
    int n;
    printf("===DIGITE O INDICE DA MATRIZ QUADRADA===\n");
    printf("\nDigite indice da matriz: "); 
    scanf("%d", &n);
    int mat[n][n];
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("Digite os valores da matriz: ");
            scanf("%d", &mat[i][j]);
        }
    }
    int somaref=0;
    for ( j = 0; j < n; j++)
    {
        somaref+=mat[0][j];
    }
    int somaL=0, somaC=0, somaDP=0, somaDS=0;
    int ehmagico=0;
    for ( i = 0; i < n; i++)
    {
        somaL+=mat[i][j];
        somaC+=mat[i][j];
        for ( j = 0; j < n; j++)
        {
            if (i==j)
            {
                somaDP+=mat[i][j];
            }
            if (i + j == n-1)
            {
                somaDS+=mat[i][j];
            }
        }
    }
    if (somaC==somaref||somaDP==somaref||somaDS==somaref||somaL==somaref)
    {
        ehmagico=1;
    }
    
    printf("\n===Matriz Digitada===\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%4d ", mat[i][j]);
        }
        printf("\n");
    }
        printf("\n=== Resultado ===\n");
    if (ehmagico==1)
        printf("A matriz EH um quadrado magico\n");
    else
        printf("A matriz NAO e um quadrado magico\n");
    return 0;
}