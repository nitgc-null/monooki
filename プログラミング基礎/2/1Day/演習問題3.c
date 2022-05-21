#include <stdio.h>
#define N 10
int main()
{
    int fact = 1;

    for (int i = 1; i <= N; i++)
    {
        fact *= i;
    };
    printf("%dの階乗 : %d\n", N, fact);
}