#include<stdio.h>
#include<stdlib.h>

void troca_valores(int *xPtr, int *yPtr);

int main()
{
    int a, b;
    printf("Numero 1: ");
    scanf("%i", &a);
    printf("Numero 2: ");
    scanf("%i", &b);

    printf("\nValores originais: %i %i", a, b);

    troca_valores(&a, &b);

    printf("\nValores trocados: %i %i\n", a, b);

    return 0;
}

void troca_valores(int *xPtr, int *yPtr)
{
    int aux;

    aux = *xPtr;
    *xPtr = *yPtr;
    *yPtr = aux;
}