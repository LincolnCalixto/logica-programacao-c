#include <stdio.h>
/*
4) Tendo como entrada dois valores inteiros, elaborar um programa para calcular e mostrar:
a) A soma desses valores;
b) A subtração do primeiro pelo segundo;
c) A multiplicação entre eles;
d) A divisão inteira do primeiro pelo segundo;
e) A divisão float do primeiro pelo segundo;
f) O resto da divisão do primeiro pelo segundo.
*/

int main(void)
{
   //=====DECLARAÇÃO DE VÁRIÁVEIS=====

   int int1, int2, soma, subtracao, multiplicao, divisao1, resto;
   float divisao2;

   //========ENTRADA DE DADOS=========

   printf("==========CALCULADORA ARITMÉTICO========== \n \n \n");

    printf(" digite o primeiro valor:  ");
    scanf("%i", &int1);
    printf("\n \n");

    printf(" digite o segundo valor:  ");
    scanf("%i", &int2);
    printf("\n \n");


    //=====PROCESSAMENTO DE DADOS=====

    soma = int1 + int2;
    subtracao = int1 - int2;
    divisao1 = int1/int2;
    divisao2 = (float) int1/int2;
    resto = int1 - (divisao1*int2);

    //========saida de dados==========

    printf(" a - a soma é  %i  \n \n", soma);
    printf(" b - a subtracao é  %i  \n \n", subtracao);
    printf(" c - a divisão inteira  é  %i  \n \n", divisao1);
    printf(" f - e o resto é  %i  \n \n", resto);
    printf(" d - a divisão decimal é  %.2f  \n \n", divisao2);
    return 0;


}
