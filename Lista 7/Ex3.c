#include <stdio.h>

int main() {
    int sexo, i, contmasc=0, totalfem=0, totalmasc=0;
    float alt = 0, altmenor = 0, altmaior = 0, media=0, somaalt=0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite a altura: ");
        scanf("%f", &alt);

        printf("Digite o sexo 1 masc e 2 fem:");
        scanf("%d", &sexo);
        
        if (i == 0) {
            // Primeira entrada serve pra inicializar
            altmaior = altmenor = alt;
            
        } else {
            if (alt > altmaior) {
                altmaior = alt;
            }
            if (alt < altmenor) {
                altmenor = alt;
            }
        }

        if (sexo==2)
        {
            somaalt=somaalt+alt;
            totalfem++;
        }
        else
        {
            totalmasc++;
        }
    } 
media=somaalt/totalfem;
    printf("\nA menor altura é: %.2f\n", altmenor);
    printf("A maior altura é: %.2f\n", altmaior);
    printf("A media das alturas das mulheres eh:%f", media);
    printf("Total de homens:%d",totalmasc);
    return 0;
}
