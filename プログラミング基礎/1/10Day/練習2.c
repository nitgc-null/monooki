//ユーザー関数を使ったz=x+yの計算
#include <stdio.h>
int add(int, int);//プロトタイプ宣言
int main()
{
    int x,y,z;
    printf("xの値:");
    scanf("%d", &x);
    printf("yの値:");
    scanf("%d", &y);
    z=add(x, y);//関数の呼び出し x,yを()内に書く→引数 zに戻り値
    printf("zの値: %d",z);
}
//作成する関数add 引数二つの加算結果を返す
int add(int a, int b)   //第一引数に入れたものがaに第二引数に入れたものがbになる
{
    int c;//加算結果を入れる
    c=a+b;
    return c;//戻り値として､cを返す (cを使わず、return a+b; でも可能)
}
