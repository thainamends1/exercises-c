#include <stdio.h>

int main()
{
    int n, i = 0;
    printf("Informe o valor de N: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        if(n % 2 == 0) {
            printf("%d ", (2*i));
        }
        else {
            printf("%d ", (2*i + 1));
        }
    }

    return 0;
}