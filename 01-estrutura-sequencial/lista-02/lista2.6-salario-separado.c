/*6) Fazer um programa que leia um valor que representa o salário de uma pessoa. Apresente separadamente
os reais (parte inteira) e os centavos (parte decimal).*/

//====================BIBLIOTECA DAS FUNCOES ================

#include <stdio.h>
#include <math.h>

//=======================FUNÇÃO PRINCIPAL====================

int main(void)
{
    //=================DECLARAÇÃO DE VÁRIÁVEIS================


    float salario;
    int inteiro, centavos;

    //====================ENTRADA DE DADOS====================

    printf("========== CALCULO SEPARAÇÃO DO SALÁRIO  ========== \n \n \n");

    printf("informe o Valor do salario: R$");
    scanf("%f", &salario);

    printf("\n\n Salario informado: R$ %.2f\n\n", salario);


    //================PROCESSAMENTO DE DADOS=================

    inteiro = (int) salario;

     centavos = (salario - inteiro)*100;


    //===================SAIDA DE DADOS=======================

    printf(" Reais: R$ %i \n\n Centavos: R$ %i ", inteiro, centavos);

    return(0);
}
