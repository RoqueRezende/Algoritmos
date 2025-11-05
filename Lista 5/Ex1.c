//Escrever um programa que lê 50 valores positivos, um de cada vez, e encontra e escreve o maior deles.
#include <stdio.h>

int main() {
    int contador = 0;
    float numero, maior = 0;

    printf("Digite 50 valores positivos:\n");

    while (contador < 50) {
        printf("Valor %d: ", contador + 1);
        scanf("%f", &numero);

        if (numero > 0) {
            if (numero > maior)
                maior = numero;
            contador++;
        } else {
            printf("Por favor, digite um valor positivo.\n");
        }
    }

    printf("\nO maior valor digitado foi: %.2f\n", maior);

    return 0;
}
