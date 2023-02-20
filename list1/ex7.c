#include<stdio.h>
#include<stdlib.h>

void calcular_soma(int *a, int *b);

int main()
{
    int a = 5, b = 10;

    printf("Valor da primeira variavel: %d\nValor da segunda variavel: %d", a, b);

    calcular_soma(&a, &b);

    printf("\nValores somados na primeira variavel: %d\nValor da segunda variavel: %d\n", a, b);

    return 0;
}

void calcular_soma(int *a, int *b)
{
    *a = *a + *b;
}