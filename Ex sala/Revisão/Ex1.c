#include<stdio.h>
int main()
{
    int n;
    float calc;
    do
    {
        printf("Informe o valor de n:\n");
        scanf("%d", &n);
        if (n<=0)
        {
            printf("Numero invalido\n");

        }
    }while (n<=0);
    {
        if (n %2==0)
        {
            calc=n/2;
        }
        else
        {
            calc=3*n+1;
        }
    }
    printf("Resultado:%.1f", calc);
    return 0;
}