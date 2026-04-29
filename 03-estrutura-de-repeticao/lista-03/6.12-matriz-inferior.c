/* 12) Faça o programa que apresente a saída como no exemplo, solicitando ao usuário um número positivo. */

#include<stdio.h>
int main(void)
{
    int i, j, lc;
    char repetir;
    do
    {
        do
        {
            printf("Informe um numero positivo: ");
            scanf("%d", &lc);
            if (lc<=0)
            {
                printf("Valor invalido");
            }
        }
        while(lc<=0);
        for(i = 1; i<= lc; i++)
        {

            for(j = 1; j<= i; j++)
            {
                printf("%d",j);
            }
            printf("\n");
        }
        printf("Deseja informar outro valor? (s ou S): ");
        setbuf(stdin, NULL);
        scanf("%c", &repetir);
    }
    while (repetir == 's' || repetir == 'S' );
    return 0;
}
