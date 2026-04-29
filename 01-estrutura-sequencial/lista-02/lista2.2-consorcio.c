/*2) Considerando que para um consórcio sabe-se o número total de prestações, a quantidade de prestações
pagas e o valor de cada prestação (que é fixo). Escreva um programa que determine o valor total já pago pelo
consorciado e o saldo devedor*/

//====================BIBLIOTECA DAS FUNCOES ================

#include <stdio.h>

//=======================FUNÇÃO PRINCIPAL====================

int main(void)
{
    //=================DECLARAÇÃO DE VÁRIÁVEIS================

    float valorp, total_pg, devendo;
    int prest, prest_pg;

    //====================ENTRADA DE DADOS====================

    printf("========== CALCULO DO CONSÓRCIO  ========== \n \n \n");

    printf("informe a quantidade de prestações: ");
    scanf("%d", &prest);

    printf("informe a quantidade de prestações pagas: ");
    scanf("%d", &prest_pg);

    printf("informe o valor fixo das prestações: ");
    scanf("%f", &valorp);

    //================PROCESSAMENTO DE DADOS=================

    total_pg = prest_pg * valorp ;
    devendo = (prest - prest_pg) * valorp;

    //===================SAIDA DE DADOS=======================

    printf("\n Valor total ja pago: R$ %.2f\n", total_pg);
    printf("\n Saldo devedor: R$ %.2f\n", devendo);

    return(0);
}
