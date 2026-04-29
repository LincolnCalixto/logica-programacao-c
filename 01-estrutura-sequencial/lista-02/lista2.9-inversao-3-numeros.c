/*9) Ler um número inteiro com até 3 dígitos. Separar os dígitos desse número e mostrá-los em linhas distintas.
Na sequência calcular e mostrar o inverso do número.*/

//====================BIBLIOTECA DAS FUNCOES ================

#include <stdio.h>
#include <math.h>

//=======================FUNÇÃO PRINCIPAL====================

int main(void)
{
    //=================DECLARAÇÃO DE VÁRIÁVEIS================
    int num, num1, num2, num3;
    char A, B, C, aux;

    //====================ENTRADA DE DADOS====================

    printf("\n\n========== CALCULO DE REAJUSTE SALARIAL 2.0  ========== \n \n \n");

    printf("informe um numero inteiro com até três digitos: ");
    scanf("%d", &num);

    //================PROCESSAMENTO DE DADOS=================

    //separacao
    num1 = (num%1000)/100;
    num2 = (num%100)/10;
    num3 = (num%10);

    //inverso tipo 2
    aux = num1;
    A = num3;
    B = num2;
    C = aux;

    //===================SAIDA DE DADOS=======================

    //separacao
    printf("\n\n %d eh o primeiro digito; ", num1);
    printf("\n %d eh o segundo digito; ", num2);
    printf("\n %d eh o terceiro digito; ", num3);

    //inverso tipo 1
    printf("\n\n o inverso do numero é %d%d%d", num3, num2, num1);

    //inverso tipo 2
    printf("\n\n O inverso do numero è: %d%d%d ", A, B, C );
    printf("\n\n");


    return(0);
}
