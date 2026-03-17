//Palíndromos são palavras ou frases que em língua portuguesa podem ser lidas da direita para a
//esquerda, como é usual, ou da esquerda para a direita. Como por exemplo a palavra OVO, RADAR,
//MUSSUM entre outras. Faça um programa no qual o usuário informe uma palavra e seja verificada
//e apresentada se a mesma é ou não um palíndromo.
#include <stdio.h>
#include <string.h>
int main ()
{
    int i, j, tam;
    char texto[30], invertido[30];
    printf("=> Digite uma palavra para verificar se eh Palindromo ou nao: ");
    fgets(texto, sizeof (texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';
    tam=strlen(texto);
    for ( i = tam-1, j=0; i >= 0; i--, j++)
    {
        invertido[j]=texto[i];
    }
    invertido[j]='\0';
    printf("Verificar texto invertido\n");
    if (strcmp(texto, invertido)==0)
    {
        printf("=> Eh um Palindromo");
    }
    else
    {
        printf("Nao eh um Palindromo");
    }
}
