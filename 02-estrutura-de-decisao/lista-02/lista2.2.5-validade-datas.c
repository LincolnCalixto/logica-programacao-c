/* Exercício 5 - Crie um programa que leia uma data no formato ddmmaaaa e imprima se a data é válida ou não. */
#include <stdio.h>

int main(void)
{
    int dd, mm, aaaa, data;

    printf("Digite uma data no formato ddmmaaaa: ");
    scanf("%d", &data);

    dd = data / 1000000;
    mm = (data / 10000) % 100;
    aaaa = data % 10000;

    printf("%d / %d / %d\n", dd, mm, aaaa);

    if (aaaa < 1)
    {
        printf("data invalida");
    }
    else
    {
        if (mm > 12 || mm < 1)
        {
            printf("data invalida");
        }
        else
        {
            if (dd > 31 || dd < 1)
            {
                printf("data invalida");
            }
            else
            {
                if ((mm == 4 && dd > 30) || (mm == 6 && dd > 30) || (mm == 9 && dd > 30) || (mm == 11 && dd > 30))
                {
                    printf("data invalida");
                }
                else
                {
                    if (mm == 2)
                    {
                        if ((aaaa % 4 == 0 && aaaa % 100 != 0) || (aaaa % 400 == 0))
                        {
                            if (dd > 29)
                            {
                                printf("data invalida");
                            }
                            else
                            {
                                printf("data valida");
                            }
                        }
                        else
                        {
                            if (dd > 28)
                            {
                                printf("data invalida");
                            }
                            else
                            {
                                printf("data valida");
                            }
                        }
                    }
                    else
                    {
                        printf("data valida");
                    }
                }
            }
        }
    }

    return 0;
}
