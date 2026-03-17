//Faca um programa q pergunte ao usuário o numero de alunos a ser lido. O tamanho dos
//vetores será o numero informado pelo usuário. Armazene num vetor as notas G1 destes alunos;
//num outro vetor, armazene as notas G2 destes alunos. Ambas notas, G1 e G2, são informadas
//pelo usuário. Calcule a media aritmética destes alunos e armazene num terceiro vetor. Ao final,
//mostre as 3 notas dos alunos.
#include <stdio.h>
#define max 100
int main()
{
    int alu, i;
    float media[max], g1[max], g2[max], g3[max];
    printf("Digite a quantidade de alunos para saber a media de todas as notas:\n");
    scanf("%d", &alu);
    if (alu>max)
    {
        printf("NUMERO DE ALUNOS INVALIDO...");
    }
    
    for ( i = 0; i < alu; i++)
    {
        printf("Digite a nota G1 do aluno %d:", i+1);
        scanf("%f", &g1[i]);
    }
    for ( i = 0; i < alu; i++)
    {
        printf("Digite a nota G2 do aluno %d:", i+1);
        scanf("%f", &g2[i]);
    }
    for ( i = 0; i < alu; i++)
    {
        printf("Digite a nota g3 do aluno %d:", i+1);
        scanf("%f", &g3[i]);
    }
    for ( i = 0; i < alu; i++)
    {
        media[i]=(g1[i]+g2[i]+g3[i])/3;
    }
    for ( i = 0; i < alu; i++)
    {
        printf("================\n");
        printf("Aluno %d\n G1=%.1f\n G2=%.1f\n G3=%.1f\n Media=%.2f\n", i+1, g1[i], g2[i], g3[i], media[i]);
    }
    return 0;
}