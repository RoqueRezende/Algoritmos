//Fazer um programa que calcule e escreva a soma dos 50 primeiros termos da seguinte série:
//S= 1000/1 – 997/2 + 994/3 -991/4 ...
#include<stdio.h>
int main()
{
    int i=0;
    float numerador=1000, denominador=1, s=0;
    do
    {
        if (i %2==0)
        {
            s+=numerador/denominador;
        }
        else
        {
            s-=numerador/denominador;
        }
        numerador-=3;
        denominador+=1;
        i++;
    } while (i<50);
    printf("A soma dos 50 primeiros termos da serie eh: %.6f\n", s);
    return 0;
}