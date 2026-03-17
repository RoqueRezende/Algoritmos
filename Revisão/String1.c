//Deseja-se ler duas cadeias de N caracteres cada e verificar se uma é anagrama da outra,
//mostrando em seguida os pares que não são anagramas com a indicação “não são anagramas” e os
//pares que são anagramas com a indicação “são anagramas”.
//Ex: ALMA LAMA - são anagramas
//BOLA LOBO - não são anagramas
//ROMA AMOR - são anagramas
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
    int i;
    char  p1[40], p2[40];
    int anagrama=1;
    int freq1[26] = {0};
    int freq2[26] = {0};
    printf("Informe a primeira palavra:\n");
    fgets(p1, sizeof(p1), stdin);
    p1[strcspn(p1, "\n")]='\0';
    printf("Informe a segunda palavra:\n");
    fgets(p2, sizeof(p2), stdin);
    p2[strcspn(p2, "\n")]='\0';
    for ( i = 0; p1[i] != '\0'; i++)
    {
        p1[i]=toupper(p1[i]);
    }

    for ( i = 0; p2[i] != '\0'; i++)
    {
        p2[i]=toupper(p2[i]);
    }

    for (i = 0; p1[i] != '\0'; i++) {
        if (p1[i] >= 'A' && p1[i] <= 'Z')
        {
            freq1[p1[i] - 'A']++;
        }
    }

    for (i = 0; p2[i] != '\0'; i++) {
        if (p2[i] >= 'A' && p2[i] <= 'Z')
        {
            freq2[p2[i] - 'A']++;
        }
    }

    for ( i = 0; i < 26; i++)
    {
        if (freq1[i]!=freq2[i])
        {
            anagrama=0;
            break;
        } 
    }

    printf("\n=== Resultado ===\n");
    if (anagrama==1)
        printf("Eh um anagrama");
    else
        printf("Nao eh um anagrama");

}