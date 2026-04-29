#include <stdio.h> //include standard input-output incluir entrada e saida  padrao, h de head = cabeça


int main (void)
{
    //declaração de váriveis

    int num1, num2, soma, sub, mult, div;    //int é inteiro, %d decimal, %i inteiro, %f float, %lf nao sei, %c caractere

    //entrada de dados

    printf("informe o primeiro número: ");

    scanf("%d", &num1); //& operador de endereçamento

        printf("informe o primeiro número: ");

    scanf("%d", &num2);

    //Processamento de dados

    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    //saida de dados

    printf(" o resultado da soma: %d ", soma);
    printf(" o resultado da sub: %d ", sub);
    printf(" o resultado da mult: %d ", mult);
    printf(" o resultado da div: %d ", div);
    return 0;
}
