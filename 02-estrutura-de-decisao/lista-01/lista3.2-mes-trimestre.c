/*2) Ler um valor inteiro que representa o mês de uma data e apresentar o trimestre correspondente.*/

//====================BIBLIOTECA DAS FUNCOES ================

#include <stdio.h>
#include <math.h>

//=======================FUNÇÃO PRINCIPAL====================

int main(void)
{
    //=================DECLARAÇÃO DE VÁRIÁVEIS================
    int mes;

    //====================ENTRADA DE DADOS====================

    printf("\n\n========== CALCULO DO TRISMESTRE NO MES  ========== \n \n \n");

    printf("Digite mes: ");
    scanf("%d", &mes);

    //================PROCESSAMENTO DE DADOS=================


    //===================SAIDA DE DADOS=======================

    //if
    /*if (mes > 12)
        printf("mes invalido");
    else
        if (mes > 9)
         printf("quarto trimestre");
        else
            if (mes > 6)
              printf("terceiro trimestre");
            else
                if (mes > 3)
                    printf("segundo trimestre");
                else
                    if (mes > 0)
                        printf("primeiro trimestre");
                    else
                        printf("mes invalido");
    */
    //switch

    switch (mes)
    {
        case 1:
        case 2:
        case 3:
            printf("primeiro trimestre");
            break;
        case 4:
        case 5:
        case 6:
            printf("segundo trimestre");
            break;
        case 7:
        case 8:
        case 9:
            printf("terceiro trimestre");
            break;
        case 10:
        case 11:
        case 12:
            printf("quarto trimestre");
            break;
        default :
            printf("mes invalido");
            break;

    }



    return(0);
}
