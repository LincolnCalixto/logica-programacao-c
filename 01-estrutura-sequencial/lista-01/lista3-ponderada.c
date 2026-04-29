#include <stdio.h>
/*
3) Um professor atribui pesos de 1 a 3 para as notas de três avaliações, respectivamente. Faça um programa
que receba as notas e calcule e mostre a média ponderada. A média e as notas serão valores do tipo float.
Média Ponderada = (nota1 * 1 + nota2 * 2 + nota3 * 3) / (1 + 2 + 3)
*/

float main(void)
{
   //=====DECLARAÇÃO DE VÁRIÁVEIS=====

   float av1, av2, av3, ponderada;

   //========ENTRADA DE DADOS=========

    printf(" digite o valor da av1:  ");
    scanf("%f", &av1);
    printf("\n \n");

    printf(" digite o valor da av2:  ");
    scanf("%f", &av2);
    printf("\n \n");

    printf(" digite o valor da av3:  ");
    scanf("%f", &av3);
    printf("\n \n");

    //=====PROCESSAMENTO DE DADOS=====

    ponderada = (av1+ 2*av2 + 3*av3)/6;

    //========saida de dados==========

    printf("a média ponderada é  %.2f  \n \n", ponderada);

    return 0;


}
