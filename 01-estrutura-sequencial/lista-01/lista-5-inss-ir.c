#include <stdio.h>
/*
5) Calcular o valor do salário líquido de uma pessoa. Sobre o salário bruto incidem descontos de INSS e
imposto de renda.
*/

int main(void)
{
   //=====DECLARAÇÃO DE VÁRIÁVEIS=====

   float sal_bruto, tx_inss, tx_ir, sal_liq;

   //========ENTRADA DE DADOS=========

   printf("========== CALCULADORA PARA DESCONTOS SALARIAIS ========== \n \n \n");

    printf(" digite seu salario bruto: R$");
    scanf("%f", &sal_bruto);
    printf("\n \n");

    printf(" digite a taxa do INSS (%%):");
    scanf("%f", &tx_inss);
    printf("\n \n");

    printf(" digite a taxa do IR (%%):");
    scanf("%f", &tx_ir);
    printf("\n \n");


    //=====PROCESSAMENTO DE DADOS=====

    sal_liq = sal_bruto - (sal_bruto*(tx_inss/100)) - (sal_bruto*(tx_ir/100));


    //========saida de dados==========

    printf(" O salario liquido é de: R$   %.2f  \n \n", sal_liq);
    return 0;


}
