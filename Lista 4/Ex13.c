#include<stdio.h>
float calc_arit(float n1, float n2, float n3)
{
    return (n1+n2+n3)/3;
}
float calc_pond(float n1, float n2, float n3)
{
    return (n1 * 5 + n2 * 3 + n3 * 2) / 10;
}
void escolha(float n1, float n2, float n3, char tipo)
{
    float media;
    if (tipo=='P' || tipo=='p')
    {
        media=calc_pond(n1, n2, n3);
        printf("Media ponderada = %.2f\n", media);
    }
    else if(tipo =='A'|| tipo =='a')
    {
        media=calc_arit(n1, n2, n3);
        printf("Media aritmetica = %.2f\n", media);
    }  
}
int main()
{
    float n1, n2, n3;
    char tipo;
    printf("Informe suas notas:\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Digite 'A' para media aritmetica ou 'P' para media ponderada:\n ");
    scanf(" %c", &tipo);
    escolha(n1, n2, n3, tipo);
    return 0;
}