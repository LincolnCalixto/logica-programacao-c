/*10) Escreva um programa em C que receba três números inteiros diferentes digitados no teclado e
imprima a soma, a média, o produto, o menor e o maior desses números. A tela de diálogo deve aparecer
como se segue:*/

//====================BIBLIOTECA DAS FUNCOES ================

#include <stdio.h>
#include <math.h>

//=======================FUNÇÃO PRINCIPAL====================

int main(void)
{
    //=================DECLARAÇÃO DE VÁRIÁVEIS================
    int num1, num2, num3, soma, produto;
    float media;

    //====================ENTRADA DE DADOS====================

    printf("\n\n========== CALCULO DA SOMA PRODUTO MEDIA MENOR OU MENOR  ========== \n \n \n");

    printf("Digite o primeiro numero inteiro: ");
    scanf("%i", &num1);

    printf("\n \n digite o segundo valor inteiro: ");
    scanf("%i", &num2);

    printf("\n \n digite o terceiro valor inteiro: ");
    scanf("%i", &num3);

    //================PROCESSAMENTO DE DADOS=================

    soma = num1 + num2 + num3;
    media = (float)((num1 + num2 + num3)/3.00);
    produto = num1*num2*num3;


    //===================SAIDA DE DADOS=======================

    //if

    if ( num1 > num2 && num2 > num3)
        printf("\n\n A soma eh %d \n A media eh %.2f \n o produto eh %d \n o menor eh %d \n o maior eh %d", soma, media, produto, num3, num1);
    else
        if ( num2 > num3 && num3 > num1)
            printf("\n\n A soma eh %d \n A media eh %.2f \n o produto eh %d \n o menor eh %d \n o maior eh %d", soma, media, produto, num1, num2);
        else
            if ( num3 > num1 && num1 > num2)
                printf("\n\n A soma eh %d \n A media eh %.2f \n o produto eh %d \n o menor eh %d \n o maior eh %d", soma, media, produto, num2, num3);
            else
                if ( num1 > num3 && num3 > num2)
                    printf("\n\n A soma eh %d \n A media eh %.2f \n o produto eh %d \n o menor eh %d \n o maior eh %d", soma, media, produto, num2, num1);
                else
                    if ( num3 > num1 && num1 > num2)
                        printf("\n\n A soma eh %d \n A media eh %.2f \n o produto eh %d \n o menor eh %d \n o maior eh %d", soma, media, produto, num3, num2);
                    else
                        if ( num3 > num2 && num2 > num1)
                            printf("\n\n A soma eh %d \n A media eh %.2f \n o produto eh %d \n o menor eh %d \n o maior eh %d", soma, media, produto, num1, num3);
                        else
                            printf("dados invalidos");


    return(0);
}
