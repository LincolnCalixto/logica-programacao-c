/* 7) Elaborar um programa que determine a potência de um número. O usuário informa a base e o expoente e o programa informa o resultado da base elevada ao expoente. Não usar funções prontas do C para fazer o cálculo da potência. */

#include<stdio.h>

int main(void)
{

    int base, expoente, resultado=1;
    {
        printf("\ninforme o valor da base: ");
        scanf("%d", &base);
        printf("\nInforme o valor do expoente: ");
        scanf("%d", &expoente);
        if(expoente > 0 )
        {
            for(int i = 1; i < expoente; i++ )
            {
                printf("%d * ", base);
            }
            for(int j = 0; j < expoente; j++)
            {
                resultado = resultado*base;
            }
        }
        if(expoente = 0)


        printf("%d = ", base);
        printf(" %d", resultado);

    }


    return 0;
}
