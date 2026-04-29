#include <stdio.h>
/*
6) Leia dois valores A e B e efetue a troca do conteúdo das duas variáveis lidas, de forma que a variável A
passe a ter o valor de B e a variável B o valor de A. Mostre o conteúdo das variáveis antes e depois da troca.
*/

int main(void)
{
   //=====DECLARAÇÃO DE VÁRIÁVEIS=====

   int A , B , aux ;

   //========ENTRADA DE DADOS=========

   printf("========== TROCA DE VALORES ========== \n \n \n");

    printf(" informe o valor de A: ");
    scanf("%d", &A);
    printf("\n \n");

    printf(" informe o valor de B:");
    scanf("%d", &B);
    printf("\n \n");

    printf("\n Antes da troca: A = %d , B = %d \n \n ", A , B );

    //=====PROCESSAMENTO DE DADOS=====

    aux = A;

    A = B;

    B = aux ;


    //========saida de dados==========


    printf(" Depois da troca: A = %d , B = %d\n \n", A , B );
    return 0;


}
