#include <stdio.h>

int main(void)
{
    int num = 1, contpares = 0, contimpares = 0;

    while( num>0)
    {
        printf("informe um numero: ");
        scanf("%d", &num);
        if (num> 0)
        {
            if (num%2==0)
            {
                contpares++;
            }
            else
            {
                contimpares++;
            }
        }
    }

    printf("\n Quantidade de numeros pares: %d\n", contimpares);
    printf("\n Quantidade de numeros imṕares: %d\n", contimpares);

    return 0;

}
