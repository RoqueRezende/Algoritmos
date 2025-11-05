//Uma empresa fez uma pesquisa com 100 de seus funcionários, coletando dados sobre o salário e
//número de filhos. A empresa deseja saber: a média salarial destes funcionários; a média do número
//de filhos; e o percentual de pessoas com salário de até R$ 300,00, que possuem filhos
#include<stdio.h>
int main()
{
    int i, filhos, total=5;
    float sal=0, percsalfilhos=0, mediafilhos=0, mediasal=0, totalsalfilhos=0, totalsal=0, totalfilhos=0;
    printf("\nDados dos funcionarios\n");
    for ( i = 1; i <= total; i++)
    {
        printf("Funcionario %d\n", i);
        printf("Informe seu salario:\n");
        scanf("%f", &sal);
        printf("Informe o numero de filhos vc tem:\n");
        scanf("%d", &filhos);
        totalsal+=sal;
        totalfilhos+=filhos;
        if (sal<=300 && filhos!=0)
        {
            totalsalfilhos++;
        }        
    }
    percsalfilhos=(totalsalfilhos * 100) / total;
    mediafilhos=totalfilhos/total;
    mediasal=totalsal/total;
    printf("\nMedia salarial dos funcionarios: R$ %.2f\n", mediasal);
    printf("Media do numero de filhos: %.2f\n", mediafilhos);
    printf("Percentual de pessoas com salario ate R$ 300 e que possuem filhos: %.2f%%\n", percsalfilhos);
    return 0;
}
