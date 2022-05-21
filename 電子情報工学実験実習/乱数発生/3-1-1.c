#include <stdio.h>
#define x_max 256 //配列最大値

void main()
{
    int a = 666,
        b = 123,
        m = 727;

    int x[x_max];
    x[0] = b;
    for (int n = 0; n < x_max; n++) // 合同法乱数
    {
        x[n + 1] = (a * x[n]) % m;
    }

    for (int i = 0; i < 6; i++) // 3-1(1)
    {
        printf("x[%d] : %d\n", i, x[i]); //出力
    }
}