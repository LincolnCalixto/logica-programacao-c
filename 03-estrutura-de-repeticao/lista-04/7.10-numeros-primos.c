/* 10) Ler dois números que representam os limites de um intervalo. Validar a entrada para que o usuário forneça valores positivos. Mostrar o intervalo em ordem crescente.
a) Mostrar os números primos do intervalo, com cinco números por linha.
b) Calcular a média dos múltiplos de 3 e de 7 desse intervalo. Validar para que não seja realizada uma divisão por zero. */

#include<stdio.h>
int main(void)
{
    int i,j, num_inf, num_sup, contdiv, qtd=0, cont = 0;
    float media;


    printf("\nInforme um valor  para o limite inferior  do intervalo: ");
    scanf("%d", &num_inf);
    printf("\nInforme um valor para o limite superior: ");
    scanf("%d", &num_sup);
    for(i = num_inf; i<=num_sup; i++)
    {
        contdiv=0;

        for(j=1; j<=i; j++ )
        {

            if(i%j==0)
            {
                contdiv++;
            }

        }
        if(contdiv==2)
        {
            printf("\t %d ", i);
            contdiv = 0;
        }

        if(i%3==0 && i%7==0)
        {
            qtd += i;
            cont++;
        }
    }

    media = (float) qtd/cont;
    printf("\n\nA media dos multiplos de 3 e 7 eh: %.2f \n", media);



    return 0;
}
