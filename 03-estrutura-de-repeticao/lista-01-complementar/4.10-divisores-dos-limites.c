/*10) Leia dois valores que representam os limites de um intervalo. O usuário pode informar os
valores em ordem crescente ou decrescente. Validar para que o programa não aceite valores
iguais para os limites do intervalo. Mostre os divisíveis por x e não divisíveis por y nesse intervalo.
x e y são variáveis informadas pelo usuário.   i= limS; i >= limI; i--*/

#include <stdio.h>

int main(void)
{
    int i, limI, limS, divx, divy;

    /* Ler limites de um intervalo (não podem ser iguais)
       Ler dois divisores x e y
       Mostrar os valores do intervalo que são divisíveis por x
       e NÃO divisíveis por y */

    // Validação dos limites
    do
    {
        printf("Informe o limite inferior: ");
        scanf("%d", &limI);

        printf("Informe o limite superior: ");
        scanf("%d", &limS);

        if (limI == limS)
        {
            printf("Erro: os limites nao podem ser iguais!\n\n");
        }

    } while (limI == limS);

    // Validação do divisor x
    do
    {
        printf("Informe o divisor x: ");
        scanf("%d", &divx);

        if (divx == 0)
        {
            printf("Erro: divisor x nao pode ser zero!\n\n");
        }

    } while (divx == 0);

    // Validação do divisor y
    do
    {
        printf("Informe o divisor y: ");
        scanf("%d", &divy);

        if (divy == 0)
        {
            printf("Erro: divisor y nao pode ser zero!\n\n");
        }

    } while (divy == 0);

    printf("\nNumeros divisiveis por %d e nao divisiveis por %d:\n\n", divx, divy);

    // Intervalo crescente
    if (limI < limS)
    {
        for (i = limI; i <= limS; i++)
        {
            if (i % divx == 0 && i % divy != 0)
            {
                printf("%d\t", i);
            }
        }
    }
    // Intervalo decrescente
    else
    {
        for (i = limI; i >= limS; i--)
        {
            if (i % divx == 0 && i % divy != 0)
            {
                printf("%d\t", i);
            }
        }
    }

    printf("\n");

    return 0;
}
