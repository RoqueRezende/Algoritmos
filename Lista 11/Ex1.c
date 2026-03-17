#include <stdio.h>
#include <string.h>

#define MAX 10

struct Conta {
    int Corrente;
    int Correntista;
    int Data;
    int Agencia;
    float saldo;
    char Cidade[50];
    char Estado[3];
};

struct Conta contas[MAX];
int total = 0;

void limparbuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void inclusao() {
    if (total >= MAX) {
        printf("\nLimite de cadastros atingido!\n");
        return;
    }

    printf("\n=== Inclusao de Conta ===\n");

    printf("Numero da conta: ");
    scanf("%d", &contas[total].Corrente);

    printf("Numero do correntista: ");
    scanf("%d", &contas[total].Correntista);

    printf("Data (AAAAMMDD): ");
    scanf("%d", &contas[total].Data);

    printf("Numero da Agencia: ");
    scanf("%d", &contas[total].Agencia);

    printf("Saldo inicial: ");
    scanf("%f", &contas[total].saldo);

    limparbuffer();
    printf("Cidade: ");
    fgets(contas[total].Cidade, 50, stdin);
    contas[total].Cidade[strcspn(contas[total].Cidade, "\n")] = 0;

    printf("Estado (UF): ");
    fgets(contas[total].Estado, 3, stdin);

    total++;
    printf("\nConta cadastrada com sucesso!\n");
}

void alteracao() {
    int conta, i, encontrado = 0;

    printf("\nDigite o numero da conta para alterar: ");
    scanf("%d", &conta);

    for (i = 0; i < total; i++) {
        if (contas[i].Corrente == conta) {
            printf("\n=== Alterando Conta ===\n");

            printf("Novo saldo: ");
            scanf("%f", &contas[i].saldo);

            limparbuffer();
            printf("Nova cidade: ");
            fgets(contas[i].Cidade, 50, stdin);
            contas[i].Cidade[strcspn(contas[i].Cidade, "\n")] = 0;

            printf("Novo estado (UF): ");
            fgets(contas[i].Estado, 3, stdin);

            encontrado = 1;
            printf("\nConta alterada!\n");
        }
    }

    if (!encontrado)
        printf("\nConta nao encontrada.\n");
}

void exclusao() {
    int conta, i, j;

    printf("\nDigite a conta a excluir: ");
    scanf("%d", &conta);

    for (i = 0; i < total; i++) {
        if (contas[i].Corrente == conta) {
            for (j = i; j < total - 1; j++) {
                contas[j] = contas[j + 1];
            }
            total--;
            printf("\nConta excluida com sucesso!\n");
            return;
        }
    }

    printf("\nConta nao encontrada.\n");
}

void consultar() {
    int conta, i, encontrado = 0;

    printf("\nDigite o numero da conta para consulta: ");
    scanf("%d", &conta);

    for (i = 0; i < total; i++) {
        if (contas[i].Corrente == conta) {
            printf("\n=== Conta Encontrada ===\n");
            printf("Correntista: %d\n", contas[i].Correntista);
            printf("Data: %d\n", contas[i].Data);
            printf("Agencia: %d\n", contas[i].Agencia);
            printf("Saldo: %.2f\n", contas[i].saldo);
            printf("Cidade: %s\n", contas[i].Cidade);
            printf("Estado: %s\n", contas[i].Estado);

            encontrado = 1;
            break;
        }
    }

    if (!encontrado)
        printf("\nConta nao encontrada.\n");
}

int main() {
    int opc;

    do {
        printf("\n=== Menu do Cliente ===\n");
        printf("<1> Inclusao\n");
        printf("<2> Alteracao\n");
        printf("<3> Exclusao\n");
        printf("<4> Consultar Conta\n");
        printf("<5> Sair\n");
        printf("Digite a opcao escolhida: ");
        scanf("%d", &opc);

        switch (opc) {
            case 1: inclusao(); break;
            case 2: alteracao(); break;
            case 3: exclusao(); break;
            case 4: consultar(); break;
            case 5: printf("\nSaindo...\n"); break;
            default: printf("Opcao invalida!\n");
        }

    } while (opc != 5);

    return 0;
}
