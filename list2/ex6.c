#include<stdio.h>
#include<stdlib.h>

void calc_esfera(float r, float *area, float *volume);

int main()
{
    float raio, area, volume;

    printf("Digite o tamannho do raio da esfera: ");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);

    printf("\nArea da superficie: %.2f\nVolume da esfera: %.2f\n", area, volume);


    return 0;
}

void calc_esfera(float r, float *area, float *volume)
{
    const float PI = 3.1415;

    *area = 4 * PI * (r*r);
    *volume = (4 * PI * (r*r*r)) / 3;
}