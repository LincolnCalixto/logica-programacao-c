#include <stdio.h>

int main(void)
{
    int  i=0, num;
    printf("informe um numero: ");
    scanf("%d", &num);

    while (i<= 10)
    {
        printf("%d *%d = %d\n", num, i, num*i);
        i++;

    }

    return 0;

}
