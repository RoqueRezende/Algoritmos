//Solicitar no teclado uma frase com no máximo 40 letras. Se o tamanho for maior que 40, dar uma
//mensagem de entrada inválida e solicitar novamente, se passar, imprimir a frase na vertical com um tempo em cada letra.
#include <stdio.h>
#include <string.h>
int main ()
{
    int i, tam;
    char texto[40];
    printf("=> Digite o texto que deseja: ");
    fgets(texto, sizeof (texto), stdin);
    tam=strlen(texto);
    if (tam>40)
    {
        printf("entrada inválida...");
    }
    for ( i = 0; i < tam-1; i++)
    {
        printf("%c \n", texto[i]);
    }
    return 0;
}


