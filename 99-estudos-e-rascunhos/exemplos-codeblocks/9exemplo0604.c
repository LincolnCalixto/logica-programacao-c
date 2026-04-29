#include <stdio.h>

int main(void)
{
    int num;

    do
    {
      printf("Informe o valor de num com 4 digitos: ");
      scanf("%d", &num);

        if (num<1000 || num > 9999)
        {
            printf("valor invalido\n");
        }


    }while (num<1000 || num > 9999);

    return 0;

}
