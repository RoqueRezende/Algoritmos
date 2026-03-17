//Escreva um programa que verifique a identidade de duas matrizes de mesma ordem.
#include <stdio.h>
int main() {
    int i, j;
    int A[5][5], B[5][5];
    int iguais = 1;
    printf("==Digite os valores da matriz A==\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n==Digite os valores da matriz B==\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (A[i][j] != B[i][j]) {
                iguais = 0; 
                break;
            }
        }
        if (!iguais) break;
    }

    if (iguais)
        printf("\nAs matrizes são IDENTICAS!\n");
    else
        printf("\nAs matrizes são DIFERENTES!\n");

    return 0;
}