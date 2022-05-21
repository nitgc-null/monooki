#include <stdio.h>
void func1();
int g; //大域変数の宣言
int main()
{
    int l; //局所変数の宣言
    l = 5;
    g = 4;
    func1();
    printf("局所変数lの値(メイン):%d\n", l);
    printf("大域変数gの値(メイン) : %d\n", g);
}
void func1()
{
    int l; //局所変数の宣言
    l = 3;
    g = 9;
    printf("局所変数lの値 (func1): %d\n", l);
    printf("大域変数gの値 (func1):%d\n", g);
}