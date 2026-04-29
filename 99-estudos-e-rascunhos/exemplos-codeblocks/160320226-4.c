#include <stdio.h> //include standard input-output incluir entrada e saida  padrao, h de head = cabeça


int main (void)
{
    //declaração de váriveis

    char ch1, ch2;   //int é inteiro, %d decimal, %i inteiro, %f float, %lf nao sei, %c caractere

    //entrada de dados


    printf("informe a primeira caractere: ");

    scanf("%c", &ch1); //& operador de endereçamento


    setbuf(stdin,NULL);


    printf("informe o segundo caractere: "); //o enter é um char

    scanf("%c", &ch2);

    //Processamento de dados


    //saida de dados

    printf(" o resultado : %c/n", ch1);

    printf(" o resultado : %c", ch2);
//mandar email para a prof analisar o código.

    return 0;
}
