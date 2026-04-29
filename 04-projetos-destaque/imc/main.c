/* 3) IMC = peso/(altura)2 . A Organização Mundial de Saúde usa um critério simples para considerar
quem está acima do peso e quem é obeso: Desenvolva um programa que leia o peso (em kg, tipo float) e
altura (em metros, tipo float) e em seguida calcule o IMC e mostre qual a situação do adulto de acordo com a
tabela:

       IMC Calculado                Situação

       Menos de 20                Abaixo do peso
      20 ≤ IMC < 25                Peso normal
      25 ≤ IMC < 30                Acima do peso
      30 ≤ IMC < 34                   Obeso
       Acima de 34                  Muito obeso
*/

//====================BIBLIOTECA DAS FUNCOES ================

#include <stdio.h>
#include <math.h>

//=======================FUNÇÃO PRINCIPAL====================

int main(void)
{
    //=================DECLARAÇÃO DE VÁRIÁVEIS================
    float peso, altura, imc;

    //====================ENTRADA DE DADOS====================

    printf("\n\n========== CALCULO DE IMC ========== \n \n \n");

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    //================PROCESSAMENTO DE DADOS=================

   imc = peso/(altura*altura);

    //===================SAIDA DE DADOS=======================

    //if
    if (imc >= 34)
        printf("IMC = %.2f (Muito obeso)", imc);
    else
        if (imc >= 30)
         printf("IMC = %.2f (Obeso)", imc);
        else
            if (imc >= 25)
              printf("IMC = %.2f (Acima do peso)", imc);
            else
                if (imc >= 20)
                    printf("IMC = %.2f (Peso normal)", imc);
                else
                    if (imc >= 0)
                        printf("IMC = %.2f (Abaixo do peso)", imc);
                    else
                        printf("defalt");

    //switch (impossivel)


}





