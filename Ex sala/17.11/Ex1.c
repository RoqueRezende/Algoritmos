#include <stdio.h>
int recur(int n)
{
    printf("%d - ", n);
    if (n==0)
    {
        return 0;
    }
    n=recur(n-1);
}
int main()
{
    int x;
    printf("\nDigite o valor de x para saber todos os numeros menores que ele ate o 0: ");
    scanf("%d", &x);
    recur(x);
}

