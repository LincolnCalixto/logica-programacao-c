/* 8) Implemente um programa que lê números informados pelo usuário. O algoritmo deve parar quando
informado um número negativo. Para cada número lido, exceto o número negativo que representa a saída, o
algoritmo deverá imprimir a soma dos dígitos.*/


#include<stdio.h>
int main (void)
{
    int num, soma = 0;
    while(num>=0)
    {
        printf("\ninforme um numero: ");
        scanf(" %d", &num);

        if (num>0)
        {
            soma = 0;

            while (num != 0)
            {
                soma = soma + (num%10);
                num = num/10;
            }
            printf(" A soma dos digitos eh: %d\n", soma);
        }
    }





    return 0;
}

