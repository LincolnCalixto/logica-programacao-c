/*1) Ler um número com seis dígitos decimais. Separar a parte inteira e a parte decimal desse número.
Apresentar a parte decimal como um valor float e como um inteiro de três dígitos. Da parte inteira separar o
número que representa unidade, dezena e centena e mostrar.*/

//====================BIBLIOTECA DAS FUNCOES ================

#include <stdio.h>

//=======================FUNÇÃO PRINCIPAL====================

int main(void)
{
    //=================DECLARAÇÃO DE VÁRIÁVEIS================

    double num, decimal;
    int parteInt, decInt, centena, dezena, unidade;

    //====================ENTRADA DE DADOS====================

    printf("========== CALCULO PARA CONSUMO DE COMBUSTÍVEL  ========== \n \n \n");

    printf("informe um numero com 6 casas decimais ");
    scanf("%lf", &num);

    //================PROCESSAMENTO DE DADOS=================

    parteInt = (int)num;
    decimal = num - parteInt;
    decInt = decimal*1000;
    centena = parteInt/100 ;
    dezena = (parteInt%100/10); // % significa mod, ou resto da divisão
    unidade = (parteInt%10);

    //===================SAIDA DE DADOS=======================

    printf("\n Numero informado: %lf", num);
    printf("\n parte inteira: %d\n", parteInt);
    printf("\n parte decimal: %lf\n", decimal);
    printf("\n parte decimal como inteiro de três digitos: %d\n", decInt);
    printf("\n Centena(s): %d\n", centena);
    printf("\n Dezena(s): %d\n", dezena);
    printf("\n Unidade(s): %d\n", unidade);

    return(0);
}
