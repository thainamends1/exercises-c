#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a = 2, b = 4, *aPtr, *bPtr;
    aPtr = &a;
    bPtr = &b;

    if(aPtr > bPtr)
        printf("Maior endereco: %p\n\n", aPtr);
    else
        printf("Maior endereco: %p\n\n", bPtr);

    return(0);
}