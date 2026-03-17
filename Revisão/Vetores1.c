//Fazer um programa que leia duas sequências de inteiros, não necessariamente contendo a
//mesma quantidade de números, e construa um terceiro vetor, sem destruir os originais, que é a
//concatenação do primeiro com o segundo. Ou seja, se o primeiro vetor contiver os valores [7 3] e
//o segundo [9 2], a concatenação dos dois conterá [7 3 9 2]. A concatenação deve ser feita por
//uma função. O tamanho máximo das sequências deve estar definida no programa.
#include<stdio.h>
#define tam 50

int concatenarvet(int A[], int B[], int C[], int tamA, int tamB)
{
    int i, j;

    for (i = 0; i < tamA; i++)
        C[i] = A[i];

    for (j = 0; j < tamB; j++)
        C[tamA + j] = B[j];

    return tamA + tamB;
}

int main ()
{
    int A[tam], B[tam], C[2*tam];
    int tamA, tamB, tamC, i;

    printf("Digite o tamanho do vetor A: ");
    scanf("%d", &tamA);

    for (i = 0; i < tamA; i++)
    {
        printf("Valor %d do vetor A: ", i+1);
        scanf("%d", &A[i]);
    }

    printf("Digite o tamanho do vetor B: ");
    scanf("%d", &tamB);

    for (i = 0; i < tamB; i++)
    {
        printf("Valor %d do vetor B: ", i+1);
        scanf("%d", &B[i]);
    }

    tamC = concatenarvet(A, B, C, tamA, tamB);

    printf("\nVetor concatenado: ");
    for (i = 0; i < tamC; i++)
        printf("%d ", C[i]);

    printf("\n");
    return 0;
}
