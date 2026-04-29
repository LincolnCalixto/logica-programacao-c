#include <stdio.h>
/*
7) Resolva as seguintes expressões matemáticas. X e Y são valores fornecidos pelo usuário. Calcule e
mostre o resultado de cada expressão. Reutilize variáveis, ou seja, terá apenas uma variável para armazenar
os resultados do tipo int e outra para armazenar o resultado do tipo float. Faz a primeira operação e já
imprime o resultado e assim para todas as demais operações. Atenção para os resultados que podem ser
valores float e para a prioridade dos operadores.
*/

float main(void)
{
   //=====DECLARAÇÃO DE VÁRIÁVEIS=====

   float x, y, a , b, c , d ;
   int e1 , e2 , e3;

   //========ENTRADA DE DADOS=========

   printf("========== CALCULADORA DAS FUNÇÕES  ========== \n \n \n");

    printf(" informe o valor de x: ");
    scanf("%f", &x);
    printf("\n \n");

    printf(" informe o valor de y:");
    scanf("%f", &y);
    printf("\n \n");


    //=====PROCESSAMENTO DE DADOS=====

    a = ((x*x*x)/y) + (x*x);

    b = (x + y)/ (x-y);

    c = ((x*x)+(y*y*y))/2 ;

    d = x ;

    e1 =  (x-(x/y));

    e2 =  (x - (x/3));

    e3 = (y-(y/5));


    //========saida de dados==========


    printf(" a) %f \n\n" , a);
    printf(" b)  %f \n\n", b);
    printf(" c)  %f \n\n", c);
    printf(" d) %f \n\n", d);
    printf(" e1) %i \n\n", e1);
    printf(" e2) %i \n\n", e2);
    printf(" e3) %i \n\n", e3);
    return 0;


}
