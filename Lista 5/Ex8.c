#include<stdio.h>
int main()
{
    int denominado=1;
    int numerador=1;
    double s=0;
    while (denominado<=50)
    {
        s+=(double)numerador/denominado;
        numerador+= 2;
        denominado++;
    }
    printf("O valor de S eh: %.2f\n", s);
    return 0;
}