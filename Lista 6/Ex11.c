//Uma universidade deseja fazer um levantamento a respeito de seu concurso vestibular. Para
//cada curso, é fornecido o seguinte conjunto de valores:
//o código do curso;
//a) número de vagas;
//b) número de candidatos do sexo masculino;
//c) número de candidatos do sexo feminino.
//d) O último conjunto, para indicar fim de dados, contém o código do curso igual a zero. Fazer
//um programa que:
//Calcule e escreva, para cada curso, o número de candidatos por vaga e a porcentagem de
//candidatos do sexo feminino (escreva também o código correspondente do curso);

#include<stdio.h>
int main()
{
    int cod, vagas, masc, fem;
    float porcfem, totalcand, candporvaga;
    printf("\n===Dados do Vestibular===\n");
    printf("Digite o codigo do curso(0 para encerrar)\n");
    scanf("%d", &cod);
    while (cod!=0)
    {
        printf("Numero de vagas: \n");
        scanf("%d", &vagas);

        printf("Numero de candidatos do sexo masculino: \n");
        scanf("%d", &masc);

        printf("Numero de candidatos do sexo feminino: \n");
        scanf("%d", &fem);

        totalcand=masc+fem;
        porcfem=fem*100/totalcand;
        candporvaga=totalcand/vagas;

        printf("\nCurso %d:\n", cod);
        printf("Candidatos por vaga: %.2f\n", candporvaga);
        printf("Porcentagem de candidatas mulheres: %.2f%%\n\n", porcfem);
         printf("Digite o codigo do proximo curso (0 para encerrar): ");
        scanf("%d", &cod);
    }
    printf("Fim");
    return 0;
}