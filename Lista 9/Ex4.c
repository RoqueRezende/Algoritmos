//Receber do teclado a sigla do estado de uma pessoa e imprimir uma das seguintes mensagens:
//Paranaense
//Gaucho
//Catarinense
//Outros estados
#include<stdio.h>
#include<string.h>
int main()
{
    int i, tam;
    char estado[3], nome[20], mensagem[20];
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Digite o estado de origem: ");
    fgets(estado, sizeof(estado), stdin);
    tam=strlen(nome);
    for ( i = 0; i < tam-1; i++)
    {
        printf("%c", nome[i]);
    }
    if (strcmp(estado, "PR") == 0)
    {
        strcpy(mensagem, "Paranaense");
    }
    else if (strcmp(estado, "SC") == 0)
    {
        strcpy(mensagem, "Catarinense");
    }
    else
    {
        strcpy(mensagem, "Outros");
    }
    printf("%s\n", mensagem);
    return 0;
}