#include<stdio.h>
int fib(int t)
{
    if (t==0)
    {
        return 0;
    }
    else if (t==1)
    {
        return 1;
    }
    else
    {
        return fib(t-2)+fib(t-1);
    }
}
int main ()
{ 
    int t;
    printf("\nDigite qual termo da serie de Fibonacci quer achar: ");
    scanf("%d", &t);
    fib(t);
    if (t<=0)
    {
        printf("\nNumero invalido, digite novamente...");
    }
    if (t>0)
    {
        printf(" %d ", fib(t));
    }
}
