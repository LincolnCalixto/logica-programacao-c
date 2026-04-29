/* 6) Ler números inteiros. Prosseguir a leitura até ser informado o valor zero que não deve ser considerado nos cálculos. Informar:
a) Quantos valores positivos foram informados.
b) Quantos valores negativos e pares foram informados. Exemplo: Se a entrada for -1, -2, -3, deverá retornar 1, pois tem apenas um número negativo que é par.
c) A média dos valores divisíveis por 3 informados. Usar a funcão abs() (que pertence a biblioteca stdlib) para converter os valores negativos em positivos. Validar para não fazer divisão por zero no cálculo da média.*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int valor=1, valorp=0, valorpar=0, qtd=0, soma;
    float media;
    while (valor != 0)
    {
        printf("\nInforme um numero: ");
        scanf(" %d", &valor);
        if(valor > 0 )
        {
            valorp++;
        }
        if (valor <-1 && valor%2==0)
        {
            valorpar++;
        }
        if(valor%3==0 && valor!=0)
        {
            valor = abs(valor);
            soma= soma+ valor;
            qtd++;
        }
    }

    printf("\n\nNumeros positivos: %d", valorp);
    printf("\n\nNumeros negativos que sao pares: %d", valorpar);
    if( qtd> 0)
    {
        media = soma/qtd;
        printf("\n\nA media dos numeros divisiveis por 3 eh: %.1f", media);
    }else
    {
        printf("\n\nNao ha valores divisiveis por 3.");
    }


    return 0;
}
