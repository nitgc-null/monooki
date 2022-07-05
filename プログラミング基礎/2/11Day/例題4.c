#include <stdio.h>
void func_p(int *a); //プロトタイプ宣言
int main()
{
    int a = 20;          //変数の宣言
    printf("a:%d\n", a); //関数の処理前
    func_p(&a);          //アドレスを渡す
    printf("a:%d", a);   //後
}

void func_p(int *p)
{
    *p = 50; //関節参照による代入
}