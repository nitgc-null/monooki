#include <stdio.h>
#define N 20
int main()
{
    int n;
    int b[N] = {0}; //配列を0で初期化
    printf("decimal:");
    scanf("%d", &n); //10真数nを入力
    for (int i = N - 1; i > 0; i--)
    {
        b[i] = n % 2;
        n = n / 2;
    }
    printf("binary:");
    for (int i = 0; i < N; i++)
        printf("%d", b[i]);
}