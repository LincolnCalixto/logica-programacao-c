/* 15) Uma indústria fabrica roupas categorizadas em masculinas, femininas e infantis. Ler a
quantidade e a respectiva categoria (M, F ou I). Após o loop, calcular e mostrar o percentual de
produtos por categoria. Validar para que seja informada uma categoria válida. Finalizar a leitura
quando informado um valor 0 ou negativo para a quantidade. Ler inicialmente a quantidade e
depois a categoria. Se informada uma quantidade negativa, não ler a categoria.*/

#include<stdio.h>

int main(void)
{
    int qtde = 1, somaM = 0, somaF = 0, somaI = 0, somatotal;
    float percM, percF, percI;
    char cat;
    while (qtde>0)
    {
        printf("Informe a quantidade: ");
        scanf("%d", &qtde);

        if(qtde>0)
        {
            do //validação da categoria
            {
                printf("Informe a categoria (M/m/f/f/I/i: ");
                __fpurge(stdin,NULL);
                scanf("%c", &cat);

                if (cat!= 'M' && cat!= 'm' && cat!= 'F' && cat!= 'f' && cat!= 'I' && cat!= 'i' )
                {
                    printf("categoria invalida\n");
                }
            }
            while (cat!= 'M' && cat!= 'm' && cat!= 'F' && cat!= 'f' && cat!= 'I' && cat!= 'i' );
            if (cat == 'M' || cat=='m')
            {
                somaM = somaM + qtde;
            }
            else if (cat == 'F' || cat=='f')
            {
                somaF = somaF + qtde;
            }
            else
            {
                somaI = somaI + qtde;
            }
        }
    }
    somatotal = somaM + somaF + somaI;

    percM = (float)somaM*100.0/somatotal;
    printf("%.1f%% masculino\n",percM);

    percF = (float)somaF*100.0/somatotal;
    printf("%.1f%% feminino\n",percF);

    percI = (float)somaI*100.0/somatotal;
    printf("%.1f%% infantil\n",percI);

    return 0;
}
