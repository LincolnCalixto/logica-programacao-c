#include <stdio.h>

int main(void)
{
    int x, y, maior;

    /*//Operador ?:
    É tipicamente usado para fazer atribuições condicionais

    //Forma Geral
    variável = condição ? expressão1 : expressão2;
    */
    //Exemplo 1
    printf("Digite x: ");
    scanf("%d", &x);
    printf("Digite y: ");
    scanf("%d", &y);

    //condição ? instrução1 : instrução2;

    maior = x > y ? x : y;
    printf("Maior = %d\n", maior);

    //Exemplo 2
    x > y ? printf("Maior = %d\n", x) : printf("Maior = %d\n", y);

    return 0;
}
