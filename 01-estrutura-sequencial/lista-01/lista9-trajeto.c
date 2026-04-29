/*
9) Um viajante de carro fará o trajeto entre duas cidades e ao término da viagem deseja saber:

    a) Quantas vezes foi necessário abastecer o carro (use a função ceil() da biblioteca math.h para arredondar o
        valor para cima).

    b) Quantos litros foram consumidos para percorrer a distância indicada.

    c) Quantos litros restaram no tanque após a chegada ao destino.

Faça um programa que leia a distância entre as duas cidades, a capacidade do tanque e o consumo médio
do veículo, calcule e mostre as informações solicitadas.*/

//====================BIBLIOTECA DAS FUNCOES ================

#include <stdio.h>
#include <math.h>

//=======================FUNÇÃO PRINCIPAL====================

float main(void)
{
   //=================DECLARAÇÃO DE VÁRIÁVEIS================

   float S, cap, vol, kml , total_cp, restante ;
   int total_abt;

   //====================ENTRADA DE DADOS====================

   printf("========== CALCULO PARA CONSUMO DE COMBUSTÍVEL  ========== \n \n \n");

    printf(" informe a distancia (em km) percorrida entre as cidades: ");
    scanf("%f", &S);
    printf("\n \n");

    printf("informe a capacidade maxima do tanque de combustivel do veiculo ( em litros): ");
    scanf("%f", &cap);
    printf("\n \n");

    printf(" informe o consumo medio (em km por litro) do veiculo: ");
    scanf("%f", &kml);
    printf("\n \n");

    //================PROCESSAMENTO DE DADOS=================

    vol = S/kml;
   total_abt = ceil(vol/cap);
   restante = ((total_abt - (vol/cap)))*cap;


    //===================SAIDA DE DADOS=======================


    printf(" Foram necessários %.1f litros de combustivel para percorrer o trajeto.\n\n", vol);
    printf(" Foi necessário abastecer o veiculo %.i vezes \n\n", total_abt);
    printf(" Restou do tanque %.1f litros \n\n", restante);

    return 0;

}
