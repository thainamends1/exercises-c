#include<stdio.h>
#include<stdlib.h>

int main()
{
    int vetor[5], i = 0;

    printf("Insira um numero no vetor: ");
    scanf("%d", vetor);

    for(i = 1; i < 5; i++)
    {
        printf("Insira outro numero: ");
        scanf("%d", vetor + i);
    }

    printf("\nDobro de cada numero inserido no vetor: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", 2 * *(vetor + i));
    }

    printf("\n");
    return 0;
}