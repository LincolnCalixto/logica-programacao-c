/*10) Faça o programa que apresente a saída como no exemplo, solicitando ao usuário um número positivo.*/
#include<stdio.h>

int main (void)
{
    int num,i,j;
    char repetir;
    do // repete a execucao
    {
        do //valid a entrada
        {
            printf("\n Informe um numero: ");
            scanf("%d", &num);
            if (num <=0)
            {
                printf("\n valor invalido");

            }
        }while(num<=0);
        for(i = 1; i<=num; i++)
        {
            for (j=1; j<=num; j++)
            {
                printf(" %d  ", i);
            }
            printf("\n"); // quebra de linha
        }
        printf("\n Deseja repetir o programa (S/s)? ");
        scanf(" %c", &repetir);

    } while(repetir == 'S'|| repetir=='s');



    return 0;
}
