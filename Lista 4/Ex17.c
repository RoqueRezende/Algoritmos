#include <stdio.h>
#include <math.h>

// Função que calcula e retorna o delta (Δ)
float calc_delta(float a, float b, float c)
{
    return (b * b) - (4 * a * c);
}

// Função que recebe o delta e calcula as raízes
void calc_raizes(float a, float b, float delta)
{
    float x1, x2;

    if (delta < 0)
    {
        printf("A equação não possui raízes reais.\n");
    }
    else if (delta == 0)
    {
        x1 = -b / (2 * a);
        printf("A equação possui uma raiz real: x = %.2f\n", x1);
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes da equação são:\n");
        printf("x1 = %.2f\nx2 = %.2f\n", x1, x2);
    }
}

int main()
{
    float a, b, c, delta;

    printf("Digite os coeficientes a, b e c da equação (ax² + bx + c = 0):\n");
    scanf("%f %f %f", &a, &b, &c);

    // Chama a função para calcular o delta
    delta = calc_delta(a, b, c);

    printf("\nValor de delta: %.2f\n", delta);

    // Passa o delta para a função que calcula as raízes
    calc_raizes(a, b, delta);

    return 0;
}
