#include <stdio.h>

int main() {
    int i = 1;
    double S = 0;

    while (i <= 10) {
        if (i % 2 == 0) {
            S -= (double)i / (i * i);
        } else {
            S += (double)i / (i * i);
        }
        i++;
    }

    printf("O valor de S = %.4f\n", S);

    return 0;
}
