#include <stdio.h>

int main(void)
{
    int num;

    //Aninhamento de if-else
    /*Trata-se do uso de outro comando if ou if-else
    dentro de um if ou if-else.

    //Forma Geral
    if(condição1)
    {
        if(condição2)
        {
            Primeiro conjunto de intruções
        }
        else
        {
            Segundo conjunto de intruções
        }
    }
    else
    {
        Terceiro conjunto de instruções
    }

    */
    //Exemplo 1
    printf("Informe um numero: ");
    scanf("%d", &num);

    if(num == 0)
    {
        printf("O numero eh igual a 0\n");
    }
    else
    {
        if(num > 0)
        {
            printf("O numero eh maior que 0\n");
        }
        else
        {
            printf("O numero eh menor que 0\n");
        }
    }

    //Exemplo 2
    if(num == 0)
    {
        printf("O numero eh igual a 0\n");
    }
    else if(num > 0)
    {
        printf("O numero eh maior que 0\n");
    }
    else
    {
        printf("O numero eh menor que 0\n");
    }

    return 0;
}
