/*3) Leia um valor com duas casas decimais que representa o troco a ser fornecido por um caixa. Separe a
parte inteira (reais) da parte decimal (centavos) e apresente na forma: 123 reais e 19 centavos. Use a função
round, da biblioteca math.h, para o arredondamento da parte decimal.*/

//====================BIBLIOTECA DAS FUNCOES ================

#include <stdio.h>
#include <math.h>

//=======================FUNÇÃO PRINCIPAL====================

int main(void)
{
    //=================DECLARAÇÃO DE VÁRIÁVEIS================

    double troco;
    int inttroco, dectroco;

    //====================ENTRADA DE DADOS====================

    printf("========== CALCULO DO CONSÓRCIO  ========== \n \n \n");

    printf("informe o valor do troco: R$ ");
    scanf("%lf", &troco);


    //================PROCESSAMENTO DE DADOS=================

    inttroco = (int) troco ;
    dectroco = round ((troco - inttroco) * 100);

    //===================SAIDA DE DADOS=======================

    printf("\n O valor informado eh %d reais e %d centavos. \n", inttroco , dectroco);

    return(0);
}
