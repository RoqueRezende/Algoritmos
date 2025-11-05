//Faça um programa que leia o nome, sexo, peso, altura e idade dos 50 funcionários de uma empresa.
//Apresente:
//IMC (Índice de Massa Corporal) de cada funcionário; (IMC = peso / altura * altura)
//Percentual de funcionários obesos (IMC>=30);
//Percentual de funcionários com peso normal (IMC<=25 para homens e IMC<=27 para mulheres);
#include <stdio.h>

int main() {
    float imc, peso, altura, obesos = 0, normal = 0, pernormal, percobesos;
    int idade, i, total = 50;
    char nome[100], sexo;

    printf("Digite os dados dos funcionários:\n");

    for (i = 1; i <= total; i++) {
        printf("\nFuncionário %d\n", i);

        printf("Digite seu nome: ");
        scanf(" %[^\n]", nome);

        printf("Digite seu sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Digite seu peso (kg): ");
        scanf("%f", &peso);

        printf("Digite sua altura (m): ");
        scanf("%f", &altura);

        printf("Digite sua idade: ");
        scanf("%d", &idade);

        imc = peso / (altura * altura);

        printf("IMC de %s: %.2f\n", nome, imc);

        if (imc >= 30) {
            obesos++;
        } else if ((sexo == 'M' || sexo == 'm') && imc <= 25) {
            normal++;
        } else if ((sexo == 'F' || sexo == 'f') && imc <= 27) {
            normal++;
        }
    }

    percobesos = (obesos * 100) / total;
    pernormal = (normal * 100) / total;

    printf("\nPercentual de funcionários obesos (IMC >= 30): %.2f%%\n", percobesos);
    printf("Percentual de funcionários com peso normal: %.2f%%\n", pernormal);

    return 0;
}
