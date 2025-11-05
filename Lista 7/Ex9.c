#include <stdio.h>

int main() {
    int i;
    double soma = 0;
    double fatorial = 1;

    for (i = 1; i <= 50; i++) {
        // calcular fatorial
        if (i > 1) fatorial *= i;

        // denominador = 2^i - 1
        int denominador = (1 << i) - 1; // shift left = potência de 2

        // alternar o sinal usando (-1)^(i+1)
        double termo = ((i % 2 == 0) ? -1 : 1) * fatorial / denominador;

        soma += termo;
    }

    printf("Soma dos 50 primeiros termos: %.6lf\n", soma);

    return 0;
}
