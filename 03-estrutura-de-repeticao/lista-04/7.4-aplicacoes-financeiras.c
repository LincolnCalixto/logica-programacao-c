/* 4) Escreva um programa que leia o valor de uma aplicação, o percentual de rendimento mensal obtido por esta aplicação
e o período do investimento; e retorne o valor da aplicação ao final do período de investimento. Obs.: A cada 12 meses
o percentual de rendimento deve ser aumentado em 0,25. Validar o valor da aplicação para que seja positivo. Validar o
percentual de rendimento para que seja um número entre 0 e 1.
 Validar o período para que seja um valor positivo. */

#include <stdio.h>
int main(void)
{
    int meses,i;
    float valor, taxa;
    char continuar;
    do
    {
        printf("\nInforme o valor aplicado: R$ ");
        scanf("%f", &valor);
        printf("\nInforme o percentual de rendimento mensal (0 a 1): ");
        scanf("%f", &taxa);
        printf("\nInforme o periodo (em meses): ");
        scanf("%d", &meses);
        printf("\tmes    %%rendimento    Valor aplicado");

        for(i=1; i<=meses; i++)
        {
            if(i%12==0)
            {
                taxa+= 0.25;
            }
            if(i<=9)
            {
                valor = valor + (valor*taxa);
                printf("\n\t %d         %.2f         R$ %.2f ", i, taxa, valor);
            }
            if(i>=10)
            {
                valor = valor + (valor*taxa);
                printf("\n\t%d         %.2f         R$ %.2f ", i, taxa, valor);
            }

        }


        setbuf(stdin,NULL);
        do
        {
            printf("\n\nDeseja continuar o programa (S ou N)? ");
            scanf("%c", &continuar);
            setbuf(stdin,NULL);

            if(continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N')
            {
                printf("\nComando invalido...");

            }

        }
        while(continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N');

    }
    while(continuar =='s'|| continuar == 'S');
    printf("\nObrigado\n");



    return 0;
}
