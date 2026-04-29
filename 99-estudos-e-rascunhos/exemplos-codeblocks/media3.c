#include <stdio.h>

float main(void)
{
   //=====DECLARAÇÃO DE VÁRIÁVEIS=====

   float idade1, idade2, idade3, media;

   //========ENTRADA DE DADOS=========

    printf(" digite a primeira idade:  ");
    scanf("%f", &idade1);
    printf("\n \n");

    printf(" digite a segunda idade:  ");
    scanf("%f", &idade2);
    printf("\n \n");

    printf(" digite a terceira idade:  ");
    scanf("%f", &idade3);
    printf("\n \n");

    //=====PROCESSAMENTO DE DADOS=====

    media = (idade1 + idade2 + idade3)/3;

    //========saida de dados==========

    printf("a media é:  %f \n \n", media);

    return 0;


}
