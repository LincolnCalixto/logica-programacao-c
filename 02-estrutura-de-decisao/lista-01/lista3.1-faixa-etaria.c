/*1) Elabore um programa que, dada a idade de um jogador de futebol, classifique-o em uma das
seguintes categorias:
 __________________________________________________________
 |        0 - 4 anos   | AINDA EH CEDO PARA JOGAR FUTEBOL! |
 __________________________________________________________
 |       5 - 10 anos   | Sub-10                            |
 __________________________________________________________
 |      11 – 17 anos   | Sub-17                            |
 __________________________________________________________
 |      18 - 20 anos   | Sub-20                            |
 __________________________________________________________
 |      21 - 35 anos   | Profissional                      |
 __________________________________________________________
 |      36 - 55 anos   | Master                            |
 __________________________________________________________
 | 56 anos em diante   | MELHOR APOSENTAR AS CHUTEIRAS!    |
____________________________________________________________

Obs.: Se a idade for menor do que 0 (zero) informe: OPCAO INVALIDA!.*/

//====================BIBLIOTECA DAS FUNCOES ================

#include <stdio.h>
#include <math.h>

//=======================FUNÇÃO PRINCIPAL====================

int main(void)
{
    //=================DECLARAÇÃO DE VÁRIÁVEIS================
    int idade;

    //====================ENTRADA DE DADOS====================

    printf("\n\n========== CALCULO DA IDADE NO FUTEBOL  ========== \n \n \n");

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    //================PROCESSAMENTO DE DADOS=================


    //===================SAIDA DE DADOS=======================

    //if
        if (idade > 55)
         printf("EH MELHOR APOSENTAR AS CHUTEIRAS!!!");
        else
            if (idade > 35)
              printf("Master");
            else
                if (idade > 20)
                    printf("Profissional");
                else
                    if (idade > 17)
                        printf("Sub-20");
                    else
                        if (idade > 10)
                            printf("Sub-17");
                        else
                            if (idade > 5)
                                printf("Sub-10");
                            else
                                if (idade > 0)
                                 printf("AINDA EH CEDO PARA JOGAR FUTEBOL!");
                                else
                                printf("OPCAO INVALIDA !");


    return(0);
}
