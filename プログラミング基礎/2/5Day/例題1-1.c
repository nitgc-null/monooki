#include <stdio.h>
int main()
{
    int a = 0, b = 0;
    int c = ++a, d = b++; //前置と後置のインクリメント
    printf("c=%d,d=%d", c, d);
}