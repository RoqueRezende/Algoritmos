#include<stdio.h>
int main()
{
    int i, div=0, num=0, s=0; 
    printf("Verifique numeros de 1 a 30:\n");
    for ( i = 1; i <= 30; i++)
    {
        printf("Numero %d\n", i);
        printf("Digite um valor\n");
        scanf("%d", &num);
        if (num<=0)
        {
            printf("Numero invalido, tente novamente\n");
            i--;
            continue;
        }
        s=0;
        for (div = 1; div<num; div++)
        {
            if (num %div==0)
            {
                s+=div;
            } 
        }
        if (s==num)
        {
            printf("%d eh um numero perfeito\n", s);
        }
        else if (s<num)
        {
            printf("%d eh um numero reduzido\n", num);
        }
        else if (s>num)
        {
            printf("%d eh um numero abundante\n", num);
        }        
    }
    return 0;
}