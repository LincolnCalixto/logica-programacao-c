/* Exercício 6 - Implemente um programa que adivinhe o "número mágico" entre 0 e 10. O programa deverá imprimir a
mensagem "Certo! %d é o número mágico" quando o jogador acerta o número mágico, a mensagem "Errado, muito
alto", caso o jogador tenha digitado um número maior que o número mágico e a mensagem "Errado, muito baixo", caso
o jogador tenha digitado um número menor que o número mágico. O número mágico é produzido usando o gerador de
números randômicos de C (função rand(), que exige o uso da biblioteca stdlib.h). */

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(void)
{
    int num, magico;

        srand(time(NULL));
        printf("\nDigite seu numero e acompanhe o sorteio: ");
        scanf("%d", &num);
        magico = (rand() % 10);
        if(magico<num)
        {
            printf("\n errado, valor muito alto");
            printf("\n O numero magico era: %d", magico);
        }
        else
        {
            if(magico>num)
            {
                printf("\n errado, valor muito baixo");
                printf("\n O numero magico era: %d", magico);
            }
            else
            {
                printf("\nCERTO!!!, %d é o numero correto", magico);
            }
        }


    return 0;
}
