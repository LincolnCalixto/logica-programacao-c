/*13) Apresente os números pares entre 100 e 200. Contar quantos são ímpares e não divisíveis
por 3 nesse intervalo. Faça a média dos valores pares e divisíveis por 5 do intervalo.*/

#include<stdio.h>

int main(void)
{
    int i, cont=0, soma=0, qtd=0;
    float media;
    {
        for(i=100; i<=200; i++)
        {
            if (i%2==0)
            {
                printf("%d\n",i);
            }
            if (i%2==0 && i%5==0)
            {
                soma += i;
                qtd ++;
            }
            if(i%2!=0 && i%3!=0)
            {
                cont++;
            }
        }
    }

    media = (float)soma/qtd;
    printf("\nnumeros impares e nao divisiveis por 3: %d\n",cont);
    printf("\nMedia dos numeros pares divisiveis por 5 no intervalo: %.2f", media);
    printf("\n");
    return 0;
}
