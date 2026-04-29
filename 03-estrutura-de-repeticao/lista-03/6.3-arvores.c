/*3) Uma árvore A tem 1,50 metros e cresce 2 centímetros por ano, enquanto uma árvore B tem 1,10 metros e
cresce 3 centímetros por ano. Construa um programa que calcule e imprima quantos anos serão necessários
para que a árvore B seja maior que a árvore A.*/

#include<stdio.h>

int main(void)
{
    float i = 1.5,j = 1.1;
    int anos = 0;


    while (j<=i)
    {
        i += 0.02;
        j += 0.03;
        anos++;

    }
    printf("Serao necessarios %d anos para que a arvore B seja maior que a arvore A.\n", anos);
    return 0;
}
