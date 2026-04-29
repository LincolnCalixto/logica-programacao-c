#include <stdio.h>

int main(void)
{
    int num;


    while (num<1000 || num >9999)
    {
        printf("Informe o valor de num: ");
        scanf("%d", &num);

        if (num<1000 || num >9999)
        {
            printf("valor invalido\n");
        }
        else
        {
            printf("ok");
        }

    }

    return 0;

}
