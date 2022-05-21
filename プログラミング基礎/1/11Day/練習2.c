#include <stdio.h>
int souwa(int);
int main()
{
    int n, s;
    printf("n:");
    scanf("%d", &n);
    s = souwa(n); //関数呼び出し
    printf("1~%dの総和:%d", n, s);
}
int souwa(int n)
{
    int i, s = 0; //カウント用 i 総和 s
    for (i = 1; i <= n; i++)
        s += i; //1~nまでの総和
    return s;
}