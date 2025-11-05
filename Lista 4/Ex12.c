//Sabe-se que o quilowatt de energia custa um quinto do salário mínimo. Faça um 
//programa no qual o usuário informe valor do salário mínimo e a quantidade de qui
//lowatts consumida por uma residência. Calcule e mostre por meio de procedimentos:
// valor, em Reais, de cada quilowatt.
//O valor, em Reais, a ser pago por essa residência.
//O valor, em Reais, a ser pago com desconto de 15%
#include<stdio.h>
void calc_reais(float sal)
{
    float reais;
    reais=sal/5;
    printf("O valor em reais de cada quilowatts eh:%.2fR$\n", reais);
}
void calc_pago(float sal, float qw)
{
    float total;
    total=(sal/5)*qw;
    printf("O valor em reais que sua residencia deve pagar eh de:%.2fR$\n", total);
}
void calc_desc(float sal, float qw)
{
    float desc;
    desc=((sal/5)*qw)*0.85;
    printf("O valor a ser pago com 15%% de desconto eh de:%.2fR$\n", desc); 
}
int main()
{
    float sal, qw;
    printf("Informe o valor do salario minimo:\n");
    scanf("%f", &sal);
    printf("Informe a quantidade de quilowatts foram consumidas:\n");
    scanf("%f", &qw);
    calc_reais(sal);
    calc_pago(sal, qw);
    calc_desc(sal, qw);
    return 0;
}