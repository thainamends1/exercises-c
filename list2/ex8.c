#include<stdio.h>
#include<stdlib.h>

int main()
{
    int array[6] = {10, 20, 30, 40, 50, 60};
    int *ptr;

    ptr = array;

    int i = 0;

    printf("Valores originais: ");

    for(i = 0; i < 6; i++)
    {
        printf("%d ", *(ptr + i));
    }

    printf("\n\nCada valor somado (+ 1): ");

    for(i = 0; i < 6; i++)
    {
        printf("%d ", *(ptr + i) + 1);
    }

    printf("\n");
    return 0;
}