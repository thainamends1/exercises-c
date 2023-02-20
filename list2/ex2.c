#include<stdio.h>
#include<stdlib.h>

void preencher_vetor(int *v, int n);
void imprime(int *v);

int main()
{
    int vetor[10], n = -1;

    preencher_vetor(vetor, n);
    imprime(vetor);

    return 0;
}

void preencher_vetor(int *v, int n)
{
    int i = 0;
    for(i = 0; i < 10; i++)
        *(v + i) = n;
}

void imprime(int *v)
{
    int i;
    for(i = 0; i < 10; i++)
        printf("Elemento %d: %d\n", i+1, *(v + i));
}