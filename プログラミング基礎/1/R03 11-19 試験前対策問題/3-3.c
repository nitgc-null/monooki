#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 5; j++)
        {
            if ((j >= i) && (j < 5 - i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}