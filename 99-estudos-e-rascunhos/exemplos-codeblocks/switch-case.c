#include <stdio.h>

int main(void)
{
    int num1, num2, opcao;

    printf("1 para somar\n");
    printf("2 para subtrair\n");
    printf("3 para multiplicar\n");
    printf("4 para dividir\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if(opcao >= 1 && opcao <= 4)
    {
        printf("\nInforme o primeiro valor: ");
        scanf("%d", &num1);
        printf("Informe o segundo valor: ");
        scanf("%d", &num2);
    }

    switch(opcao)
    {
        case 1:
            printf("%d + %d = %d\n", num1, num2, num1+num2);
            break;
        case 2:
            printf("%d - %d = %d\n", num1, num2, num1-num2);
            break;
        case 3:
            printf("%d * %d = %d\n", num1, num2, num1*num2);
            break;
        case 4:
            if(num2 != 0)
            {
                printf("%d / %d = %d\n", num1, num2, num1/num2);
            }
            else
            {
                printf("Nao eh possivel dividir por zero\n");
            }
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}
