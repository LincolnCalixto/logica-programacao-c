/* Exercício 8 - Faça um programa que determine a data cronologicamente maior entre duas datas fornecidas pelo
usuário. Cada data deve ser composta por três valores inteiros, em que o primeiro representa o dia, o segundo, o mês e
o terceiro, o ano. */

#include <stdio.h>

int main(void)
{
    int d1, m1, a1, d2, m2, a2, data1, data2;

    printf("\nDigite uma data do tipo ddmmaaaa: ");
    scanf("%d", &data1);
    printf("\nDigite outra data do tipo ddmmaaaa: ");
    scanf("%d", &data2);

    d1 = data1 / 1000000;
    m1 = (data1 / 10000) % 100;
    a1 = data1 % 10000;

    d2 = data2 / 1000000;
    m2 = (data2 / 10000) % 100;
    a2 = data2 % 10000;

    printf("\nData 1: %02d/%02d/%04d", d1, m1, a1);
    printf("\nData 2: %02d/%02d/%04d", d2, m2, a2);

    /* valida ano */
    if (a1 < 1 || a2 < 1)
    {
        printf("\nData invalida");
    }
    /* valida mes */
    else if (m1 < 1 || m1 > 12 || m2 < 1 || m2 > 12)
    {
        printf("\nData invalida");
    }
    /* valida dia geral */
    else if (d1 < 1 || d1 > 31 || d2 < 1 || d2 > 31)
    {
        printf("\nData invalida");
    }
    /* valida meses com 30 dias */
    else if ((m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11) && d1 > 30)
    {
        printf("\nData invalida");
    }
    else if ((m2 == 4 || m2 == 6 || m2 == 9 || m2 == 11) && d2 > 30)
    {
        printf("\nData invalida");
    }
    /* valida fevereiro da primeira data */
    else if (m1 == 2)
    {
        if (((a1 % 4 == 0 && a1 % 100 != 0) || (a1 % 400 == 0)))
        {
            if (d1 > 29)
            {
                printf("\nData invalida");
                return 0;
            }
        }
        else
        {
            if (d1 > 28)
            {
                printf("\nData invalida");
                return 0;
            }
        }

        /* depois valida fevereiro da segunda data */
        if (m2 == 2)
        {
            if (((a2 % 4 == 0 && a2 % 100 != 0) || (a2 % 400 == 0)))
            {
                if (d2 > 29)
                {
                    printf("\nData invalida");
                    return 0;
                }
            }
            else
            {
                if (d2 > 28)
                {
                    printf("\nData invalida");
                    return 0;
                }
            }
        }

        /* comparação das datas */
        if (a1 > a2 || (a1 == a2 && m1 > m2) || (a1 == a2 && m1 == m2 && d1 > d2))
        {
            printf("\nA maior data e %02d/%02d/%04d", d1, m1, a1);
        }
        else if (a1 == a2 && m1 == m2 && d1 == d2)
        {
            printf("\nAs datas sao iguais");
        }
        else
        {
            printf("\nA maior data e %02d/%02d/%04d", d2, m2, a2);
        }
    }
    /* valida fevereiro da segunda data quando a primeira nao eh fevereiro */
    else if (m2 == 2)
    {
        if (((a2 % 4 == 0 && a2 % 100 != 0) || (a2 % 400 == 0)))
        {
            if (d2 > 29)
            {
                printf("\nData invalida");
                return 0;
            }
        }
        else
        {
            if (d2 > 28)
            {
                printf("\nData invalida");
                return 0;
            }
        }

        /* comparação das datas */
        if (a1 > a2 || (a1 == a2 && m1 > m2) || (a1 == a2 && m1 == m2 && d1 > d2))
        {
            printf("\nA maior data e %02d/%02d/%04d", d1, m1, a1);
        }
        else if (a1 == a2 && m1 == m2 && d1 == d2)
        {
            printf("\nAs datas sao iguais");
        }
        else
        {
            printf("\nA maior data e %02d/%02d/%04d", d2, m2, a2);
        }
    }
    else
    {
        /* comparação das datas */
        if (a1 > a2 || (a1 == a2 && m1 > m2) || (a1 == a2 && m1 == m2 && d1 > d2))
        {
            printf("\nA maior data e %02d/%02d/%04d", d1, m1, a1);
        }
        else if (a1 == a2 && m1 == m2 && d1 == d2)
        {
            printf("\nAs datas sao iguais");
        }
        else
        {
            printf("\nA maior data e %02d/%02d/%04d", d2, m2, a2);
        }
    }

    return 0;
}
