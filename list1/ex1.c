#include<stdio.h>
#include<stdlib.h>

void modifica_valor_por_ponteiros(int *x_ptr, int x, float *y_ptr, float y, char *z_ptr, char z);

int main()
{
    int a = 5, *aPtr;
    float b = 2, *bPtr;
    char c = 'W', *cPtr;

    aPtr = &a;
    bPtr = &b;
    cPtr = &c;

    printf("Valores das variaveis antes: %i, %.2f, %c\n\n", *aPtr, *bPtr, *cPtr);

    a = 50;
    b = 20;
    c = 'G';

    modifica_valor_por_ponteiros(aPtr, a, bPtr, b, cPtr, c);

    printf("Valores das variaveis depois: %i, %.2f, %c\n\n", *aPtr, *bPtr, *cPtr);

    return 0;
}

void modifica_valor_por_ponteiros(int *x_ptr, int x, float *y_ptr, float y, char *z_ptr, char z)
{
    x_ptr = &x;
    y_ptr = &y;
    z_ptr = &z;
}