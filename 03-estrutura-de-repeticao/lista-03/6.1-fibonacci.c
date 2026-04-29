/* 1) Escreva um algoritmo que gere a série de Fibonacci até o termo n que é informado pelo usuário. A série de
Fibonacci é formada pela sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... , etc. */

#include <stdio.h>

int main(void)
{
    int i, num, proximo, anterior = 1, atual=1;

    printf("\nQuantos termos mostrar?  ");
    scanf("%d",&num);

    printf("1\t");
    printf("1\t");



    for (i=2; i<=num; i++)
    {
        proximo = atual + anterior;
        printf(" %d\t", proximo);
        anterior = atual;
        atual = proximo;
    }




    return 0;
}
