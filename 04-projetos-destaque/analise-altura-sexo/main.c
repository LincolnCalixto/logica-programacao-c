/* 9) Construa um programa que leia um conjunto de dados contendo altura (que deve ser maior que 0)
 e sexo (que deve ser Masculino ou Feminino) de um grupo de pessoas. Quando fornecida uma altura igual a 0,
  é encerrada a entrada de dados. O programa deve calcular e fornecer:
a) A maior e a menor altura do grupo.
b) A média de altura das mulheres.
c) A média de altura dos homens.
d) O número de homens e o percentual que eles representam no grupo.
e) O número de mulheres e o percentual que elas representam no grupo. */

#include<stdio.h>
int main(void)
{
    float altura, mediaf, taxaf, mediam, taxam;
    int contf = 0, contm = 0, qtdf2 = 0, qtd2 = 0, qtdm2 = 0 ;
    char sexo, repetir;

    do
    {
        do
        {
            printf("\nInforme a altura: ");
            scanf("%f", &altura);
            if(altura>0)
            {
                do
                {
                    setbuf(stdin,NULL);
                    printf("informe o sexo: ");
                    scanf(" %c", &sexo);
                    if(sexo != 'm' && sexo != 'M' && sexo != 'f' && sexo != 'F')
                    {
                        printf("\nSexo errado. ");
                    }
                    if(sexo == 'f' || sexo == 'F' )
                    {

                        qtdf2 += altura;
                        contf++;
                    }
                    if(sexo == 'm' || sexo == 'M' )
                    {

                        qtdm2 += altura;
                        contm++;
                    }

                    qtd2++;

                }
                while(sexo != 'm' && sexo != 'M' && sexo != 'f' && sexo != 'F');

            }

        }
        while (altura>0);


        mediaf = (float) qtdf2/contf;
        taxaf = ((float)qtdf2/qtd2)*100;

        printf("======MULHERES======\n");
        printf("\nQuantidade: %d\nMedia de altura: %.2f\nPercentual %.2f", contf, mediaf, taxaf);

        mediam = (float)qtdm2/contm;
        taxam = ((float) qtdm2/qtd2)*100;

        printf("\n\n======HOMENS======\n");
        printf("\nQuantidade: %d\nMedia de altura: %.2f\nPercentual %.2f", contm, mediam, taxam);




        printf("\n\nDeseja continuar no programa (S ou N)? ");
        scanf(" %c", &repetir);
        if(repetir == 'n' || repetir == 'N')
        {
            printf("\nObrigado. ");
            break;
        }
    }
    while(repetir == 's' || repetir == 'S');

    return 0;
}
