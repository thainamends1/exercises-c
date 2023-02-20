#include<stdio.h>
#include<stdlib.h>

int somar_arrays(int *array1, int *array2, int n1, int n2);

int main()
{
    int tam1, tam2, i;
    printf("Tamanho do vetor 1: ");
    scanf("%d", &tam1);
    printf("Tamanho do vetor 1: ");
    scanf("%d", &tam2);

    int array1[tam1], array2[tam2];

    for(i = 0; i < tam1; i++)
    {
        printf("\nInsira o numero no vetor 1: ");
        scanf("%d", array1 + i);
    }

    for(i = 0; i < tam2; i++)
    {
        printf("\nInsira o numero no vetor 2: ");
        scanf("%d", array2 + i);
    }

    int retorno = somar_arrays(array1, array2, tam1, tam2);

    if(retorno == 1)
        printf("\nRetorno: %d, os arrays possuem o mesmo tamanho.\n", retorno);
    else
        printf("\nRetorno: %d, os arrays nao possuem o mesmo tamanho.\n", retorno);

    return 0;
}


int somar_arrays(int *array1, int *array2, int n1, int n2)
{
    if(n1 == n2)
    {
        int i, array_soma[n1];

        for(i = 0; i < n1; i++)
            *(array_soma + i) = *(array1 + i) + *(array2 + i);

        printf("\n");

        for(i = 0; i < n1; i++)
            printf("Soma: array1 [%d] + array2 [%d] = %d\n", *(array1 + i), *(array2 + i), *(array_soma + i));

        return 1;
    }
    else
        return 0;
}