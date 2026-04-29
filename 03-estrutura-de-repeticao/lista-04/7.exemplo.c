/* exemplo 2204*/

#include<stdio.h>

int main(void)
{
    int num, i, contdiv = 0;

    printf("Informe um valor: ");
    scanf("%d", &num);

    for(i=0; i<=num; i++)
    {
        if(num%i==0)
        {
            contdiv++;
            if(contdiv>=3);
            {
                break;
            }
        }
    }
    if(contdiv == 2)
    {
        printf("%d eh primo\n", num);
    }
    else
    {
        printf("%d nao eh primo", num);
    }

    return 0;
}
