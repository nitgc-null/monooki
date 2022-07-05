#include <stdio.h>
#define N 4
void printb(unsigned int a)
{
    //2進数表示関数
    int d[N] = {0};
    for (int i = N - 1; i >= 0; i--)
    {
        d[i] = a % 2;
        a /= 2;
    }
    printf("0b");
    for (int i = 0; i < N; i++)
        printf("%d", d[i]);
    printf("\n");
}
void setb(int *a, int n)
{
    //aのn番目ビットを立てる
    *a |= (1 << n);
}
int main()
{
    int a = 0b0000;
    int n;
    scanf("%d", &n);
    setb(&a, n);
    printb(a);
}