#include <stdio.h>
#define N 10
void func_const(const int a[], int b[])
{ //アドレス渡しであることに注意
    for (int i = 0; i < N; i++)
    {
        b[i] = 0; //エラーは出ない bからは書き込める
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d", a[i]); //aの出力
    }
}

int main()
{
    int a[N] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    func_const(a, a); //同じ配列を引数にする
    return 0;
}