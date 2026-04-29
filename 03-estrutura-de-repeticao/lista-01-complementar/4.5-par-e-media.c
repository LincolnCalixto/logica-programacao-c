#include <stdio.h>

//5) Elaborar um programa para mostrar os números pares entre 20 e 100. Fazer a média dos valores desse intervalo que são divisíveis por 5.

int main(void)
{
    int i;

    int soma = 0, cont = 0;
    float media;

    for (i = 20; i<=100; i++)
    {
        if (i%2== 0)
        {
          printf("%d\t", i);
        }
        if (i%5==0)
        {
            cont++;
            soma=soma+i;
        }
    }
    media = (float) soma/cont;
    printf("%.f", media);

    return 0;
}
