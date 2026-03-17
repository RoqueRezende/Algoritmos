//Faça um programa que atribua a string “linguagem de programação” para a variável
//DISCIPLINA (usando a função strcpy).
#include <stdio.h>
#include <string.h>

int main() {
    char DISCIPLINA[30];

    strcpy(DISCIPLINA, "linguagem de programacao");

    printf("DISCIPLINA: %s\n", DISCIPLINA);

    return 0;
}
