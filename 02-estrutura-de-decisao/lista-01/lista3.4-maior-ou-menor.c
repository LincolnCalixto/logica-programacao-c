/* 4) Efetuar a leitura de dois números inteiros e apresentar a relação existente entre eles, ou seja, o
primeiro é maior que o segundo, os números são iguais, ou ainda, o segundo e maior que o primeiro.*/

//====================BIBLIOTECA DAS FUNCOES ================

#include <stdio.h>
#include <math.h>

//=======================FUNÇÃO PRINCIPAL====================

int main(void)
{
    //=================DECLARAÇÃO DE VÁRIÁVEIS================
    int num1, num2;

    //====================ENTRADA DE DADOS====================

    printf("\n\n========== CALCULO DA IDADE NO FUTEBOL  ========== \n \n \n");

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo inteiro: ");
    scanf("%d", &num2);
    //================PROCESSAMENTO DE DADOS=================


    //===================SAIDA DE DADOS=======================

    //if
        if (num2 > num1)
         printf("%d é maior do que %d", num2, num1);
        else
            if (num1 > num2)
              printf("%d é maior do que %d", num1, num2);
            else
                if (num1 == num2)
                    printf("%d é igual a %d", num1, num2);
                else
                    printf("OPCAO INVALIDA !");

    return(0);
}
