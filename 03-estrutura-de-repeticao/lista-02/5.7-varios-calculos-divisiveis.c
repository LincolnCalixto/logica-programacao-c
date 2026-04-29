/* 7) Em um intervalo de 1 a 100, apresentar:
a) Os números divisíveis por 3.
b) O quadrado dos números divisíveis por 3.
c) Os números divisíveis por 5 ou por 7.
d) A raiz quadrada dos números divisíveis por 5 ou por 7.
Apresentar cada item em listagem separada. Colocar um cabeçalho antes de cada listagem de maneira a
identificar o conteúdo da mesma. Em cada listagem separar os números por uma tabulação. A raiz quadrada
pode ser obtida pela função sqrt() que está na biblioteca math.h */

#include<stdio.h>
#include<math.h>

int main(void)
{
    int i;
    double raiz;
    printf("\n==========Numeros divisiveis por 3==========\n\n");
    for (i=1; i<=100; i++)
    {
        if(i%3==0)
        {
            printf(" %d\t", i);
        }
    }
    printf("\n\n==========Quadrado dos numeros divisiveis por 3==========\n\n");
    for (i=1; i<=100; i++)
    {
        if(i%3==0)
        {
            printf(" %d\t", i*i);
        }
    }
    printf("\n\n==========Divisiveis por 7 ou 9==========\n\n");
    for (i=1; i<=100; i++)
    {
        if(i%5==0 || i%7==0)
        {
            printf(" %d\t", i);
        }
    }
    printf("\n\n==========Raiz quadrada dos Divisiveis por 7 ou 9==========\n\n");
    for (i=1; i<=100; i++)
    {
        if(i%5==0 || i%7==0)
        {
            raiz = sqrt(i);
            printf(" %.2f\t", raiz);
        }
    }

    return 0;
}


