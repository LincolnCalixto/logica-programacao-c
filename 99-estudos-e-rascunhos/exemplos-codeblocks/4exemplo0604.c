#include <stdio.h>
//se par ou impar
int main(void)
{
    int  i, num;
    for (i=1; i<=5; i++)
    {
        printf("informe um numero: ");
        scanf("%d", &num);

        if (num%2 == 0)
        //for (i = 0 ; i <= 10 ; i+=2) // se i = 0 printa par, i =1  printa impar
        {
            printf("%d eh par\n", num);
        }
        else{
            printf("%d eh impar\n", num);
        }
    }
    return 0;

}
