#include<stdio.h>
#include<stdlib.h>

int ordena_numeros(int *a, int *b, int *c);

int main()
{
    int a, b, c, condicao;

    printf("Numero 1: ");
    scanf("%d", &a);
    printf("Numero 2: ");
    scanf("%d", &b);
    printf("Numero 3: ");
    scanf("%d", &c);

    condicao = ordena_numeros(&a, &b, &c);

    if(!condicao)
        printf("\nMenor: %d\nMeio: %d\nMenor: %d\n\n", a, b, c);
    else
        printf("\nMenor: %d\nMeio: %d\nMenor: %d\n\n", a, b, c);

    return 0;
}

int ordena_numeros(int *a, int *b, int *c)
{
    int aux;

    if(*a == *b && *a == *c)
        return 1;
    else
    {
        if(*a > *b)
        {
            aux = *a;
            *a = *b;
            *b = aux;
        }

        if(*a > *c)
        {
            aux = *a;
            *a = *c;
            *c = aux;
        }

        if(*b > *c)
        {
            aux = *b;
            *b = *c;
            *c = aux;
        }

        return 0;
    }
}