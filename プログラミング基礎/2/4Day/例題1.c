#include <stdio.h>
#define N 9
int main()
{
    printf("九九の表示\n");
    for (int i = 1; i <= 9; i++)
    {
        printf("%dの段", i);
        for (int j = 1; j <= 9; j++)
        {
            printf("%d×%d=%2d ", i, j, i * j);
        }
        printf("\n");
    }
}