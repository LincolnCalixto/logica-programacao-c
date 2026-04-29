#include <stdio.h>

int main(void)
{
   //=====DECLARAÇÃO DE VÁRIÁVEIS=====

   float dividendo, divisor;
   float quociente;

   //========ENTRADA DE DADOS=========

    printf(" digite o dividendo:  ");
    scanf("%i", &dividendo);
    printf("\n \n");

    printf(" digite o divisor:  ");
    scanf("%i", &divisor);
    printf("\n \n");

    //=====PROCESSAMENTO DE DADOS=====

    quociente = dividendo/divisor;

    //========saida de dados==========

    printf("o valor do quociente é:  %f \n \n", quociente);

    return 0;


}
