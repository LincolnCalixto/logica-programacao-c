/* 1) Ler um número positivo, validar a entrada repetindo a leitura até que seja informado um
número que atende a essa condição. Esse número representa a quantidade de números primos
a serem mostrados.*/


#include<stdio.h>

int main(void)
{
    int i, j, contdiv, contprimos, num;
    char repete;

    do
    {
        i=2;
        contprimos = 0;

        do
        {
            printf("digite um valor: ");
            scanf("%d", &num);

            if(num<=0)
            {
                printf("valor invalido.\n");
            }
        }
        while(num<=0);

        do
        {
            contdiv = 0;
            for(j=1; j<=i; j++)
            {
                if(i%j==0)
                {
                    contdiv++;
                    if(contdiv>=3)
                    {
                        break;
                    }
                }
            }
            if(contdiv == 2)
            {
                printf("%d   ", i);
                contprimos++;
            }
            i++;
        }
        while(contprimos<num);

        printf("\ndeseja repetir o programa (S/s)?");
        setbuf(stdin, NULL);
        scanf("%c", &repete);
    }while(repete == 'S' || repete == 's');

    return 0;
}

