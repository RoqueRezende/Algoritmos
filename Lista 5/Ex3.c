//Escrever um programa que lê um número não conhecido de valores, um de cada vez, e conta
//quantos deles estão em cada um dos intervalos: [0-24], [25-50] e fora deste intervalo.
#include<stdio.h>
int main ()
{
    float num;
    int cont1=0, cont2=0, cont3=0;
    printf("Digite valores (negativos para encerrar)\n");
    while (1)
    {
        printf("Valor:\n");
        scanf("%f", &num);
        if (num < 0)
        {
            break;
        }
        if (num>=0 && num<=24)
        {
            cont1++;
        }
        else if (num>=25 && num<=50)
        {
            cont2++;
        }
        else
        {
            cont3++;
        }
    }
    printf("\nQuantidade nos intervalos:\n");
    printf("[0 - 24]: %d\n", cont1);
    printf("[25 - 50]: %d\n", cont2);
    printf("Fora desses intervalos: %d\n", cont3);
    return 0;
}