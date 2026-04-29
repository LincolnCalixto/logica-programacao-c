/*8) Ler um número inteiro com até 5 dígitos. Separar os dígitos desse número e mostrá-los em linhas distintas.
Também calcular e mostrar a soma dos dígitos.*/

//====================BIBLIOTECA DAS FUNCOES ================

#include <stdio.h>
#include <math.h>

//=======================FUNÇÃO PRINCIPAL====================

int main(void)
{
    //=================DECLARAÇÃO DE VÁRIÁVEIS================
    int num, num1, num2, num3, num4, num5, soma;

    //====================ENTRADA DE DADOS====================

    printf("\n\n========== CALCULO DE REAJUSTE SALARIAL 2.0  ========== \n \n \n");

    printf("informe um numero inteiro com até 5 digitos");
    scanf("%d", &num);

    //================PROCESSAMENTO DE DADOS=================


    num1 = (num%100000/10000);
    num2 = (num%10000)/1000;
    num3 = (num%1000)/100;
    num4 = (num%100)/10;
    num5 = (num%10);

    soma = num1 + num2 + num3 + num4 + num5;
    //===================SAIDA DE DADOS=======================

    printf("\n\n %d eh o primeiro digito; ", num1);
    printf("\n %d eh o segundo digito; ", num2);
    printf("\n %d eh o terceiro digito; ", num3);
    printf("\n %d eh o quarto digito; ", num4);
    printf("\n %d eh o quinto digito; ", num5);

    printf("\n A soma dos digitos é %d: ", soma);
    printf("\n\n");


    return(0);
}
