#include <stdio.h>
/*
2) Escreva um programa que leia o valor de uma prestação e da taxa de juros cobrada pelo atraso da
prestação e forneça o valor atualizado:
*/

float main(void)
{
   //=====DECLARAÇÃO DE VÁRIÁVEIS=====

   float prestacao, taxa, dias, total;

   //========ENTRADA DE DADOS=========

    printf(" digite o valor da prestação:  ");
    scanf("%f", &prestacao);
    printf("\n \n");

    printf(" digite a taxa de juros:  ");
    scanf("%f", &taxa);
    printf("\n \n");

    printf(" digite os dias de atraso:  ");
    scanf("%f", &dias);
    printf("\n \n");

    //=====PROCESSAMENTO DE DADOS=====

    total = prestacao + (prestacao*(taxa/100)*dias);

    //========saida de dados==========

    printf("o valor total a ser pago é: R$  %.2f  \n \n", total);

    return 0;


}
