/* 8) Fazer um programa para mostrar os divisores, calcular a quantidade deles e mostrar essa quantidade
para os números compreendidos entre o valor ‘x’ (informado pelo usuário) e ‘x+10’, inclusive. Validar a entrada,
 o usuário deverá fornecer um número positivo entre 2 e 100. Ao final, mostrar a maior quantidade de divisores. */

#include<stdio.h>
int main(void)
{
    int num, i, j, contdiv, maior;
    char repetir;
    do
    {
        setbuf(stdin,NULL);
        printf("\nInforme um valor entre 2 e 100: ");
        scanf("%d", &num);

        maior = 0;
        for(i=2; i<=(num+10); i++)
        {
            contdiv = 0;

            printf("\n%d ==> ", i);
            for(j=1; j<=i; j++)
            {
                if(i%j==0)
                {

                    printf(" %d, ", j);
                    contdiv++;

                }

            }
            printf(", %d divisores. ", contdiv);
            if(contdiv>maior)
            {
                maior = contdiv;
            }


        }printf("\nA maior quantidade de divisores eh: %d\n", maior);

        do
        {
            printf("\ndeseja continuar no programa? (S ou N)? ");
            setbuf(stdin,NULL);
            scanf("%c", &repetir);
            if(repetir == 'n' || repetir == 'N')
            {
                printf("\nObrigado");
            }
        }
        while (repetir != 'n' && repetir != 'N'&& repetir != 's' && repetir != 'S');

    }
    while(repetir == 's' || repetir == 'S');




    return 0;
}
