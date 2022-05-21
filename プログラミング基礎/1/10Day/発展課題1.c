// ユーザ関数xのn乗
#include <stdio.h>
int pw(int,int);//プロトタイプ宣言を記述
int main()
{
    int x,n,a; //aは計算結果用
    printf("xの値:");
    scanf("%d", &x);
    printf("nの値:");
    scanf("%d", &n);
    a=pw(x, n);//関数の呼び出し
    printf("%dの%d乗: %d",x, n, a ); //結果の表示
}

//関数 pw を記述
int pw(int a,int b)
{
    int c=1;
    for(int i=0; i != b; i++)
    {
        c *= a;
    }
    return c;
}
