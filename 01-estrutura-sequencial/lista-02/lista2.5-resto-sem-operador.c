/*5) (DESAFIO) Obter o resto da divisão de dois valores inteiros informados pelo usuário, sem usar o operador
aritmético de resto (%).*/

//====================BIBLIOTECA DAS FUNCOES ================

#include <stdio.h>
#include <math.h>

//=======================FUNÇÃO PRINCIPAL====================

int main(void)
{
    //=================DECLARAÇÃO DE VÁRIÁVEIS================


    int dividendo, divisor, resto, quociente;

    //====================ENTRADA DE DADOS====================

    printf("========== CALCULO DA RESTO  ========== \n \n \n");

    printf("informe o numero inteiro do dividendo: ");
    scanf("%d", &dividendo);

    printf("informe o numero inteiro do divisor: ");
    scanf("%d", &divisor);

    //================PROCESSAMENTO DE DADOS=================

    quociente = dividendo/divisor;

    resto = dividendo - (quociente * divisor);


    //===================SAIDA DE DADOS=======================

    printf("\n o resto da divisão é %d ", resto);

    return(0);
}
