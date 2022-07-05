#include <stdio.h>
#define N 3
#define M 3
void transpose(int a[][M])
{
    int temp[M][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            temp[j][i] = a[i][j];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            a[i][j] = temp[i][j];
    }
}
int main()
{
    int a[N][M] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    transpose(a);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            printf("%d", a[i][j]);
        printf("\n");
    }
    return 0;
}