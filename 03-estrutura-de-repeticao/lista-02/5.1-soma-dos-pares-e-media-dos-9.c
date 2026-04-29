/* 1) Ler um número maior que 2 e imprimir todos os pares entre 2 e o número lido. Imprimir também a soma
dos pares, o produto dos ímpares que são divisíveis por 9 e a média de todos os números do intervalo.*/

#include <stdio.h>

int main (void)
{
    int i, num, somapar=0, prodimpar=1, qtd = 0, soma=0;
    float media;
    {
        do
        {
            printf("\n Digite um numero maior que 2: ");
            scanf("%d",&num);
            if (num<=2)
                {
                    printf("\nValor invalido...\n");
                }
        }
        while (num<=2);
        for (i = 2 ; i <= num; i++)
        {
        if (i%2==0)
            {
                somapar = somapar + i;
                printf(" %d\t", i);
            }
            if (i%2!=0 && i%9==0)
            {
                prodimpar = prodimpar*i;
            }
            else
            {
                soma += i;
                qtd++;

            }
        }
    }
    media = (float) soma/qtd;
    printf("\nA soma dos pares eh: %d", somapar);
    printf("\nO produto dos impares divisiveis por 9: %d", prodimpar);
    printf("\nA media de todos os numeros: %.2f", media);
    printf("\n");
}
