//Um cinema que possui capacidade de 100 lugares está sempre com ocupação total. Certo dia
//cada espectador respondeu a um questionário, no qual constava:
//- sua idade;
//- sua opinião em relação ao filme, segundo:
//ótimo= *****
//bom= ****
//regular= ***
//ruim= **
//péssimo= *
//Elabore um programa que, lendo estes dados, calcule e imprima:
// a quantidade de respostas ótimo;
// a diferença percentual entre respostas bom e regular;
// a média de idade das pessoas que responderam ruim;
// a percentagem de respostas péssimo e a maior idade que utilizou esta opção;
// a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim.
#include <stdio.h>

int main() {
    int i = 0, idade;
    int otimo = 0, bom = 0, regular = 0, ruim = 0, pessimo = 0;
    int somaidaderuim = 0, maioridadeotimo = 0, maioridaderuim = 0, maioridadepessimo = 0;
    float mediaidaderuim = 0, diferencaperbomregular = 0, perpessimo = 0, diferencaotimoruim = 0;
    char opn;

    printf("=== Pesquisa de opiniao do cinema ===\n");

    while (i < 5) {
        printf("\nPessoa %d:\n", i + 1);
        printf("Digite sua idade: ");
        scanf("%d", &idade);

        printf("Digite sua opiniao sobre o filme <o=Otimo, b=Bom, r=Regular, m=Ruim, p=Pessimo>: ");
        scanf(" %c", &opn); 

        switch (opn) {
            case 'o':
                otimo++;
                if (idade > maioridadeotimo)
                    maioridadeotimo = idade;
                break;

            case 'b':
                bom++;
                break;

            case 'r':
                regular++;
                break;

            case 'm':
                ruim++;
                somaidaderuim += idade;
                if (idade > maioridaderuim)
                    maioridaderuim = idade;
                break;

            case 'p':
                pessimo++;
                if (idade > maioridadepessimo)
                    maioridadepessimo = idade;
                break;

            default:
                printf("Resposta invalida!\n");
                continue; 
        }

        i++;
    }

    if (regular != 0)
        diferencaperbomregular = ((float)(bom - regular) / regular) * 100;

    if (ruim != 0)
        mediaidaderuim = (float)somaidaderuim / ruim;

    perpessimo = ((float)pessimo / 100) * 100;
    diferencaotimoruim = maioridadeotimo - maioridaderuim;

    printf("\n===== RESULTADOS =====\n");
    printf("Quantidade de respostas 'Otimo' ..................: %d\n", otimo);
    printf("Diferenca percentual entre 'Bom' e 'Regular' .....: %.2f%%\n", diferencaperbomregular);
    printf("Media de idade de quem respondeu 'Ruim' ..........: %.2f anos\n", mediaidaderuim);
    printf("Percentagem de respostas 'Pessimo' ...............: %.2f%%\n", perpessimo);
    printf("Maior idade que respondeu 'Pessimo' ..............: %d anos\n", maioridadepessimo);
    printf("Diferenca entre maior idade 'Otimo' e 'Ruim' .....: %.2f anos\n", diferencaotimoruim);

    return 0;
}
