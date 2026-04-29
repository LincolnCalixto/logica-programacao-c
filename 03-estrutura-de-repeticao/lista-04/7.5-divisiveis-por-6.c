/* 5) Apresentar os n primeiros números pares e divisíveis por 3 informados pelo usuário (validar para que n seja diferente de 0).
 Se o usuário informar um número negativo, antes de utilizá-lo, transformá-lo em número positivo (sem usar funções prontas). */

#include<stdio.h>

int main(void)
{
    int num, i,j, soma = 0, modulo = 0;
    char repetir;

    do
    {
        do
        {
            printf("\nQuantos numeros pares divisiveis por tres quer mostrar? ");
            setbuf(stdin,NULL);
            scanf(" %d", &num);

            if(num==0)
                printf("Erro!!! Digitar valor diferente de 0");
        }
        while (num==0);
        if(num<0)
        {
            num = num*(-1);
        }

            for(i=0; i<num; i++)
            {
                soma=i*6;
                printf("\t%d",  soma);
            }

    do
    {
        printf("\nDeseja continuar (S ou N)? ");
        setbuf(stdin,NULL);
        scanf(" %c", &repetir);
        if(repetir != 'n' && repetir != 'N' && repetir != 's' && repetir != 'S')
        {
            printf("\nOpcao invalida");
        }
    }
    while(repetir != 'n' && repetir != 'N' && repetir != 's' && repetir != 'S');
}

while(repetir =='s' || repetir == 'S');
return 0;

}
