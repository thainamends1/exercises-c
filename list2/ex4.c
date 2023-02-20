#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, *b, **c, ***d;
    printf("Numero: ");
    scanf("%d", &a);

    b = &a;
    printf("\nDobro de %d: %d\n",  a, (*b * 2));

    c = &b;
    printf("Triplo de %d: %d\n", a, (**c * 3));

    d = &c;
    printf("Quadruplo de %d: %d\n\n", a, (***d * 4));

    return 0;
}