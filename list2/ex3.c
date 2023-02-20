#include<stdio.h>
#include<stdlib.h>

void imprimir_vetor(int *v);

int main()
{
    int vetor[5] = {10, 20, 30, 40, 50};
    imprimir_vetor(vetor);
    printf("\n");
    return 0;
}

void imprimir_vetor(int *v)
{
    printf("%d ", *v);
    printf("%d ", *(v + 1));
    printf("%d ", *(v + 2));
    printf("%d ", *(v + 3));
    printf("%d ", *(v + 4));
}