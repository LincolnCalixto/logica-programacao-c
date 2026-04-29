/*10) Faça um programa que apresente uma tabela de lucro esperado, em decorrência do número de pessoas
e valor do ingresso. O valor do ingresso vai de R$ 15,00 até R$ 20,00 aumentando de R$ 0,50 centavos. É
informada a quantidade de pessoas.*/


#include <stdio.h>

int main(void)
{

    int pessoas;
    float i, total;

    printf("Informe a quantidade de pessoas: ");
    scanf("%d", &pessoas);

    printf("\nVALOR DO INGRESSO\tVALOR TOTAL RECEBIDO\n");

    for (i = 15.0; i <= 20.0; i += 0.5)
    {
        total = pessoas * i;
        printf("R$ %.2f\t\t\tR$ %.2f\n", i, total);
    }

    return 0;
}
