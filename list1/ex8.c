#include<stdio.h>
#include<stdlib.h>

int main()
{
    float v[10] = {1.3, 2.7, 3.2, 4.0, 5.9, 6.5, 7.1, 8.2, 9.0, 10.5};
    int i = 0;

    while(i < 10)
    {
        printf("Endereco de %.2f = %p\n", *(v+i), v+i);
        i++;
    }

    return 0;
}