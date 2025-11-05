#include<stdio.h>
int main()
{
    int num, i=1;
    unsigned long long fatorial=1;
    printf("Digite um numero para saber o seu fatorial:\n");
    scanf("%d", &num);
    if (num<0)
    {
        printf("Numero invalido");
    }
    else
    {
        while (i <= num)
        {
            fatorial *= i;
            i++;
        }
        printf("Fatorial de %d eh: %llu", num, fatorial);
    }
    return 0;
}