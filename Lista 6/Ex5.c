#include <stdio.h>
int main()
{
    int f=50;
    float c=0;
    printf("Conversão de F para C");
    do
    {
        c=(5.0 / 9.0) * (f - 32);
        printf("\nC=%.2f --> F=%d\n", c, f);
        f++;
    } while (f<=150);
    return 0;
}