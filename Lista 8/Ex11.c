//Escreva um programa para ler 200 notas e armazená-las em um vetor. Admitindo-se que
//podem haver erros no processo de digitação, algumas notas podem ser inválidas, isto é, fora do
//intervalo entre 0 e 10. Considere a média como sendo 7,0. Desenvolver módulos (procedimentos
//ou funções) para determinar o número de notas inválidas, a média das notas válidas e número de
//notas acima da média.
#include <stdio.h>
#define TAM 200
int contarInvalidas(float notas[])
{
    int i, cont = 0;
    for (i = 0; i < TAM; i++)
    {
        if (notas[i] < 0 || notas[i] > 10)
            cont++;
    }
    return cont;
}

float mediaValidas(float notas[])
{
    int i, qtdValidas = 0;
    float soma = 0;

    for (i = 0; i < TAM; i++)
    {
        if (notas[i] >= 0 && notas[i] <= 10)
        {
            soma += notas[i];
            qtdValidas++;
        }
    }

    if (qtdValidas == 0)
        return 0;  

    return soma / qtdValidas;
}

int acimaDaMedia(float notas[], float media)
{
    int i, cont = 0;

    for (i = 0; i < TAM; i++)
    {
        if (notas[i] >= 0 && notas[i] <= 10)   
        {
            if (notas[i] > media)
                cont++;
        }
    }
    return cont;
}

int main()
{
    float notas[TAM];
    int i;

    printf("Digite as %d notas:\n", TAM);
    for (i = 0; i < TAM; i++)
    {
        scanf("%f", &notas[i]);
    }

    int invalidas = contarInvalidas(notas);
    float media = mediaValidas(notas);
    int acima = acimaDaMedia(notas, media);

    printf("\n=== RESULTADOS ===\n");
    printf("Notas inválidas: %d\n", invalidas);
    printf("Média das notas válidas: %.2f\n", media);
    printf("Notas acima da média (%.2f): %d\n", media, acima);

    return 0;
}
