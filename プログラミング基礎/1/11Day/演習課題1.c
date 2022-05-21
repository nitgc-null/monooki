#include <stdio.h>
int souwa2(int, int); //プロトタイプ宣言
int main()
{
    int a, b, s; //a,b 総和用s
    printf("aとbを入力:");
    scanf("%d %d", &a, &b);
    s = souwa2(a, b);
    printf("%d~%dの総和:%d", a, b, s);
}
int souwa2(int a, int b)
{
    int result = 0;
    if (b < a)
        a ^= b, b ^= a, a ^= b;
    for (; a <= b; a++)
        result += a;
    return result;
}