//Escreva uma função que recebe um vetor, seu tamanho e um número X. Mostre a posição de
//cada elemento igual a X deste vetor.
#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Qual o tamanho do vetor que você deseja: ");
    scanf("%d", &n);
    int x[n];

    for (i = 0; i < n; i++)
    {
        printf("Digite o valor de x[%d]: ", i);
        scanf("%d", &x[i]);
    }
    printf("\n== Valores iguais e suas posições ==\n");
    int encontrou = 0;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (x[i] == x[j])
            {
                printf("Valor %d encontrado nas posições %d e %d\n", x[i], i, j);
                encontrou = 1;
            }
        }
    }
    if (!encontrou)
    {
        printf("Nenhum valor repetido encontrado.\n");
    }
    return 0;
}
