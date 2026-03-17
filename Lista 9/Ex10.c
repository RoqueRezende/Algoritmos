//Faça um programa onde o usuário digita 3 informações a respeito de uma pessoa: Nome,
//endereço e telefone. Concatene essas três informações em uma única string.
#include<stdio.h>
#include<string.h>
int main()
{
    char nome[40], tel[40], ender[40];
    char tudo[120];
    printf("\n=== Digite suas informacoes ===\n");
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")]='\0';
    printf("Digite seu endereco: ");
    fgets(ender, sizeof(ender), stdin);
    ender[strcspn(ender, "\n")]='\0';
    printf("Digite seu telefone: ");
    fgets(tel, sizeof(tel), stdin);
    tel[strcspn(tel, "\n")]='\0';
    
    printf("\n===Resultado das informacoes dadas\n");
    strcpy(tudo, nome);
    strcat(tudo, " - ");
    strcat(tudo, ender);
    strcat(tudo, " - ");
    strcat(tudo, tel);

    printf("%s\n ", tudo);
    return 0;
}