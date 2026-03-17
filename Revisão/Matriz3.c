//Dizemos que uma matriz quadrada inteira é um quadrado mágico se a soma dos elementos de
//cada linha, a soma dos elementos de cada coluna e a soma dos elementos das diagonais principal e
//secundária são todos iguais. Dada uma matriz quadrada A (n x m), verificar se A é um quadrado
//mágico.
#include <stdio.h>
#define n 3  

int main() {
    int mat[n][n];
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Digite [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    int somaBase = 0;
    for (j = 0; j < n; j++) {
        somaBase += mat[0][j];
    }

    for (i = 1; i < n; i++) {
        int somaLinha = 0;
        for (j = 0; j < n; j++) {
            somaLinha += mat[i][j];
        }
        if (somaLinha != somaBase) {
            printf("\nNÃO é quadrado mágico.\n");
            return 0;
        }
    }

    for (j = 0; j < n; j++) {
        int somaColuna = 0;
        for (i = 0; i < n; i++) {
            somaColuna += mat[i][j];
        }
        if (somaColuna != somaBase) {
            printf("\nNÃO é quadrado mágico.\n");
            return 0;
        }
    }

    int somaDiagP = 0;
    for (i = 0; i < n; i++) {
        somaDiagP += mat[i][i];
    }
    if (somaDiagP != somaBase) {
        printf("\nNÃO é quadrado mágico.\n");
        return 0;
    }

    int somaDiagS = 0;
    for (i = 0; i < n; i++) {
        somaDiagS += mat[i][n - 1 - i];
    }
    if (somaDiagS != somaBase) {
        printf("\nNÃO é quadrado mágico.\n");
        return 0;
    }

    printf("\nÉ um QUADRADO MÁGICO!\n");
    printf("Soma mágica = %d\n", somaBase);

    return 0;
}
