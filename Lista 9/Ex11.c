/*Faça um programa que dado 2 palavras, determine:
a) Se as palavras são iguais;
b) Caso as palavras sejam diferentes, qual delas tem maior comprimento (não esquecer a
possibilidade de existirem palavras diferentes de mesmo tamanho);*/
#include <stdio.h>
#include <string.h>

int main()
{
    int tam1, tam2;
    char p1[50], p2[50];
    printf("Informe a primeira palavra:\n");
    fgets(p1, sizeof(p1), stdin);
    p1[strcspn(p1, "\n")]='\0';
    printf("Informe a segunda palavra:\n");
    fgets(p2, sizeof(p2), stdin);
    p2[strcspn(p2, "\n")]='\0';
    tam1=strlen(p1);
    tam2=strlen(p2);
    if (strcmp(p1,p2)==0)
        printf("Sao iguais!\n");

    else
    {
        if (tam1>tam2)
            printf("A maior palavra eh: %s \n", p1);

        else
           printf("A maior palavra eh: %s \n", p2); 
    }
    return 0;
}