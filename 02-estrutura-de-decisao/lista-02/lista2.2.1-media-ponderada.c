/*Exercício 1 - Faça um programa que leia três notas de um aluno e calcule a média ponderada, com os pesos 1, 3 e 4,
respectivamente, e:

a) Se a média obtida está entre 6 a 10 informar que o aluno está aprovado;

b) Se a média obtida está entre 4 e 5,9 informar que o aluno está em recuperação. Nesse caso, ler a nota de
recuperação e calcular a média final (que é a média aritmética entre a média anual e a nota de recuperação);

b.1) Se a média final é menor que 6, informar que o aluno está reprovado após recuperação;

b.2) Se é igual ou maior que 6, informar que o aluno está aprovado após recuperação;

c) Se a média obtida é menor que 4 informar que o aluno está reprovado antes da recuperação.*/

//====================BIBLIOTECA DAS FUNCOES ================

#include <stdio.h>
#include <math.h>

//=======================FUNÇÃO PRINCIPAL====================

int main(void)
{
    //=================DECLARAÇÃO DE VÁRIÁVEIS================

    float nota1, nota2, nota3, nota4, ponderada, recuperacao ;


    //====================ENTRADA DE DADOS====================

    printf("\n\n========== CALCULO DA MEDIA PONDERADA  ========== \n \n \n");

    printf("Digite o valor da primeira nota: ");
    scanf("%f", &nota1);

    printf("\n \n digite o valor da segunda nota: ");
    scanf("%f", &nota2);

    printf("\n \n digite o valor da terceira nota: ");
    scanf("%f", &nota3);

    //================PROCESSAMENTO DE DADOS=================

    ponderada = ((nota1 + 3*nota2 + 4*nota3)/8);



    //===================SAIDA DE DADOS=======================

    //if

    if ( ponderada <= 10 && ponderada >=6 )
    {
        printf("\n\n media: %.1f \n Aluno Aprovado", ponderada);
    }
    else
    {
        if ( ponderada < 4 && ponderada >= 0 )
        {
            printf("\n\n media: %.1f \n Aluno Reprovado", ponderada);
        }
        else
        {
            if ( ponderada < 6 && ponderada >= 4)
            {
                printf("\n\n media: %.1f \n Aluno em Recuperacao. \n\n Digite o valor da nota da recuperacao: ", ponderada);
                scanf("%f", &nota4);
                recuperacao = ((ponderada + nota4)/2);


                if (recuperacao <= 10 && recuperacao >= 6)
                {
                    printf("\n\n nova média: %.1f, aluno aprovado apos recuperação", recuperacao);
                }
                else
                {
                    if (recuperacao < 6 && recuperacao >= 0)
                    {
                        printf("\n\n nova média: %.1f, aluno reprovado apos recuperação", recuperacao);
                    }
                    else
                        printf("dados invalidos");
                }
            }
        }

    }
    return(0);
}
