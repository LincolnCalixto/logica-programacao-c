/* 7) Elabore um programa que dado o valor de “x” calcule a f(x) neste ponto, sendo f(x) definida por:*/

//====================BIBLIOTECA DAS FUNCOES ================

#include <stdio.h>
#include <math.h>

//=======================FUNÇÃO PRINCIPAL====================

int main(void)
{
    //=================DECLARAÇÃO DE VÁRIÁVEIS================
    int num1, y1, y2;

    //====================ENTRADA DE DADOS====================

    printf("\n\n========== CALCULO DA FUNCAO DE SISTEMAS  ========== \n \n \n");

    printf("Digite o valor de x: ");
    scanf("%d", &num1);

    //================PROCESSAMENTO DE DADOS=================

    y1 = 2*num1 + 4;

    y2 = num1 + 1;

    //===================SAIDA DE DADOS=======================

    //if
        if (num1 < 0)
         printf("\n\n 2x + 4 \n 2(%d) + 4 \n %d", num1, y1);
        else
            if (num1 >= 0)
              printf("\n\n x + 1 \n %d + 1 \n %d \n \n", num1, y2);
            else
              printf("OPCAO INVALIDA !");


    return(0);
}
