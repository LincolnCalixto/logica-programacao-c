#include <stdio.h>

float main(void)
{
   //=====DECLARAÇÃO DE VÁRIÁVEIS=====

   float salario, reajuste, correcao;

   //========ENTRADA DE DADOS=========

    printf(" digite o salario:  ");
    scanf("%f", &salario);
    printf("\n \n");

    printf(" digite o valor do reajuste:  ");
    scanf("%f", &reajuste);
    printf("\n \n");

    //=====PROCESSAMENTO DE DADOS=====

    correcao = salario * ( 1 + (reajuste/100));

    //========saida de dados==========

    printf("Seu novo salario é:  %f \n \n", correcao);

    return 0;


}
