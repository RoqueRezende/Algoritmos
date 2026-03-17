#include <stdio.h>
#include <stdlib.h>

#define tam 5

int somal4(int M[tam][tam]) {
    int j, soma = 0;
    for (j = 0; j < tam; j++) {
        soma += M[4][j];
    }
    return soma;
}

int somac2(int M[tam][tam]) {
    int i, soma = 0;
    for (i = 0; i < tam; i++) {
        soma += M[i][1];
    }
    return soma;
}

int somadiagp(int M[tam][tam]) {
    int i, soma = 0;
    for (i = 0; i < tam; i++) {
        soma += M[i][i];
    }
    return soma;
}

int somadiags(int M[tam][tam]) {
    int i, soma = 0;
    for (i = 0; i < tam; i++) {
        soma += M[i][tam - 1 - i];
    }
    return soma;
}

int somatudo(int M[tam][tam]) {
    int i, j, soma = 0;
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            soma += M[i][j];
        }
    }
    return soma;
}

int main() {
    int M[tam][tam], i, j, opc;
    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            printf("Informe o valor na posicao [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &M[i][j]);
        }
    }

    do {
        system("cls");
        printf("A matriz lida eh:\n");
        for (i = 0; i < tam; i++) {
            for (j = 0; j < tam; j++) {
                printf("%4d", M[i][j]);
            }
            printf("\n");
        }

        printf("\nMenu de Opcoes:\n");
        printf("1 - Soma da linha 4\n");
        printf("2 - Soma da coluna 2\n");
        printf("3 - Soma da diagonal principal\n");
        printf("4 - Soma da diagonal secundaria\n");
        printf("5 - Soma de todos os elementos\n");
        printf("6 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opc);

        switch (opc) {
        case 1:
            printf("\nResultado: %d\n", somal4(M));
            break;
        case 2:
            printf("\nResultado: %d\n", somac2(M));
            break;
        case 3:
            printf("\nResultado: %d\n", somadiagp(M));
            break;
        case 4:
            printf("\nResultado: %d\n", somadiags(M));
            break;
        case 5:
            printf("\nResultado: %d\n", somatudo(M));
            break;
        case 6:
            printf("\nSaindo...\n");
            break;
        default:
            printf("\nOpcao invalida!\n");
        }

        if (opc != 6) {
            system("pause");
        }

    } while (opc != 6);

    return 0;
}
