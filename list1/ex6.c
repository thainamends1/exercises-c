#include<stdio.h>
#include<stdlib.h>

int retorna_soma_do_dobro(int *xPtr, int *yPtr);

int main()
{
    int a, b, resultado;
    printf("Digite 2 numeros: ");
    scanf("%i %i", &a, &b);

    resultado = retorna_soma_do_dobro(&a, &b);
    printf("\nSoma do dobro = %i\n", resultado);

    return 0;
}

int retorna_soma_do_dobro(int *xPtr, int *yPtr)
{
    int soma_do_Dobro;

    *xPtr = (*xPtr) * 2;
    *yPtr = (*yPtr) * 2;

    soma_do_Dobro = *xPtr + *yPtr;

    return soma_do_Dobro;
}