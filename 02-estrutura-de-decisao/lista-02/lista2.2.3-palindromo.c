/* 3 - Números palíndromos são aqueles que escritos da direita para a esquerda ou da esquerda para a direita
tem o mesmo valor. Ex.: 9229, 4554, 9779. Fazer um programa que dado um número de 4 dígitos, calcular e escrever
se este número é ou não palíndromo.*/

//====================BIBLIOTECA DAS FUNCOES ================

#include <stdio.h>
#include <math.h>

//=======================FUNÇÃO PRINCIPAL====================

int main(void)
{
    //=================DECLARAÇÃO DE VÁRIÁVEIS================
    char a,b,c,d;

    //====================ENTRADA DE DADOS====================

    printf("\n\n========== CALCULO DA ORDEM DE VALORES  ========== \n \n \n");

    printf("Digite um numero de 4 digitos: ");
    scanf(" %c %c %c %c", &a, &b, &c, &d);

    //================PROCESSAMENTO DE DADOS=================



    //===================SAIDA DE DADOS=======================

    //if
    if ( a==d && b==c )
        printf("\n\n o numero é um palindromo");
    else
        printf("O numero não é um palindromo");

    return(0);
}
