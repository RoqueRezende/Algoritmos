//Faça um programa que compare duas strings (sem usar a função strcmp).
#include<stdio.h>
int main ()
{
    char palavra1[20], palavra2[20];
    int iguais=1, i;
    printf("===Digite palavras para comparar se sao iguais===");
    printf("\nDigite palavra 1: ");
    fgets(palavra1, sizeof(palavra1), stdin);
    printf("\nDigite palavra 2: ");
    fgets(palavra2, sizeof(palavra2), stdin);
    for ( i = 0; palavra1[i] != '\0'; i++)
    {
        if (palavra1[i] == '\n') palavra1[i] = '\0';
    }
    for (i = 0; palavra2[i] != '\0'; i++) {
        if (palavra2[i] == '\n') palavra2[i] = '\0';
    }
    for ( i = 0; palavra1[i] != '\0'|| palavra2[i] != '\0'; i++)
    {
        if (palavra1[i]!=palavra2[i])
        {
            iguais=0;
            break;
        }   
    }
    if (iguais==1)
    {
        printf("Sao iguaisssssssssss");
    }
    else
    {
        printf("Pior que nao saooooooooo");
    }
    return 0;
}