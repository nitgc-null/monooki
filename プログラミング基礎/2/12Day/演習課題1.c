#include <stdio.h>
#define N 4
void printb(unsigned int a)
{
    //2進数表示関数
    int d[N] = {0};

    for (int i = N - 1; i >= 0; i--)
    {
        d[i] = (a >> i) & 1;
    }
    printf("0b");
    for (int i = 0; i < N; i++)
        printf("%d", d[i]);
    printf("\n");
}
int main()
{
    int a = 0b0101; //2進数には"0b"を付ける
    int b = 0b0011;
    printb(a & b);  //&(AND)演算
    printb(a | b);  //|(OR)演算
    printb(~a);     //~(NOT)演算
    printb(b << 2); //右シフト(2ビット)
    printb(a >> 1); //左シフト(1ビット)
    printb(a ^ b);  //^(XOR 排他的論理和)演算
}