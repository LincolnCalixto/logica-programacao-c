#include <stdio.h>

int main(void)
{
   //=====DECLARAÇÃO DE VÁRIÁVEIS=====

   int dividendo, divisor;
   int quociente ,  resto;

   //========ENTRADA DE DADOS=========

    printf(" digite o dividendo:  ");
    scanf("%i", &dividendo);
    printf("\n \n");

    printf(" digite o divisor:  ");
    scanf("%i", &divisor);
    printf("\n \n");


    //=====PROCESSAMENTO DE DADOS=====

    quociente = dividendo/divisor;
    resto = dividendo - (quociente*divisor);

    //========saida de dados==========

    printf("o valor do quociente é:  %i \n \n", quociente);
    printf("o valor do resto é: %i:  \n\n" , resto);

    return 0;


}
