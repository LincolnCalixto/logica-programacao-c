/* 2) Ler um número positivo, validar a entrada repetindo a leitura até que seja informado um número que atende essa condição.
 Esse número representa a quantidade de números ímpares a serem mostrados.
  Apresentar esses valores n por linha, sendo n um número maior que zero, informado pelo usuário.
 Os valores são apresentados separados por tabulação. Fazer a média dos números ímpares mostrados. */

#include<stdio.h>

int main(void)
{

    int i, num, impar, soma, linhas, cont;
    float media;
    char repete;
    do
    {
        soma = 0;
        cont = 0;
        do
        {
            printf("Informe o numero de impares que deseja mostrar: ");
            scanf("%d", &num);
            if(num<=0)
            {
                printf("Valor invalido.");
            }
        }
        while(num<= 0);
        do
        {
            printf("\nQuantos impares por linha deseja mostrar: ");
            scanf("%d", &linhas);
            if(linhas<=0)
            {
                printf("Valor invalido.");
            }
        }
        while(linhas<= 0);
        for(i = 1; cont<num; i+=2)
        {
            printf("%d   ", i);
            cont++;
            soma +=i;
            if(cont%linhas==0)
            {
                printf("\n");
            }

        }
        media = (float)soma/cont;
        printf("\n\nA media dos impares eh: %.2f ", media);
        printf("\n\nDeseja continuar (S ou s)? ");
        setbuf(stdin, NULL);
        scanf("%c", &repete);

    }
    while (repete == 's' || repete =='S');

    return 0;
}

/* para o terceiro usar for i=1; i<= 6; i++)
     {
         for(j=1; j<=6; j++)
     }
     */
