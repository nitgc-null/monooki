#include <stdio.h>

int main()
{
    int a[4][4] = {{0, 0, 0, 0}, {1, 1, 1, 1}, {2, 2, 2, 2}, {3, 3, 3, 3}};
    int i, j;
    printf("出力 \n");
    for (j = 0; j < 4; j++)
    {
        for (i = 0; i < 4; i++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}