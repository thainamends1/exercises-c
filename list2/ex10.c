#include<stdio.h>
#include<stdlib.h>

int retornar_maior_valor(int *vet, int tam);

int main()
{
    int n, i, maior = 0;
    printf("Quantos numeros serao inseridos no vetor: ");
    scanf("%d", &n);
    int vetor[n];

    for(i = 0; i < n; i++)
    {
        printf("Insira um numero: ");
        scanf("%d", vetor + i);
    }

    maior = retornar_maior_valor(vetor, n);
    printf("\nMaior numero: %d\n", maior);

    return 0;
}

int retornar_maior_valor(int *vet, int tam)
{
    int i, maior_valor = *vet;

    for(i = 1; i < tam; i++)
    {
        if(maior_valor < *(vet + i))
            maior_valor = *(vet + i);
    }

    return maior_valor;
}