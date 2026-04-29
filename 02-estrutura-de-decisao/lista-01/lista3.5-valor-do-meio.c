/* 5) Efetuar a leitura de três valores inteiros e apresentar o valor do meio.*/

//====================BIBLIOTECA DAS FUNCOES ================

#include <stdio.h>
#include <math.h>

//=======================FUNÇÃO PRINCIPAL====================

int main(void)
{
    //=================DECLARAÇÃO DE VÁRIÁVEIS================
    int num1, num2, num3;

    //====================ENTRADA DE DADOS====================

    printf("\n\n========== CALCULO DA IDADE NO FUTEBOL  ========== \n \n \n");

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo inteiro: ");
    scanf("%d", &num2);

    printf("Digite o terceiro inteiro: ");
    scanf("%d", &num3);
    //================PROCESSAMENTO DE DADOS=================


    //===================SAIDA DE DADOS=======================

    //if
        if ((num1 < num2 && num2 < num3)|| (num3 < num2 && num2 < num1))
         printf("O numero do meio é %d", num2);
        else
            if ((num2 < num3 && num3 < num1)|| (num1 < num3 && num3 < num2))
              printf("O numero do meio é %d", num3);
            else
                if ((num2 < num1 && num1 < num3)|| (num3 < num1 && num1 < num2))
                    printf("O numero do meio é %d", num1);
                else
                    printf("OPCAO INVALIDA !");


    return(0);
}
