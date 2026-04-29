#include <stdio.h>

int main(void)
{
    // declaração de váriaveis
    double num, decimal;
    int parteInt, decInt, centena, dezena, unidade;

    // entrada de dados
    printf("informe um numero com 6 casas decimais ");
    scanf("%lf", &num);

    // processamento de dados
    parteInt = (int)num;
    decimal = num - parteInt;
    decInt = decimal*1000;
    centena = parteInt/100 ;
    dezena = (parteInt%100/10); // % significa mod, ou resto da divisão
    unidade = (parteInt%10);

    // saída de dados
    printf("\n Numero informado: %lf", num);
    printf("\n parte inteira: %d\n", parteInt);
    printf("\n parte decimal: %lf\n", decimal);
    printf("\n parte decimal como inteiro de três digitos: %d\n", decInt);
    printf("\n Centena(s): %d\n", centena);
    printf("\n Dezena(s): %d\n", dezena);
    printf("\n Unidade(s): %d\n", unidade);

    return(0);
}
