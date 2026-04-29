/*7) Fazer um programa para ler o salário de uma pessoa, o percentual de aumento e o percentual de
descontos. Os descontos incidem sobre o salário com aumento. Calcular o novo salário e mostrá-lo como no
exemplo a seguir.
Observações:

a) Orientar o usuário na forma como deve ser informado o percentual (por exemplo, 10 para 10% ou 0.1 para
10%), ou seja, como o programa espera que o valor seja informado. Isso é importante para definir o cálculo a
ser utilizado;


b) Cálculos de percentual podem ser realizados por meio de regras de três simples.*/

//====================BIBLIOTECA DAS FUNCOES ================

#include <stdio.h>
#include <math.h>

//=======================FUNÇÃO PRINCIPAL====================

int main(void)
{
    //=================DECLARAÇÃO DE VÁRIÁVEIS================
    double salario, tx_aum, tx_desc, aumento, desconto;
    int desc1, cent1;

    //====================ENTRADA DE DADOS====================

    printf("========== CALCULO DE REAJUSTE SALARIAL 2.0  ========== \n \n \n");

    printf("informe o Valor do salario: R$ ");
    scanf("%lf", &salario);

    printf("\n\n informe o percentual de aumento (ex 10 para 10%%: ");
    scanf("%lf", &tx_aum);

    printf("\n\n informe o percentual de desconto (ex 5 para 5%%: ");
    scanf("%lf", &tx_desc);
    //================PROCESSAMENTO DE DADOS=================

    aumento = salario*(1+(tx_aum/100));
    desconto = aumento*(1-(tx_desc/100));

    desc1 = (int) desconto;
    cent1 = round ((desconto - desc1)*100);
    //===================SAIDA DE DADOS=======================

    printf("\n\n salario aumentado: R$ %.2f", aumento);
    printf("\n salario liquido: R$ %.2f", desconto);

    printf("\n\n O salario liquido sera %d reais e %d centavos", desc1, cent1);

    return(0);
}
