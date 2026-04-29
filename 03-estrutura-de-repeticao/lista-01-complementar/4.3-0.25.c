#include <stdio.h>

//3) Apresentar os números entre 0 e 4, com intervalo de 0.25 entre eles, separados por tabulação.

int main(void)
{
    float i;

    for(i = 0.0; i <= 4.0; i+=0.25)
    {
        printf("%.2f\t", i);
    }
            return 0;

}
