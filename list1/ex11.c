#include<stdio.h>
#include<stdlib.h>

int main()
{
    int vetor[5], i;

    printf("Insira um numero no vetor: ");
    scanf("%d", vetor);

    for(i = 1; i < 5; i++)
    {
        printf("Insira outro numero: ");
        scanf("%d", vetor + i);
    }

    for(i = 0; i < 5; i++)
    {
        if(*(vetor + i) % 2 == 0)
        {
            printf("\nEndereco do numero [%d]: %p", *(vetor + i), vetor + i);
        }
    }

    printf("\n");
    return 0;
}