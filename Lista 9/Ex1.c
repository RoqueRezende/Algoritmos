//Receber um nome do teclado e imprimi-lo de trás pra frente.
#include <stdio.h>
#include <string.h>
int main()
{
    int i, tam;
    char nome[50];
    printf("Digite seu nome para ve-lo de tras para frente: ");
    fgets(nome, sizeof (nome), stdin);
    nome[strcspn(nome, "\n")]= '\0';
    tam=strlen(nome);
    for ( i = tam-1 ; i >=0 ; i--)
    {
        printf("%c", nome[i]);
    }
    return 0;
}
