/*8) Ler o numerador e o denominador de uma divisão e realizá-la verificando a possibilidade de
“divisão por zero”.*/

//====================BIBLIOTECA DAS FUNCOES ================

#include <stdio.h>
#include <math.h>

//=======================FUNÇÃO PRINCIPAL====================

int main(void)
{
    //=================DECLARAÇÃO DE VÁRIÁVEIS================
    float numerador, denominador, resultado;

    //====================ENTRADA DE DADOS====================

    printf("\n\n========== CALCULO DA DIVISÃO  ========== \n \n \n");

    printf("Digite o numerador: ");
    scanf("%f", &numerador);

    printf("\n \n Digite o denominador: ");
    scanf("%f", &denominador);

    //================PROCESSAMENTO DE DADOS=================

    resultado = numerador/denominador;

    //===================SAIDA DE DADOS=======================

    //if

    if (denominador == 0)
        printf("\n \n Erro: divisão por zero não existe \n \n ");
    else
        if (resultado != (int)resultado)
            printf("\n \n %.0f / %.0f = %.2f \n \n", numerador, denominador, resultado);
        else
            printf("\n \n %.0f / %.0f = %.0f \n \n", numerador, denominador, resultado);




    return(0);
}
