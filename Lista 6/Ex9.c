//Fulano tem 1,50 metro e cresce 2 centímetros por ano, enquanto Ciclano tem 1,10 metro e cresce
//3 centímetros por ano. Construa um programa que calcule e imprima quantos anos serão
//necessários para que Ciclano seja maior que Fulano.
#include<stdio.h>
int main()
{
    int anos=0;
    float altfulano=1.50, altciclano=1.10;
    do
    {
        altciclano=altciclano+0.03;
        altfulano=altfulano+0.02;
        anos=anos+1;
        anos++;
    } while (altciclano<altfulano);
    printf("Eh necessario %d para ciclano passar fulano", anos);
    printf("Altura final de Fulano: %.2f m\n", altfulano);
    printf("Altura final de Ciclano: %.2f m\n", altciclano);
    return 0;
}