#include <stdio.h> //include standard input-output incluir entrada e saida  padrao, h de head = cabeça


int main (void)
{
    //declaração de váriveis

    int num1, num2, soma, sub, mult, div;    //int é inteiro, %d decimal, %i inteiro, %f float, %lf nao sei, %c caractere

    //entrada de dados

    printf("informe o primeiro número: ");

    scanf("%d", &num1); //& operador de endereçamento

    printf( "\n");

        printf("informe o segundo número:");

    scanf("%d", &num2);

    printf( "\n");

    //Processamento de dados

    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    //saida de dados

    printf(" o resultado da soma: %d  \n \n", soma);
    printf(" o resultado da sub: %d  \n \n", sub);
printf(" o resultado da mult: %d  \n \n", mult);
    printf(" o resultado da div: %d  \n \n", div);
    return 0;
}
