#include<stdio.h>
#include<stdlib.h>

void frac(float num, int *inteiro, float *frac);

int main()
{
    float num, fracionario;
    int inteiro;

    printf("Digite um numero real: ");
    scanf("%f", &num);

    frac(num, &inteiro, &fracionario);

    printf("\nParte inteira: %d\nParte fracionaria: %f\n", inteiro, fracionario);

    return 0;
}

void frac(float num, int *inteiro, float *frac)
{
    *inteiro = num;
    *frac = num - *inteiro;
}