#include <stdio.h>

int main() {
    int n = 0, nmaior = 0, nmenor = 0, i = 0;
    float alt = 0, altmenor = 0, altmaior = 0;

    do {
        printf("Digite a altura: ");
        scanf("%f", &alt);

        printf("Digite o numero (n): ");
        scanf("%d", &n);

        if (i == 0) {
            // Primeira entrada serve pra inicializar
            altmaior = altmenor = alt;
            nmaior = nmenor = n;
        } else {
            if (alt > altmaior) {
                altmaior = alt;
                nmaior = n;
            }
            if (alt < altmenor) {
                altmenor = alt;
                nmenor = n;
            }
        }

        i++;
    } while (i < 5);  // repete 5 vezes

    printf("\nA menor altura é: %.2f (Número: %d)\n", altmenor, nmenor);
    printf("A maior altura é: %.2f (Número: %d)\n", altmaior, nmaior);

    return 0;
}
