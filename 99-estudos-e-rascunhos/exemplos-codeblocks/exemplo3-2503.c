#include<stdio.h>

int main (void)
{
    int num1, num2, opcao;
    printf("Informe o primeiro valor: ");
    scanf("%d", &num1);

    printf("Informe o segundo valor: ");
    scanf("%d", &num2);

    printf("1 - soma\n");
    printf("2 - subtracao\n");
    printf("3 - multiplicação\n");
    printf("4 - divisao\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            printf("%d + %d = %d\n,", num1, num2, num1+num2);
            break;
        case 2:
            printf("%d - %d = %d\n,", num1, num2, num1-num2);
            break;
        case 3:
            printf("%d * %d = %d\n,", num1, num2, num1*num2);
            break;
        case 4:
            printf("%d + %d = %d\n,", num1, num2, num1/num2);
            break;
        default:
            printf("opcao invaida\n")
    }


    printf("continua.....\n");
    return 0 ;
}
