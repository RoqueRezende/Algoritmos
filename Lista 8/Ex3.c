#include <stdio.h>
#define TAM 10 

int contarOcorrencias(int vet[], int num, int tamanho)
{
    int i, cont = 0;

    for (i = 0; i < tamanho; i++)
    {
        if (vet[i] == num)
        {
            cont++;
        }
    }

    return cont; 
}

int main()
{
    int vet[TAM];
    int i, num, ocorrencias;

    for (i = 0; i < TAM; i++)
    {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("\nDigite o numero que deseja procurar: ");
    scanf("%d", &num);

    ocorrencias = contarOcorrencias(vet, num, TAM);

    printf("\nO numero %d aparece %d vez(es) no vetor.\n", num, ocorrencias);

    return 0;
}
