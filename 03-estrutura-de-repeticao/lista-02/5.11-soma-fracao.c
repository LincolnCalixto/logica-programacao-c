/* 11) Faça um programa que mostre o resultado da seguinte soma, sendo n o valor informado pelo usuário:
Soma = 1 + 1/2 + 1/3 + 1/4 + 1/5 + … + 1/n*/

#include <stdio.h>

int main(void)
{
    int denominador, i;
    float soma = 0.0;

    printf("Informe um numero: ");
    scanf("%d", &denominador);

    for (i = 1; i <= denominador; i++)
    {
        soma += 1.0 / i;

        if (i < denominador)
        {
            printf("1/%d + ", i);
        }
        else
        {
            printf("1/%d = ", i);
        }
    }

    printf("%.2f\n", soma);

    return 0;
}
