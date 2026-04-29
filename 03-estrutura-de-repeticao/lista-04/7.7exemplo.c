/* fatorial*/
#include<stdio.h>

int main(void)
{
    int i, fat, j;
    for(i=1; i<= 12; i++)
    {
        printf("\n%d! = ", i);
        fat = 1; //reinicializar com 1
        for(j=i; j>=2; j--)
        {
            printf("%d * ", j);
            fat=fat*j;
        }
        printf("1 = %d", fat);
    }
    printf("\n");
    return 0;
}
