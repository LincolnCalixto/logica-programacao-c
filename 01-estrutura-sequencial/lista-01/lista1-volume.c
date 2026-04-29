#include <stdio.h>
/*
 1) Escreva um programa que leia o comprimento (cm), a largura (cm) e a altura (cm) de uma caixa retangular
e calcule o seu volume (cm3
), cuja fórmula é: Volume = Comprimento * Largura * Altura.
Teste o seu programa com as medidas abaixo:
*/

float main(void)
{
   //=====DECLARAÇÃO DE VÁRIÁVEIS=====

   float altura, largura, comprimento, volume;

   //========ENTRADA DE DADOS=========

    printf(" digite a altura:  ");
    scanf("%f", &altura);
    printf("\n \n");

    printf(" digite a largura:  ");
    scanf("%f", &largura);
    printf("\n \n");

    printf(" digite o comprimento:  ");
    scanf("%f", &comprimento);
    printf("\n \n");

    //=====PROCESSAMENTO DE DADOS=====

    volume = altura*largura*comprimento;

    //========saida de dados==========

    printf("o valor do volume é  é:  %.2f  cm³ \n \n", volume);

    return 0;


}
