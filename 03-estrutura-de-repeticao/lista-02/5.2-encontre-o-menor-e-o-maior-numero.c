/* 2) Ler uma série de números informados pelo usuário até ser informado o valor zero. Encontrar e mostrar o
maior e o menor dos valores informados pelo usuário. O valor zero indica o final da leitura e não deve ser
considerado. */

#include <stdio.h>

int main(void)
{
    int num, maior, menor;
    int primeiro = 1;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num != 0)
        {
            if (primeiro)
            {
                maior = num;
                menor = num;
                primeiro = 0;
            }
            else
            {
                if (num > maior)
                {
                    maior = num;
                }

                if (num < menor)
                {
                    menor = num;
                }
            }
        }

    }
    while (num != 0);

    printf("\nMaior valor: %d", maior);
    printf("\nMenor valor: %d\n", menor);

    return 0;
}
