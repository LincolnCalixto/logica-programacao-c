/* 8) Elaborar um programa que permita ao usuário fornecer 30 números quaisquer e apresente:
a) A soma dos 10 primeiros números.
b) A soma do 11º número até o 20º número.
c) A soma do 21º número até o 30º número.
d) A soma de todos os números. */

#include<stdio.h>

int main(void)
{
    int i, num, soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0;
    {

        for (i=1; i <= 30; i++)
        {
            printf("\n%d - digite um numero qualquer: ", i);
            scanf("%d", &num);

            if (i>=21 && i<=30)
            {
                soma1 = soma1 + num;
            }
            if (i>=11 && i<=20)
            {
                soma2 = soma2 + num;
            }
            if (i>=1 && i<=10)
            {
                soma3 = soma3 + num;
            }
            if (i<=30)
            {
                soma4 = soma4 + num;
            }
        }
        printf("\n\nA soma do 1º ao 10º numero eh: %d", soma3);
        printf("\n\nA soma do 11º ao 20º numero eh: %d", soma2);
        printf("\n\nA soma do 21º ao 30º numero eh: %d", soma1);
        printf("\n\nA soma do 1º ao 30º numero eh: %d", soma4);
        printf("\n\n");
        return 0;
    }
}
