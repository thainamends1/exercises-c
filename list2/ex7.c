#include<stdio.h>
#include<stdlib.h>

int negativos(float *vet, int n);

int main()
{
    int n, quant_negativos;

    printf("Tamanho do vetor: ");
    scanf("%d", &n);

    float vetor[n];

    quant_negativos = negativos(vetor, n);
    printf("Quantidade de numeros negativos no vetor: %d\n", quant_negativos);

    return 0;
}

int negativos(float *vet, int n)
{
    int i, negativos = 0;

    for(i = 0; i < n; i++)
    {
        printf("Insira um numero no vetor: ");
        scanf("%f", vet + i);
    }

    for(i = 0; i < n; i++)
    {
        if(*(vet + i) < 0)
            negativos++;
    }

    return negativos;
}