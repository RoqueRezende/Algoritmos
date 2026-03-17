#include <stdio.h>

void grauesparsidade(int tam, int mat[tam][tam])
{
    int zeros = 0;
    int total = tam * tam;
    float result=0;

    for (int i = 0; i < tam; i++) 
    {
        for (int j = 0; j < tam; j++) 
        {
            if (mat[i][j] == 0)
                zeros++;
        }
    }
    result=(zeros * 100.0) / total;
    printf("Grau de esparsidade: %.1f", result);
}

void simetrica(int tam, int mat[tam][tam])
{
    int s=1, i, j;
    for ( i = 0; i < tam; i++)
    {
        for ( j = 0; j < tam; j++)
        {
            if (mat[i][j]!=mat[j][i])
            {
                s=0;
            }
        }
    }
    if (s==1)
    {
        printf("Eh simetrica!!!");
    }
    else
    {
        printf("Nao eh simetrica ;c ");
    }
}

void diagonalsecundaria(int tam, int mat[tam][tam]) 
{
    printf("\nDiagonal Secundária:\n");
    for (int i = 0; i < tam; i++) 
    {
        printf("%d ", mat[i][tam-1-i]);
    }
    printf("\n");
}


int main ()
{
    int i, j, tam, opc;

    printf("Informe a ordem da matriz quadrada (max 10): ");
    scanf("%d", &tam);

    int mat[tam][tam];

    for ( i = 0; i < tam; i++)
    {
        for ( j = 0; j < tam; j++)
        {
            printf("Digite os valores [%d][%d]: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    
    printf("\n==Matriz com valores declarados==\n");

    for ( i = 0; i < tam; i++)
    {
        for ( j = 0; j < tam; j++)
        {
            printf("%d ", mat[i][j]); 
        }
        printf("\n");    
    }

    printf("== Oque deseja ==\n");
    printf("<1> Calcular grau de esparsidade\n");
    printf("<2> Verificar se eh simetrica\n");
    printf("<3> Ver os elementos da diagonal secundaria\n");
    printf("<4> Sair\n");
    printf("Digite qual opcao desejas: ");
    scanf("%d", &opc);
    switch (opc)
    {
    case 1: grauesparsidade(tam, mat);
        break;
    case 2: simetrica(tam, mat);
        break;
    case 3: diagonalsecundaria(tam, mat);
        break;
    default:
        printf("Programa encerrado...");
        break;
    }
    return 0;
}
