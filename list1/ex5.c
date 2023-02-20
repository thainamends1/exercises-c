#include<stdio.h>
#include<stdlib.h>

void retorna_maximo_minimo(int *xPtr, int *yPtr);

int main()
{
    int a, b;
    printf("Digite um numero (primeira variavel): ");
    scanf("%i", &a);
    printf("Digite um numero (segunda variavel): ");
    scanf("%i", &b);

    retorna_maximo_minimo(&a, &b);

    return 0;
}

void retorna_maximo_minimo(int *xPtr, int *yPtr)
{
    int aux, maximo, minimo;

    if(*xPtr > *yPtr)
    {
        printf("\nMaior valor na primeira variavel: %i\nMenor valor na segunda variavel: %i\n", *xPtr, *yPtr);
    }
    else
    {
        aux = *yPtr;
        *yPtr = *xPtr;
        *xPtr = aux;
        printf("\nMaior valor na primeira variavel: %i\nMenor valor na segunda variavel: %i\n", *xPtr, *yPtr);
    }
}