/* 11) Faça o programa que apresente a saída como no exemplo, solicitando ao usuário um número positivo. */

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
            if(lc<=0)
            {
                printf("invalido");
            }
        }
        while (lc <= 0);
        for (i=1; i<=lc; i++)
        {
            for(j=1; j<=lc; j++)
            {
                printf("%d\t", j);
            }
            printf("\n");
        }
        printf("Deseja digitar outro numero? (s ou S");
        scanf(" %c", &repetir);
    }while (repetir == 's'|| repetir == 'S');
    return 0;
}
