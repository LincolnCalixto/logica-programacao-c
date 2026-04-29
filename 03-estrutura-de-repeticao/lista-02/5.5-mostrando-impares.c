/* 5) Ler um número que indica a quantidade de ímpares (iniciando em 1) que deve ser mostrada. O valor
informado para a quantidade deve ser maior que 0. Validar a entrada.*/

#include<stdio.h>

int main(void)
{
    int i, num, valor;
    printf("Quantos numeros impares quer mostrar: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        valor = 2*i-1;
        printf("\n%d\t",valor);
    }
    return 0;
}
