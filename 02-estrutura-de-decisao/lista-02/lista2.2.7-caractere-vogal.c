/* Exercício 7 - Faça um programa que receba um caractere via teclado, transforme esse caractere em maiúsculo e
verifique se ele pertence ou não ao alfabeto (A, B, ..., Z). Com o uso da estrutura switch - case, verificar se o caractere é
uma vogal ou uma consoante.*/

#include<stdio.h>
int main(void)
{
    char letra, let, tipo;
    do
    {
      printf("\nAlgum caractere do teclado: ");
    scanf("%c", &letra);
    }while (letra <= 0);


    if(letra >= 'a' && letra <= 'z')
    {
        let = letra-32;
            switch(letra)
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("\nO caractere digitado pertence ao alfabeto e ''%c'' é uma vogal", let);
                break;
            case 'b':
            case 'c':
            case 'd':
            case 'f':
            case 'g':
            case 'h':
            case 'j':
            case 'k':
            case 'l':
            case 'm':
            case 'n':
            case 'p':
            case 'q':
            case 'r':
            case 's':
            case 't':
            case 'v':
            case 'x':
            case 'w':
            case 'y':
            case 'z':
                printf("\nO caractere digitado pertence ao alfabeto e ''%c'' é uma consoante", let);
                break;
            }

    }
    else
    {
        printf("\nO caractere %c não pertence ao alfabeto", letra);
    }
    return 0;
}
