#include <stdio.h>
#include <string.h>
#define tam 50

struct cliente {
    int codigo;
    char nome[tam], endereco[tam], cidade[tam], telefone[tam];
} agenda[3];

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void cadastro() {
    int i;
    for (i = 0; i < 3; i++) {
        printf("\n=== Cadastro %d ===\n", i+1);

        printf("Codigo: ");
        scanf("%d", &agenda[i].codigo);
        limparBuffer();

        printf("Nome: ");
        fgets(agenda[i].nome, tam, stdin);
        agenda[i].nome[strcspn(agenda[i].nome, "\n")] = '\0';

        printf("Endereco: ");
        fgets(agenda[i].endereco, tam, stdin);
        agenda[i].endereco[strcspn(agenda[i].endereco, "\n")] = '\0';

        printf("Cidade: ");
        fgets(agenda[i].cidade, tam, stdin);
        agenda[i].cidade[strcspn(agenda[i].cidade, "\n")] = '\0';

        printf("Telefone: ");
        fgets(agenda[i].telefone, tam, stdin);
        agenda[i].telefone[strcspn(agenda[i].telefone, "\n")] = '\0';
    }
}

void consulta() {
    int codigo, encontrado = 0;
    printf("\nDigite o codigo para consultar: ");
    scanf("%d", &codigo);

    for (int i = 0; i < 3; i++) {
        if (agenda[i].codigo == codigo) {
            printf("\n=== Cliente Encontrado ===\n");
            printf("Nome: %s\n", agenda[i].nome);
            printf("Endereco: %s\n", agenda[i].endereco);
            printf("Cidade: %s\n", agenda[i].cidade);
            printf("Telefone: %s\n", agenda[i].telefone);
            encontrado = 1;
        }
    }

    if (!encontrado)
        printf("Cliente nao encontrado.\n");
}

void alterar() {
    int codigo, encontrado = 0;
    printf("\nDigite o codigo para alterar: ");
    scanf("%d", &codigo);
    limparBuffer();

    for (int i = 0; i < 3; i++) {
        if (agenda[i].codigo == codigo) {
            printf("\n=== Alterando Cliente ===\n");

            printf("Novo nome: ");
            fgets(agenda[i].nome, tam, stdin);
            agenda[i].nome[strcspn(agenda[i].nome, "\n")] = '\0';

            printf("Novo endereco: ");
            fgets(agenda[i].endereco, tam, stdin);
            agenda[i].endereco[strcspn(agenda[i].endereco, "\n")] = '\0';

            printf("Nova cidade: ");
            fgets(agenda[i].cidade, tam, stdin);
            agenda[i].cidade[strcspn(agenda[i].cidade, "\n")] = '\0';

            printf("Novo telefone: ");
            fgets(agenda[i].telefone, tam, stdin);
            agenda[i].telefone[strcspn(agenda[i].telefone, "\n")] = '\0';

            encontrado = 1;
            break;
        }
    }

    if (!encontrado)
        printf("Cliente nao encontrado.\n");
}

void excluir() {
    int codigo, encontrado = 0;
    printf("\nDigite o codigo para excluir: ");
    scanf("%d", &codigo);

    for (int i = 0; i < 3; i++) {
        if (agenda[i].codigo == codigo) {
            agenda[i].codigo = 0;
            strcpy(agenda[i].nome, "");
            strcpy(agenda[i].endereco, "");
            strcpy(agenda[i].cidade, "");
            strcpy(agenda[i].telefone, "");
            printf("Cliente excluido!\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado)
        printf("Cliente nao encontrado.\n");
}

int main() {
    int opc;

    do {
        printf("\n==== MENU CLIENTE ====\n");
        printf("<1> Cadastrar\n");
        printf("<2> Consultar\n");
        printf("<3> Alterar\n");
        printf("<4> Excluir\n");
        printf("<0> Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opc);
        limparBuffer();

        switch (opc) {
        case 1:
            cadastro();
            break;
        case 2:
            consulta();
            break;
        case 3:
            alterar();
            break;
        case 4:
            excluir();
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida!\n");
        }

    } while (opc != 0);

    return 0;
}
