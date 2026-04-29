#include<stdio.h>

int main (void)
{
    int num1, num2;
    char opcao;
    printf("Informe o primeiro valor: ");
    scanf("%d", &num1);

    printf("Informe o segundo valor: ");
    scanf("%d", &num2);

    printf("A - soma\n");
    printf("B - subtracao\n");
    printf("C - multiplicação\n");
    printf("D - divisao\n");
    printf("Escolha uma opção: ");
    scanf(" %c", &opcao);

    switch (opcao)
    {
        case 'A':
        case 'a':

            printf("%d + %d = %d\n,", num1, num2, num1+num2);
            break;
        case 'B':
        case 'b':
            printf("%d - %d = %d\n,", num1, num2, num1-num2);
            break;
        case 'C':
        case 'c':
            printf("%d * %d = %d\n,", num1, num2, num1*num2);
            break;
        case 'D':
        case 'd':
            printf("%d + %d = %d\n,", num1, num2, num1/num2);
            break;
        default:
            printf("opcao invaida\n");
    }


    printf("continua.....\n");
    return 0 ;
}
