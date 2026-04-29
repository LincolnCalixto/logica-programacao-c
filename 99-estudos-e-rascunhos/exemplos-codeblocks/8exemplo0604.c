#include <stdio.h>

int main(void)
{
    int num = -1;


    while (num<0)
    {
        printf("Informe o valor de num: ");
        scanf("%d", &num);

        if (num<0)
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
