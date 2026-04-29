/* 3) Ler dois números que representam os limites de um intervalo e ler o incremento. Mostrar os números desse
intervalo de acordo com o incremento informado e em ordem crescente. O usuário pode informar os valores
que representam os limites do intervalo em ordem crescente ou decrescente. Fazer a média dos ímpares e
divisíveis por 35 do intervalo.*/

#include <stdio.h>
int main(void)
{
    int i, lims, limi, incremento=0, soma=0, qtd = 0;
    float media;


    printf("\nInforme o valor inicial do intervalo: ");
    scanf("%d",&limi);
    printf("\nInforme o valor final do intervalo: ");
    scanf("%d",&lims);
    printf("Informe o incremento: ");
    scanf("%d",&incremento);
    if (lims<limi)
    {
        i = lims;
        lims = limi;
        limi = i;
    }

    for (i=limi; i<= lims; i+=incremento)
    {
       printf("\n%d\t", i);
       if(i%35==0 && i%2!=0)
       {
           soma = soma +i;
           qtd ++;
           printf("impar e multiplo de 35");
       }
    }

    media = (float)soma/qtd;
    printf("\nA media é: %.2f", media);
return 0;
}
