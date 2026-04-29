/* 2) Faça um programa que imprima os n (indicado pelo usuário) primeiros números pares (começa em 0).
Apresente 5 valores por linha.*/

#include <stdio.h>

int main (void)
{
    int i, num, cont = 0;
    printf("Quantos numeros pares quer mostrar? ");
    scanf("%d", &num);

    for (i = 0; cont < num; i++)
    {
        if (i%2==0)
        {
            printf(" %d", i);
            cont++;
            if(cont%5==0)
            {
                printf("\n");
            }
        }
    }












    return 0;
}
