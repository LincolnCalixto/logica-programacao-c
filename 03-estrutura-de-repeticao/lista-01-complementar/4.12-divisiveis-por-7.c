/*12) Leia 10 números e desses contar quantos são pares, quantos são ímpares e quantos são
divisíveis por 7. Apresente essas quantidades.*/

#include <stdio.h>

int main (void)
{
    int i, num, somapar=0, somaimpar = 0, sete=0;
    {
        for( i=1; i<=10; i++ )
        {

            printf("\n%d digite um numero qualquer:", i);
            scanf("%d",&num);
            if(i>=1 && i<=10)
            {
                if(num%2==0)
                {
                    somapar++;
                }
                if (num%2!=0)
                {
                    somaimpar++;
                }
                if (num%7==0 && num!=0)
                {
                    sete++;
                }
            }
        }
    }
    printf("\nExistem %d numeros pares.", somapar);
    printf("\nExistem %d numeros impares.", somaimpar);
    printf("\nExistem %d numeros divisiveis por 7.", sete);
    return 0;
}
