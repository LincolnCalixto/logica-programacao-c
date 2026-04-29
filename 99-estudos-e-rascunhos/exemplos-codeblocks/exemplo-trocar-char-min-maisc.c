#include<stdio.h>
//funcao principal
int main (void)
    {

//declaracao de variaveis
        char letra;
        printf("iinforme uma letra qlqr");
        scanf("%c", &letra);

//converter maisculo para minusculo
        if(letra >= 'A' && letra < 'Z')
        {
            letra = letra +32; // se for de minusculo para maiusculo faz menos 32
            printf("letra: %c", letra);
        }
        else
        {
            if (letra >= 'a' && letra < 'z')
                letra = letra -32;
                printf("letra: %c", letra);
        }

        return 0;
    }
