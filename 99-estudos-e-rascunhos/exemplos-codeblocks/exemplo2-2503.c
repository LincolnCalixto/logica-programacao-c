#include <stdio.h>

int main(void)
{
    int max, a, b;

    printf("escreva um valor de: ");
    scanf("%d", &a);

    printf("escreva um valor de b: ");
    scanf("%d", &b);

    max = (a > b) ? a: b;

    printf(" valor de max: %d\n", max);

    return 0;

}
