#include <stdio.h>
#include <math.h>

// Procedimento para calcular e mostrar a distância entre dois pontos
void distancia(float x1, float y1, float x2, float y2) {
    float d;
    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("A distância entre os pontos é: %.2f\n", d);
}

int main() {
    float x1, y1, x2, y2;

    printf("Digite as coordenadas do primeiro ponto (x1, y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas do segundo ponto (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    distancia(x1, y1, x2, y2);

    return 0;
}
