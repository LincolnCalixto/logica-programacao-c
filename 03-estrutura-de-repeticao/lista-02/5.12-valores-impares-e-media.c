/* 12) Mostre os valores ímpares e não divisíveis por 5 entre 200 e 1. Apresente os valores em ordem
decrescente. Faça a média dos valores desse intervalo que são divisíveis por 3 e por 5.*/

#include <stdio.h>

int main(void)
{
    int i, soma = 0, qtd = 0;
    float media;

    printf("NUMEROS IMPARES E NAO DIVISIVEIS POR 5\n");

    for (i = 200; i >= 1; i--)
    {
        if (i % 2 != 0 && i % 5 != 0)
        {
            printf("%d ", i);
        }

        if (i % 3 == 0 && i % 5 == 0)
        {
            soma += i;
            qtd++;
        }
    }

    printf("\n");

    if (qtd > 0)
    {
        media = (float)soma / qtd;
        printf("A media nos numeros divisiveis por 3 e por 5 eh: %.1f\n",media );
    }
    else
    {
        printf("Nao ha numeros divisiveis por 3 e por 5.\n");
    }

    return 0;
}
