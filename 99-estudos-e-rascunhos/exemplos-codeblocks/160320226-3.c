#include <stdio.h> //include standard input-output incluir entrada e saida  padrao, h de head = cabeça


int main (void)
{
    //declaração de váriveis

    float nota1, nota2, media;    //int é inteiro, %d decimal, %i inteiro, %f float, %lf nao sei, %c caractere

    //entrada de dados

    printf("informe a primeira nota: ");

    scanf("%f", &nota1); //& operador de endereçamento

    printf("informe a segunda nota: "); //o enter é um char

    scanf("%f", &nota2);

    //Processamento de dados


    media = (nota1 + nota2)/2;


    //saida de dados

    if ( media >= 6)
    {
        printf(" o resultado da media: %f ""aprovado", media); //float 8 casas decimais, double 15 casa decimais de precisão, double = %.1lf
    }
    else
    {
        printf(" o resultado da media: %f ""reprovado", media);
    }

    return 0;
}
