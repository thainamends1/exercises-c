#include<stdio.h>
#include<stdlib.h>

int main()
{
    float matriz[3][3] = {{1.0, 2.0, 3.0},
                        {4.0, 5.0, 6.0},
                        {7.0, 8.0, 9.0}};
    int i, j;

    for (i = 0; i < 3; i++)
    {
        printf("|  ");
        for(j = 0; j < 3; j++)
        {
            printf("(%.2f: %p)  ", matriz[i][j], &matriz[i][j]);
        }
        printf("|\n");
    }
    return 0;
}