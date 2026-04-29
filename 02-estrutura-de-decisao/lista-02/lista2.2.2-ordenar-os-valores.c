/* 2 - Ler três valores inteiros diferentes e colocá-los em ordem crescente. Os valores devem ser apresentados
com uma instrução:

printf("Menor: %d\n Meio: %d\n Maior: %d\n", menor, meio, maior);

Sugestão: Dividir o problema em partes: encontrar o maior, o menor e o do meio separadamente. Armazenar os valores
em variável e mostrá-los com uma única instrução.*/

//====================BIBLIOTECA DAS FUNCOES ================

#include <stdio.h>
#include <math.h>

//=======================FUNÇÃO PRINCIPAL====================

int main(void)
{
    //=================DECLARAÇÃO DE VÁRIÁVEIS================
    int num1, num2, num3;

    //====================ENTRADA DE DADOS====================

    printf("\n\n========== CALCULO DA ORDEM DE VALORES  ========== \n \n \n");

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo inteiro: ");
    scanf("%d", &num2);

    printf("Digite o terceiro inteiro: ");
    scanf("%d", &num3);
    //================PROCESSAMENTO DE DADOS=================


    //===================SAIDA DE DADOS=======================

    //if
    if ( num1 > num2 && num2 > num3)
        printf("\n\n menor: %d, meio: %d, maior: %d", num3, num2, num1);
    else
        if ( num2 > num3 && num3 > num1)
            printf("\n\n menor: %d, meio: %d, maior: %d", num1, num3, num2);
        else
            if ( num3 > num1 && num1 > num2)
                printf("\n\n menor: %d, meio: %d, maior: %d", num2, num1, num3);
            else
                if ( num1 > num3 && num3 > num2)
                    printf("\n\n menor: %d, meio: %d, maior: %d", num2, num3, num1);
                else
                    if ( num3 > num1 && num1 > num2)
                        printf("\n\n menor: %d, meio: %d, maior: %d", num2, num1, num3);
                    else
                        if ( num3 > num2 && num2 > num1)
                            printf("\n\n menor: %d, meio: %d, maior: %d", num1, num2, num3);
                        else
                            if ( num2 > num1 && num1 > num3)
                                printf("\n\n menor: %d, meio: %d, maior: %d", num3, num1, num2);
                            else
                                printf("dados invalidos");

    return(0);
}
