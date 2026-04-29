#include <stdio.h>

int main(void)
{
    int num = 1, contpares = 0, contimpares = 0, somapares = 0, somaimpares = 0;
    int produtopares = 1, produtoimpares = 1;

    while(num>0)
    {
        printf("informe um numero: ");
        scanf("%d", &num);
        if (num> 0)
        {
            if (num%2==0)
            {
                contpares++;
                somapares = somapares + num;
                produtopares = produtopares*num;
                //ou somapares += num;
            }
            else
            {
                contimpares++;
                somaimpares = somaimpares + num;
                produtoimpares = produtoimpares*num;
            }
        }
    }

    printf("\n Quantidade de numeros pares: %d\n", contimpares);
    printf("\n Quantidade de numeros imṕares: %d\n", contimpares);
    printf("\n soma de numeros pares: %d\n", somapares);
    printf("\n soma de numeros impares: %d\n", somaimpares);
    printf("\n produto dos numeros pares: %d\n", produtopares);
    printf("\n produto dos numeros impares: %d\n", produtoimpares);
    return 0;

}
