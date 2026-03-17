
#include<stdio.h>
#define tam 10

void notasalunos(float notas[tam])
{
    int i;

    for ( i = 0; i < tam; i++)
    {
        if (notas[i]>10 || notas[i]<0)
        {
            printf("Nota %1.f invalida...\n", notas[i]);
        }
        if (notas[i]>=7)
        {
            printf("Aluno com nota %1.f aprovado\n", notas[i]);
        }
        else
        {
            printf("Aluno com nota %1.f reprovado\n", notas[i]);
        }
    }
}

int main()
{
    int i; 
    float notas[tam];
    
    for ( i = 0; i < tam; i++)
    {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
    }
    notasalunos(notas);
    return 0;
}