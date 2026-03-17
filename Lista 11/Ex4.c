#include <stdio.h>
#include <string.h>

#define max 10

struct socio {
    int numsocio, numpendentes;
    char nome[40], endereco[40], bairro[40], cidade[40], estado[40], data[20];
};

struct socio socios[max];
int total = 0;

void limparbuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void inclusao() {
    if (total >= max) {
        printf("LIMITE DE CADASTROS ATINGIDO...\n");
        return;
    }

    struct socio s;

    printf("\n=== Inclusao de socio ===\n");
    printf("Numero do socio: ");
    scanf("%d", &s.numsocio);
    limparbuffer();

    printf("Nome: ");
    fgets(s.nome, 40, stdin);

    printf("Endereco: ");
    fgets(s.endereco, 40, stdin);

    printf("Bairro: ");
    fgets(s.bairro, 40, stdin);

    printf("Cidade: ");
    fgets(s.cidade, 40, stdin);

    printf("Estado: ");
    fgets(s.estado, 40, stdin);

    printf("Data de associacao: ");
    fgets(s.data, 20, stdin);

    printf("Numero de dependentes: ");
    scanf("%d", &s.numpendentes);

    socios[total] = s;
    total++;

    printf("\nSocio cadastrado com sucesso!\n");
}

void consulta() {
    int num, i, encontrado = 0;

    printf("\nDigite o numero do socio para consulta: ");
    scanf("%d", &num);

    for (i = 0; i < total; i++) {
        if (socios[i].numsocio == num) {
            printf("\n=== Socio encontrado ===\n");

            printf("Numero: %d\n", socios[i].numsocio);
            printf("Nome: %s", socios[i].nome);
            printf("Endereco: %s", socios[i].endereco);
            printf("Bairro: %s", socios[i].bairro);
            printf("Cidade: %s", socios[i].cidade);
            printf("Estado: %s", socios[i].estado);
            printf("Data: %s", socios[i].data);
            printf("Dependentes: %d\n", socios[i].numpendentes);

            encontrado = 1;
            break;
        }
    }

    if (!encontrado)
        printf("Socio nao encontrado...\n");
}

void alterar() {
    int num, i;

    printf("\nDigite o numero do socio a alterar: ");
    scanf("%d", &num);
    limparbuffer();

    for (i = 0; i < total; i++) {
        if (socios[i].numsocio == num) {
            printf("\n=== Alterando socio ===\n");

            printf("Novo nome: ");
            fgets(socios[i].nome, 40, stdin);

            printf("Novo endereco: ");
            fgets(socios[i].endereco, 40, stdin);

            printf("Novo bairro: ");
            fgets(socios[i].bairro, 40, stdin);

            printf("Nova cidade: ");
            fgets(socios[i].cidade, 40, stdin);

            printf("Novo estado: ");
            fgets(socios[i].estado, 40, stdin);

            printf("Nova data: ");
            fgets(socios[i].data, 20, stdin);

            printf("Novo numero de dependentes: ");
            scanf("%d", &socios[i].numpendentes);

            printf("\nSocio alterado com sucesso!\n");
            return;
        }
    }

    printf("\nSocio nao encontrado.\n");
}

void excluir() {
    int num, i, j;

    printf("\nDigite o numero do socio a excluir: ");
    scanf("%d", &num);

    for (i = 0; i < total; i++) {
        if (socios[i].numsocio == num) {

            for (j = i; j < total - 1; j++) {
                socios[j] = socios[j + 1];
            }

            total--;
            printf("\nSocio excluido com sucesso!\n");
            return;
        }
    }

    printf("\nSocio nao encontrado.\n");
}

int main() {
    int opc;

    do {
        printf("\n=== Menu ===\n");
        printf("1 - Inclusao\n");
        printf("2 - Alteracao\n");
        printf("3 - Exclusao\n");
        printf("4 - Consulta\n");
        printf("5 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opc);

        switch (opc) {
            case 1: inclusao(); break;
            case 2: alterar(); break;
            case 3: excluir(); break;
            case 4: consulta(); break;
            case 5: printf("Encerrando...\n"); break;
            default: printf("Opcao invalida!\n");
        }

    } while (opc != 5);

    return 0;
}
