//Faça um programa que leia 10 números inteiros positivos, calcule e escreva os que são números
//perfeitos. Sendo que, um número perfeito é aquele cuja soma de seus divisores, exceto ele próprio, é
//igual ao número.
//Exemplo: 6 é perfeito porque 1 + 2 + 3 = 6
//28 é perfeito porque 1 + 2 + 4 + 7 + 14 = 28
#include<stdio.h>
int main()
{
    int i, num, s=0, div=0;
    for ( i = 1; i <= 10; i++)
    {
        printf("Numero %d\n", i);
        printf("Digite um valor\n");
        scanf("%d", &num);
        if (num<=0)
        {
            printf("Numero invalido, tente novamente\n");
            i--;
            continue;
        }
        s=0;
        for (div = 1; div<num; div++)
        {
            if (num %div==0)
            {
                s+=div;
            }
        }
        if (s==num)
        {
            printf("%d eh um numero perfeito\n", s);
        }
        else
        {
            printf("%d Nao eh um numero perfeito\n", num);
        } 
    }
    return 0;
}