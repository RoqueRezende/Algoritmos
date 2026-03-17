//Achar a somatória de cada uma das linhas de uma matriz A (7x5). Para praticar utilize somente a estrutura de repetição while
#include <stdio.h>

int main() {
    int A[7][5];
    int i = 0, j = 0;

    printf("=== Leitura da Matriz 7x5 ===\n");
    i = 0;
    while (i < 7) {
        j = 0;
        while (j < 5) {
            printf("Digite o valor de A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
            j++;
        }
        i++;
    }
    printf("\n=== Soma de cada linha ===\n");

    i = 0;
    while (i < 7) {
        int soma = 0;
        j = 0;

        while (j < 5) {
            soma += A[i][j];
            j++;
        }

        printf("Soma da linha %d = %d\n", i, soma);
        i++;
    }

    return 0;
}
