#include<stdio.h>
#include<string.h>
struct locadora
{
    int conta;
    float desconto;
    char telefone[15], nome[40], endereco[40], rg[15], cpf[15], genero[30];
}registro[30];

void limparbuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int i;
    struct locadora registro[30];
    
    printf("==== Registro de Dados ====\n");
    for ( i = 0; i < 30; i++)
    {
        printf("== Cliente %d ==\n", i+1);
        printf("Conta: ");
        scanf("%d", &registro[i].conta);
        limparbuffer();

        printf("Nome: ");
        fgets(registro[i].nome, sizeof(registro[i].nome), stdin);
        registro[i].nome[strcspn(registro[i].nome, "\n")]=0;

        printf("Telefone: ");
        fgets(registro[i].telefone, sizeof(registro[i].telefone), stdin);
        registro[i].telefone[strcspn(registro[i].telefone, "\n")]=0;

        printf("Endereco: ");
        fgets(registro[i].endereco, sizeof(registro[i].endereco), stdin);
        registro[i].endereco[strcspn(registro[i].endereco, "\n")]=0;

        printf("RG: ");
        fgets(registro[i].rg, sizeof(registro[i].rg), stdin);
        registro[i].rg[strcspn(registro[i].rg, "\n")]=0;

        printf("CPF: ");
        fgets(registro[i].cpf, sizeof(registro[i].cpf), stdin);
        registro[i].cpf[strcspn(registro[i].cpf, "\n")]=0;

        printf("Genero Preferido: ");
        fgets(registro[i].genero, sizeof(registro[i].genero), stdin);
        registro[i].genero[strcspn(registro[i].genero, "\n")]=0;

        printf("Desconto: ");
        scanf("%f", &registro[i].desconto);

        limparbuffer();
    }
    printf("CADASTROS FEITOS COM SUCESSO!!!!!!!!!!");
    return 0;
}
