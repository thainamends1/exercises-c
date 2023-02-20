#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, *aPtr, *bPtr;
    printf("Digite o primeiro valor: ");
    scanf("%i", &a);
    printf("\nDigite o segundo valor: ");
    scanf("%i", &b);

    aPtr = &a;
    bPtr = &b;

    if(aPtr > bPtr)
        printf("\nMaior endereco: %p, correspondente a variavel do primeiro valor %i.\n", aPtr, a);
    else
        printf("\nMaior endereco: %p, correspondente a variavel do segundo valor %i.\n", bPtr, b);

    return 0;
}