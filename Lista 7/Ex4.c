//Escreva um programa para calcular e mostrar o reajuste salarial de uma empresa que possui 1000
//funcionários, de acordo com os seguintes critérios:
// os funcionários com salário inferior a 10.000,00 devem ter um reajuste de 55%;
// os funcionários com salário entre 10.000,00 (inclusive) e 25.000,00 (inclusive) devem ter um
//reajuste de 30%;
// e os funcionários com salário superior a 25.000,00 devem ter um reajuste de 20%.
#include<stdio.h>
int main()
{
    int i;
    float sal, novosal;
    printf("Reajuste salarial\n");
    for ( i = 1; i <= 1000 ; i++)
    {
        printf("Digite seu salario atual:\n");
        scanf("%f", &sal);
        if (sal<10000)
        {
            novosal=sal*1.55;
        }
        else if (sal>=10000 && sal<=25000)
        {
            novosal=sal*1.3;
        }
        else
        {
            novosal=sal*1.2;
        }
        printf("Seu novo salario eh: %.2f\n", novosal);
    }
    
    return 0;
}