#include<stdio.h>
int main()
{
    int num, i;
    printf("Digite numeros interios(0 para encerrar)");
    while (1)
    {
        printf("Numeros:\n");
        scanf("%d", &num);
        if (num==0)
        {
            printf("Encerrando...");
            break;
        }
        if (num % 2 == 0)
        {
            i=num+2;
        }
        else
        {
            i=num+1;
        }
        printf("Numero: %d --> sucessor:%d\n", num, i);
    }
    return 0;
}