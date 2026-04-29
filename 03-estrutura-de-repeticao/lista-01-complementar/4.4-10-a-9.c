# include <stdio.h>

//4) Apresentar os números entre 10 e 0, ou seja, em ordem decrescente, separados por tabulação.

int main(void)
{
    int i;

    for (i = 10 ; i >= 0; i--)
    {
        printf("%d\t", i);
    }
    return 0;
}
