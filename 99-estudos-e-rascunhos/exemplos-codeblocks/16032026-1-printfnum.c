#include <stdio.h>

int main ()
{

//float para numeros decimais


    printf("===== CALCULADORA ARITMÉTICA ======  \n \n");

    int a = 3;
    int b = 2;
    int  soma;
    int  substr;
    int  mult;
    int  div;

    soma = a + b;
    substr = a - b;
    mult = a*b;
    div = a/b;

    printf( "            Soma = %d \n \n", soma ) ;  // \n \n pula duas linhas
    printf( "            Subtração = %d \n \n", substr);
    printf( "            Multiplicação = %d \n \n", mult);
    printf( "            Divisão = %d \n \n", div);

    return 0;


}
