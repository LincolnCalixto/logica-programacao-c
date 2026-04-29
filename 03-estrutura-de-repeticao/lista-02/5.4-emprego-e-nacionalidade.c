/* 4) Fazer um programa que faça o levantamento dos candidatos que se inscreveram para vagas em uma
empresa. Considerando que para cada candidato, a empresa tenha obtido as seguintes informações:
- Idade
- Nacionalidade (B - Brasileiro ou E - Estrangeiro)
- Possui curso superior (S - Sim ou N - Não)
Determinar:
a) A quantidade de brasileiros.
b) A quantidade de estrangeiros.c) A idade média dos brasileiros sem curso superior.
d) A menor idade entre os estrangeiros com curso superior.
Estabelecer uma condição para finalizar a entrada de dados do programa. Por exemplo, igual a 0 ou idade
negativa. Se a idade for igual a 0 ou negativa, não ler as informações de nacionalidade e se possui curso
superior, e sair do programa.*/

#include <stdio.h>

int main(void)
{
    int idade, brasileiros = 0, estrangeiros = 0, soma_idades_bras_sem_sup = 0, qtd_bras_sem_sup = 0, menor_estrang_sup = 0, tem_estrang_sup = 0;
    char nacionalidade, superior;
    float media;

    do
    {
        printf("\nInforme a idade: ");
        scanf("%d", &idade);

        if (idade > 0)
        {
            do
            {
                printf("Informe a nacionalidade (B para Brasileiro ou E para estrangeiro): ");
                scanf(" %c", &nacionalidade);

                if (nacionalidade != 'b' && nacionalidade != 'B' &&
                        nacionalidade != 'e' && nacionalidade != 'E')
                {
                    printf("Nacionalidade invalida.\n");
                }

            }
            while (nacionalidade != 'b' && nacionalidade != 'B' &&
                    nacionalidade != 'e' && nacionalidade != 'E');

            do
            {
                printf("Possui curso superior (S para sim ou N para nao)? ");
                scanf(" %c", &superior);

                if (superior != 's' && superior != 'S' &&
                        superior != 'n' && superior != 'N')
                {
                    printf("Resposta invalida.\n");
                }

            }
            while (superior != 's' && superior != 'S' &&
                    superior != 'n' && superior != 'N');

            if (nacionalidade == 'b' || nacionalidade == 'B')
            {
                brasileiros++;

                if (superior == 'n' || superior == 'N')
                {
                    soma_idades_bras_sem_sup += idade;
                    qtd_bras_sem_sup++;
                }
            }
            else
            {
                estrangeiros++;

                if (superior == 's' || superior == 'S')
                {
                    if (tem_estrang_sup == 0 || idade < menor_estrang_sup)
                    {
                        menor_estrang_sup = idade;
                        tem_estrang_sup = 1;
                    }
                }
            }
        }

    }
    while (idade > 0);

    printf("\nQuantidade de brasileiros: %d", brasileiros);
    printf("\nQuantidade de estrangeiros: %d", estrangeiros);

    if (qtd_bras_sem_sup > 0)
    {
        media = (float)soma_idades_bras_sem_sup / qtd_bras_sem_sup;
        printf("\nIdade media dos brasileiros sem curso superior: %.2f", media);
    }
    else
    {
        printf("\nNao ha brasileiros sem curso superior para calcular a media.");
    }

    if (tem_estrang_sup)
    {
        printf("\nMenor idade entre os estrangeiros com curso superior: %d", menor_estrang_sup);
    }
    else
    {
        printf("\nNao ha estrangeiros com curso superior cadastrados.");
    }

    return 0;
}
