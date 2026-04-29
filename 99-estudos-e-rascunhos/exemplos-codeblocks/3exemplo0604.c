#include <stdio.h>
//tabuada
int main(void)
{
    int  i, num;
    printf("informe um numero: ");
    scanf("%d", &num);

    for (i = 1 ; i <= 10 ; i++)
    //for (i = 0 ; i <= 10 ; i+=2) // se i = 0 printa par, i =1  printa impar
    {
     printf("%d * %d = %d\n",num, i, num*i); // se colocar t no lugar d ele tabula, clica tab a cada print
    }
    return 0;

}
