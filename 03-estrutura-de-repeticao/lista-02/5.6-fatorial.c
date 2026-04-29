/* 6) Na matemática, o fatorial de um número é o produto de todos os inteiros positivos menores ou iguais ao
número. Exemplo: Fatorial de 5 é 1 * 2 * 3 * 4 * 5 = 120. Elabore um programa que calcule e mostre o fatorial
de um número informado pelo usuário. Validar esse número para que esteja em um intervalo de 1 a 20.
Lembrando que fatorial de 1 = 1 e fatorial de 0 = 1.
Obs.: Use uma variável de tipo de dado long long int (%lld) para armazenar o fatorial.*/

#include<stdio.h>

int main(void)
{
    int i, fat;
    long long int fatorial = 1;
    do
    {
        printf("\nInforme um numero entre 0 e 20: ");
        scanf(" %d", &fat);
        if (fat <0 || fat >20)
        {
            printf("\n\nPor favor informe um numero entre 0 e 20\n");
        }
    }
    while (fat <0 || fat >20);
    if(fat == 0 || fat == 1)
    {
        printf(" %d! = 1", fat);
    }
    else
    {
        for(i=fat; i >= 1; i--)
        {
            fatorial *= i;
        }
        printf("%d! = %lld\n", fat, fatorial);
    }








    return 0;
}
