#include <stdio.h>
#include <string.h>
#define max 10

struct controle
{
    int numcheque, numconta;
    char nome[40], cidade[40], estado[40];
    float valor;
};

struct controle cheques[max];
 int total=0;

void limparbuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void inclusao()
{
    if (total>=max)
    {
        printf("Limite de cheques cadastrados atingido...");
        return;
    }
    struct controle s;

    printf("=== Inclusao de Cheque ===\n");
    printf("Numero do cheque: ");
    scanf("%d", &s.numcheque);

    printf("Numero da conta corrente: ");
    scanf("%d", &s.numconta);
    limparbuffer();

    printf("Nome: ");
    fgets(s.nome, 40, stdin);

    printf("Cidade: ");
    fgets(s.cidade, 40, stdin);

    printf("Estado: ");
    fgets(s.estado, 40, stdin);
    limparbuffer();

    printf("Valor: ");
    scanf("%f", &s.valor);
    
    cheques[total]= s;
    total++;

    printf("Cliente cadastrado com sucesso...");
}

void alteracao()
{
    int num, i;
    
    printf("Digite o numero do cheque que deseja alterar:");
    scanf("%d", &num);

    for ( i = 0; i < total ; i++)
    {
        if (cheques[i].numcheque==num)
        {
            printf("=== Alteracao de Cheque ===\n");
            printf("Numero da conta corrente: ");
            scanf("%d", &cheques[i].numconta);
            limparbuffer();

            printf("Nome: ");
            fgets(cheques[i].nome, 40, stdin);

            printf("Cidade: ");
            fgets(cheques[i].cidade, 40, stdin);
    
            printf("Estado: ");
            fgets(cheques[i].estado, 40, stdin);
            limparbuffer();

            printf("Valor: ");
            scanf("%f", &cheques[i].valor);

            printf("Alteracao realizada com sucesso!!");
            return;
        }
        
    }
    
}

void exclusao()
{
    int i, j, num;
    printf("Digite o numero do cheque que deseja excluir: ");
    scanf("%d", &num);
    for ( i = 0; i < total; i++)
    {
        if (cheques[i].numcheque==num)
        {
            for ( j = i; j < total-1; j++)
            {
                cheques[j]=cheques[j-1];
            }
            total--;
            printf("Socio excluido com sucesso!!");
            return;
        }
    }
    printf("Cheque nao encontrado...");
}

void valortotal()
{
    int 
}

int main ()
{
    int opc;
    do
    {
        printf("=== Menu de Cheques ===");
        printf("1- Inclusao");
        printf("2- Alteracao");
        printf("3- Exclusao");
        printf("4- Valor total dos cheques");
        printf("5- Sair");
        printf("Escolha a acao desejada: ");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1: inclusao(); break;
        case 2: alteracao(); break;
        case 3: exclusao(); break;
        case 4: valortotal();break;
        default: break;
        }
    } while (opc!=5);
    return 0;
}