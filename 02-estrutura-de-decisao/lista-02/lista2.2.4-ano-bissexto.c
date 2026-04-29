/* Exercício 4 - Um ano é bissexto se for divisível por 4 e não for divisível por 100. Também são bissextos os divisíveis por
400. Escreva um programa que determina se um ano informado pelo usuário é bissexto. */
#include<stdio.h>

int main(void)
{
    int ano;
    printf("\Digite o ano para verificar se ele é bissexto: ");
    scanf ("%d", &ano);
    if (ano%4==0 && ano%100!=0)
    {
        printf("%d eh um ano bissexto");
    }
    else
    {
        if(ano%400==0)
        {
           printf("%d eh um ano bissexto");
        }
        else
        {
            printf("%d não eh um ano bissexto");
        }
    }
    return 0;
}
