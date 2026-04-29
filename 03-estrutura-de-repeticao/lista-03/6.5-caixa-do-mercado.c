/* 5) Elaborar um programa para automatizar o caixa de uma loja.
 Ler a quantidade e o valor unitário de cada produto.
 Calcular o valor total da compra. Informar esse valor para o usuário
  e o usuário informa o valor para pagamento. O programa calcula o troco
   e informa-o ao usuário em notas de 10, 5, 1 e os centavos. Prosseguir
   a leitura enquanto a quantidade for maior que zero. Se informado zero
    ou valor negativo para a quantidade, não ler o valor unitário.*/

#include<stdio.h>
#include<math.h>
int main(void)
{
    int qtd = 1, inteiro,  real1, real5, real10;
    float valor, total=0, pago, troco, centavos;
    printf("informe quantidade menor que 0 para calcular o total\n\n");

    while (qtd > 0)
    {
        printf("\nInforme a quantidade de um produto: ");
        scanf(" %d", &qtd);

        if(qtd>0)
        {
            printf("\nInforme o valor unitario do produto: R$ ");
            scanf(" %f", &valor);
        }
        else
        {
            break;
        }

        total += qtd*valor;
    }

    printf("\nTOTAL DA COMPRA: R$ %.2f", total);
    printf("\n\nInforme o valor pago pela cliente: ");
    scanf(" %f", &pago);
    troco  = pago - total;
    printf("TROCO:R$ %.2f", troco);

    inteiro = (int)troco;
    centavos = troco - ((int)troco);

    real10 = inteiro / 10;
    inteiro = inteiro % 10;

    real5 = inteiro / 5;
    inteiro = inteiro % 5;

    real1 = inteiro / 1;

    printf("\nO valor sera devolvido com:\n");
    printf("%d notas de 10 reais\n", real10);
    printf("%d notas de 5 reais\n", real5);
    printf("%d notas de 1 real\n", real1);
    printf("e %.2f centavos\n", centavos);





    return 0;
}
