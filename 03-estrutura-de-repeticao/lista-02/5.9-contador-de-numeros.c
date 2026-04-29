/* 9) Ler números inteiros informados pelo usuário até ser informado um valor negativo. Dentre os números
informados, exceto o valor negativo que é a condição de saída:
a) Contar a quantidade de números menores que 10 ou maiores que 100.
b) Contar a quantidade de números ímpares.
c) Contar a quantidade de números divisíveis por 10.
d) Contar a quantidade de números entre 10 e 100.e) Contar quantas vezes é informado o número 30.
f) Contar quantas vezes é informado um número diferente de 10, de 20 e de 30.*/

#include <stdio.h>

int main(void)
{
    int num, menores10maiores100 = 0, impares = 0, divisiveis10 = 0, entre10e100 = 0, iguais30 = 0, diferentes102030 = 0;

    do
    {
        printf("Informe um numero (negativo para finalizar): ");
        scanf("%d", &num);

        if (num < 0)
        {
            printf("\n");
            break;
        }

        if (num < 10 || num > 100)
        {
            menores10maiores100++;
        }

        if (num % 2 != 0)
        {
            impares++;
        }

        if (num % 10 == 0)
        {
            divisiveis10++;
        }

        if (num >= 10 && num <= 100)
        {
            entre10e100++;
        }

        if (num == 30)
        {
            iguais30++;
        }

        if (num != 10 && num != 20 && num != 30)
        {
            diferentes102030++;
        }

    }
    while (num >= 0);

    printf("A quantidade de numeros menores que 10 ou maiores que 100 eh: %d\n", menores10maiores100);
    printf("A quantidade de numeros impares eh: %d\n", impares);
    printf("A quantidade de numeros divisiveis por 10 eh: %d\n", divisiveis10);
    printf("A quantidade de numeros entre 10 e 100 eh: %d\n", entre10e100);
    printf("O numero de vezes que foi informado o numero 30 eh: %d\n", iguais30);
    printf("A quantidade de vezes que foi informado um numero diferente de 10, de 20 e de 30 eh: %d\n", diferentes102030);


    return 0;
}
