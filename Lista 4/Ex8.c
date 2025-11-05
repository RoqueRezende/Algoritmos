#include<stdio.h>
void calc_pa(float term,float r)
{
    float soma;
    soma = 5 * (2 * term + (5 - 1) * r) / 2;
    printf("A soma dos 5 primeiros termos da PA é: %.2f\n", soma);
}
int main()
{
    float term, r;
    printf("Digite o termo da PA:\n");
    scanf("%f", &term);
    printf("Digite a razão da PA:\n");
    scanf("%f", &r);
    calc_pa(term, r);
    return 0;
}