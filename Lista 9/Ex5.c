//Faça um programa que leia uma string digitada pelo usuário (máximo 20 caracteres) e imprima
//na tela o número de vogais existente nesta string.
#include <stdio.h>
#include <string.h>
int main ()
{
    int i, tam;
    char palavra[20];
    printf("Digite uma palavra para ver so as vogais: ");
    fgets(palavra, sizeof(palavra), stdin);
    tam=strlen(palavra);
    for (i = 0; i < tam; i++) 
    {
        char c = palavra[i];
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U') 
        {
            printf("%c ", c);
        }
    }        
    return 0;
}