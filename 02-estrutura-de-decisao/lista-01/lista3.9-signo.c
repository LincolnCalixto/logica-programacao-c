/*9) Elabore um programa que leia o dia e o mês de nascimento de uma pessoa e determine o seu
signo conforme a tabela a seguir:*/

//====================BIBLIOTECA DAS FUNCOES ================

#include <stdio.h>
#include <math.h>

//=======================FUNÇÃO PRINCIPAL====================

int main(void)
{
    //=================DECLARAÇÃO DE VÁRIÁVEIS================
    int dia, mes;

    //====================ENTRADA DE DADOS====================

    printf("\n\n========== CALCULO DO ZODIACO  ========== \n \n \n");

    printf("Digite o dia do nascimento: ");
    scanf("%i", &dia);

    printf("\n \n digite o mes de nascimento: ");
    scanf("%i", &mes);

    //================PROCESSAMENTO DE DADOS=================


    //===================SAIDA DE DADOS=======================

    //if

    if ( (mes == 1 && dia<= 20) || (mes == 12 && dia<=31) )
        printf("\n \n Capricórnio \n ");
    else
        if ( (mes == 1 && dia<= 31) || (mes == 2 && dia<=19) )
            printf("\n \n Aquario \n ");
        else
            if ( (mes == 2 && dia<= 29) || (mes == 3 && dia<=20) )
                printf("\n \n Peixes \n ");
            else
               if ( (mes == 3 && dia<= 31) || (mes == 4 && dia<=20) )
                    printf("\n \n Aries \n ");
                else
                  if ( (mes == 4 && dia<= 30) || (mes == 5 && dia<=20) )
                        printf("\n \n Touro \n ");
                    else
                        if ( (mes == 5 && dia<= 31) || (mes == 6 && dia<=20) )
                            printf("\n \n Gemeos \n ");
                        else
                            if ( (mes == 6 && dia<= 30) || (mes == 7 && dia<=21) )
                                printf("\n \n Cancer \n ");
                            else
                                if ( (mes == 7 && dia<= 31) || (mes == 8 && dia<=22) )
                                    printf("\n \n Leão \n ");
                                else
                                    if ( (mes == 8 && dia<= 31) || (mes == 9 && dia<=22) )
                                        printf("\n \n Virgem \n ");
                                    else
                                        if ( (mes == 9 && dia<= 30) || (mes == 10 && dia<=22) )
                                            printf("\n \n Libra \n ");
                                        else
                                            if ( (mes == 10 && dia<= 31) || (mes == 11 && dia<=21) )
                                                printf("\n \n Escorpiao \n ");
                                            else
                                                if ( (mes == 11 && dia<= 31) || (mes == 12 && dia<=21) )
                                                    printf("\n \n Sagitario \n ");
                                                else
                                                    printf("\n \n erro nos dados \n \n");


    return(0);
}
