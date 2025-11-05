#include<stdio.h>
float conv_doll(float real, float conv)
{
    conv=real*1.95;
    printf("O valor convertido em dollares eh de: %.2f", conv);
}
float conv_euro(float real, float conv)
{
    conv=real*2.6;
    printf("O valor convertido em euros eh de: %.2f\n", conv);
}
int main()
{
    float real, conv;
    int opc;
    printf("========ESCOLHA=======\n");
    printf("1-Euro\n");
    printf("2-Dollar\n");
    printf("Escolha uma opcao\n");
    scanf("%d", &opc);
    if (opc=1)
    {
        printf("Digite o valor em reais que deseja converter:\n");
        scanf("%f", &real);
        conv_doll(real, conv);
    }
    else if (opc=2)
    {
        printf("Digite o valor em reais que deseja converter:\n");
        scanf("%f", &real);
        conv_euro(real, conv);
    }
    return 0;  
}