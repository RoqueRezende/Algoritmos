//Escreva um programa que calcule e escreva a soma dos dez primeiros termos da seguinte série:
//2/500 - 5/450 + 2/400 - 5/350 + …
#include <stdio.h>

int main() {
    int i = 0;
    float numerador, denominador, S = 0.0;

    numerador = 2;
    denominador = 500;

    do {
        if (i % 2 == 0) { // termos pares: +
            S += numerador / denominador;
        } else {           // termos ímpares: -
            S -= numerador / denominador;
        }

        // alterna o numerador
        if (numerador == 2)
            numerador = 5;
        else
            numerador = 2;

        // diminui o denominador em 50
        denominador -= 50;

        i++;
    } while (i < 10);

    printf("A soma dos 10 primeiros termos da serie eh: %.6f\n", S);

    return 0;
}
