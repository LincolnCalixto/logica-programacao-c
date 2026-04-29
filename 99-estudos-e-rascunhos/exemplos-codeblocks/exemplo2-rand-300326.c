#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (void)
{
    int num;

    srand (time(NULL));

    num = rand()%10;

    printf("\n\nvalor de num: %d\n\n", num);

    num = rand()%100 +1;
    printf("\n\nvalor de num: %d\n\n", num);

    num = rand ()% 10 + 1;
    printf("\n\nvalor de num: %d\n\n", num);

    num = rand();
    printf("\n\nvalor de num: %d\n\n", num);

    return 0;
}
