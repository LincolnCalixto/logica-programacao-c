#include <stdio.h>
/*
9) Um viajante de carro fará o trajeto entre duas cidades e ao término da viagem deseja saber:

a) Quantas vezes foi necessário abastecer o carro (use a função ceil() da biblioteca math.h para arredondar o
valor para cima).

b) Quantos litros foram consumidos para percorrer a distância indicada.

c) Quantos litros restaram no tanque após a chegada ao destino.

Faça um programa que leia a distância entre as duas cidades, a capacidade do tanque e o consumo médio do veículo, calcule e mostre as informações solicitadas.
*/

float main(void)
{
   //=====DECLARAÇÃO DE VÁRIÁVEIS=====

   float preco_fab, tx_dist, tx_imp , preco_final ;

   //========ENTRADA DE DADOS=========

   printf("========== CALCULO PARA SEU NOVO CARRO  ========== \n \n \n");

    printf(" informe o custo de fábrica do automóvel: R$ ");
    scanf("%f", &preco_fab);
    printf("\n \n");

    printf(" informe a porcentagem do distribuidor (0 à 100 ) (%%):");
    scanf("%f", &tx_dist);
    printf("\n \n");

    printf(" informe a porcentagem de impostos (0 à 100 ) (%%):");
    scanf("%f", &tx_imp);
    printf("\n \n");

    //=====PROCESSAMENTO DE DADOS=====

    preco_final = preco_fab + preco_fab*(((tx_dist)/100) + ( (tx_imp)/100));


    //========saida de dados==========


    printf(" O cuato final ao consumidor é: R$) %.2f \n\n" , preco_final);

    return 0;


}
