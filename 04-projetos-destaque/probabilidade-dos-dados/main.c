/* 3) Escreva um programa que imprima todas as possibilidades de que no lançamento de dois dados a soma das faces seja um valor informado pelo usuário.
 O usuário deve informar um valor válido entre 2 a 12. Repetir a leitura até que o usuário informe um valor válido.*/

#include<stdio.h>

int main(void)
{
    int i,j, num, cont;
    char repetir;

    do
    {
        do
        {
            printf("\nInforme um valor entre 2 e 12: ");
            scanf("%d", &num);
            if (num<=1 || num>=13)
            {
                printf("\nValor invalido. ");
            }
        }
        while (num<=1 || num>=13);
        cont = 0;

        for(i=1; i<=6; i++)
        {

            for(j=1; j<=6; j++)
            {
                if (i + j == num)
                {
                    printf("%d + %d = %d\n", i,j, num);
                    cont++;
                }

            }
        }
        printf("\nNumeros de possibilidade: %d\n", cont);
        printf("\n\nDeseja continuar o progrma? (s ou S): ");
        setbuf(stdin, NULL);
        scanf("%c", &repetir);

    }
    while(repetir =='s'|| repetir == 'S');
    return 0;
}
