#include<stdio.h>
#include<stdlib.h>

void ler_notas(float *nota1, float *nota2);
float calcular_media_simples(float *nota1, float *nota2);
float calcular_media_ponderada(float *nota1, float *nota2);

int main()
{
    float n1, n2, media_simples, media_ponderada;

    ler_notas(&n1, &n2);
    media_simples = calcular_media_simples(&n1, &n2);
    media_ponderada = calcular_media_ponderada(&n1, &n2);

    printf("\nMedia Simples: %.2f\nMedia Ponderada: %.2f\n\n", media_simples, media_ponderada);

    return 0;
}

void ler_notas(float *nota1, float *nota2)
{
    printf("Digite a nota 1: ");
    scanf("%f", nota1);
    printf("Digite a nota 2: ");
    scanf("%f", nota2);
}

float calcular_media_simples(float *nota1, float *nota2)
{
    float media_simples;
    media_simples = (*nota1 + *nota2) / 2;
    return media_simples;
}

float calcular_media_ponderada(float *nota1, float *nota2)
{
    float media_ponderada;
    media_ponderada = (*nota1 + (2 * *nota2)) / 3;
    return media_ponderada;
}