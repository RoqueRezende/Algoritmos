#include <stdio.h>
#include <time.h>

int main() {
    int dia_i, mes_i, ano_i;
    int dia_atual, mes_atual, ano_atual;
    int anos, meses, dias;

    // Pega a data atual do sistema
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    dia_atual = tm.tm_mday;
    mes_atual = tm.tm_mon + 1;
    ano_atual = tm.tm_year + 1900;

    printf("===== CALCULADORA DE TEMPO DE NAMORO ❤️ =====\n");
    printf("Digite o dia em que começaram a namorar (dd mm aaaa): ");
    scanf("%d %d %d", &dia_i, &mes_i, &ano_i);

    // Cálculo básico de diferença
    dias = dia_atual - dia_i;
    meses = mes_atual - mes_i;
    anos = ano_atual - ano_i;

    if (dias < 0) {
        dias += 30;  // aproximação simples
        meses--;
    }

    if (meses < 0) {
        meses += 12;
        anos--;
    }

    printf("\n❤️ Vocês estão juntos há:\n");
    printf("%d ano(s), %d mês(es) e %d dia(s)!\n", anos, meses, dias);
    printf("\nData atual: %02d/%02d/%04d\n", dia_atual, mes_atual, ano_atual);
    printf("Data do início do namoro: %02d/%02d/%04d\n", dia_i, mes_i, ano_i);

    return 0;
}
