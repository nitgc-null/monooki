#include <stdio.h>
int main()
{
    int i, j, n;
    n = 10;
    for (int i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 10 - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}