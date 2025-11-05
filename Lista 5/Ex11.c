//Escrever um algoritmo que lê um valor X e calcula e escreve os 20 primeiros termos da série:
//1 + 1/X2 + 1/X3 + 1/X4 + ...
#include<stdio.h>
#include<math.h>
int main()
{
    int i=2;
    double x, s=1;
    printf("Digite o valor de X:\n");
    scanf("%lf", &x);
    while (i<=20)
    {
        s+=1.0/pow(x, i);
        i++;
    }
    printf("O valor de s eh igual a:%.6f", s);
    return 0;
}
