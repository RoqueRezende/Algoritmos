#include <stdio.h>
#include <math.h>

int main() {
    int expoente = 25, denominador = 1;
    double x, soma = 0;

    printf("Informe o valor de X: ");
    scanf("%lf", &x);

    do {
        if (denominador % 2 == 0)  
            soma -= pow(x, expoente) / denominador;
        else                       
            soma += pow(x, expoente) / denominador;

        expoente--;     
        denominador++;  
    } while (expoente >= 1);

    printf("\nO valor do somatório eh: %.6lf\n", soma);

    return 0;
}
