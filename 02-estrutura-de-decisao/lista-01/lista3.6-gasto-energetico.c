/* 6) Desenvolver um programa que calcula e retorna o Gasto Energético Basal (GEB), utilizando as
seguintes fórmulas:

para homens: GEB = 66.47 + (13.75 * PC) + (5 * Alt) – (6.76 * I)

para mulheres: GEB = 65.1 + (9.56 * PC) + (1.85 * Alt) – (4.67 * I)

onde: PC = Peso corporal em kg; Alt = altura em cm e I = Idade..*/

//====================BIBLIOTECA DAS FUNCOES ================

#include <stdio.h>
#include <math.h>

//=======================FUNÇÃO PRINCIPAL====================

int main(void)
{
    //=================DECLARAÇÃO DE VÁRIÁVEIS================
    float pc, GEBh, GEBm;
    int alt, i;
    char sexo;

    //====================ENTRADA DE DADOS====================

    printf("\n\n ========== CALCULO DO GASTO ENERGETICO  ========== \n \n \n ");

    printf("Digite seu sexo (M - masculino ou F - feminino): ");
    scanf(" %c", &sexo);

    printf("Digite seu peso corporal em kg: ");
    scanf("%f", &pc);

    printf("Digite sua altura em cm: ");
    scanf("%i", &alt);

    printf("Digite sua idade: ");
    scanf("%i", &i);
    //================PROCESSAMENTO DE DADOS=================
    GEBh = 66.47 + ( 13.75 * pc)+ (5*alt) - (6.76 *i);
    GEBm = 65.1 + (9.56 * pc) + (1.85 * alt) - (4.67 * i);

    //===================SAIDA DE DADOS=======================

    //if

    /*
        if ((sexo == 'm')|| (sexo == 'M'))
         printf("\n\n sexo masculino \n GEB = %.2f", GEBh);
        else
            if ((sexo = 'f')|| (sexo = 'F'))
              printf("\n\n sexo feminino \n GEB = %.2f", GEBm);
            else
              printf("OPCAO INVALIDA !");
    */

    //switch

        switch (sexo)
            {
            case 'm':
            case 'M':
                printf("\n\n sexo masculino \n GEB = %.2f", GEBh);
                break;
            case 'f':
            case 'F':
                printf("\n\n sexo feminino \n GEB = %.2f", GEBm);
                break;
         default :
            printf("sexo invalido");
            break;
            }


    return(0);
}
