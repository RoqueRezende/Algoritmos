#include <stdio.h>

int main() {
    float num;
    int cont1 = 0, cont2 = 0, cont3 = 0;
    float soma1 = 0, soma2 = 0, soma3 = 0;
    float media1 = 0, media2 = 0, media3 = 0;

    printf("Digite valores (negativos para encerrar):\n");

    while (1) {
        printf("Valor: ");
        scanf("%f", &num);

        if (num < 0)
            break;

        if (num >= 0 && num <= 24) {
            cont1++;
            soma1 += num;
        } 
        else if (num >= 25 && num <= 50) {
            cont2++;
            soma2 += num;
        } 
        else {
            cont3++;
            soma3 += num;
        }
    }
    if (cont1 > 0) media1 = soma1 / cont1;
    if (cont2 > 0) media2 = soma2 / cont2;
    if (cont3 > 0) media3 = soma3 / cont3;

    printf("\n=== RESULTADOS ===\n");
    printf("[0 - 24]: %d valores, média = %.2f\n", cont1, media1);
    printf("[25 - 50]: %d valores, média = %.2f\n", cont2, media2);
    printf("Fora desses intervalos: %d valores, média = %.2f\n", cont3, media3);

    return 0;
}
