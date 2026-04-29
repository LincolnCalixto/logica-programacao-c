/*5) (DESAFIO) Obter o resto da divisão de dois valores inteiros informados pelo usuário, sem usar o operador
aritmético de resto (%).*/

//====================BIBLIOTECA DAS FUNCOES ================

#include <stdio.h>
#include <math.h>

//=======================FUNÇÃO PRINCIPAL====================

int main(void)
{
    //=================DECLARAÇÃO DE VÁRIÁVEIS================


    int num, mun, centena, dezena, unidade;

    //====================ENTRADA DE DADOS====================

    printf("========== CALCULO DA SOMA DOS DIGITOS  ========== \n \n \n");

    printf("informe um numero inteiro com até 3 digitos: ");
    scanf("%d", &num);


    //================PROCESSAMENTO DE DADOS=================
    centena = (num/100);
    dezena = (num%100/10);
    unidade = num%10 ;
    mun = centena + dezena + unidade;


    //===================SAIDA DE DADOS=======================

    printf("\n %d = %d + %d + %d = %d \n", num , centena, dezena, unidade, mun);

    return(0);
}
