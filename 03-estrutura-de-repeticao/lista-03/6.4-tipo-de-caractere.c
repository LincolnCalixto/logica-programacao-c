/* 4) Ler caracteres e parar quando o usuário informar o caractere '0'.
 Utilizando a tabela ASCII contar quantos caracteres são letras maiúsculas,
 quantos são letras minúsculas e quantos caracteres não são letras. Sugestão:
  utilizar o código numérico para comparar (A equivale a 65, B a 66...).
Exemplo:  */

#include<stdio.h>

int main(void)
{
    char letra;
    int letram = 0, letraM = 0, outros = 0;

    while (letra != '0')
    {
        printf("\ninforme um caractere: ");
        scanf(" %c", &letra);
        if (letra>='A' && letra<='Z')
        {
            letraM++;
        }
        else if(letra>='a' && letra<='z')
        {
            letram++;
        }

        else if (letra !='0')
        {
            outros++;
        }
    }
    printf("\n %d sao letras maiusculas", letraM);
    printf("\n %d sao letras minusculas", letram);
    printf("\n %d sao caracteres", outros);

    return 0;
}
