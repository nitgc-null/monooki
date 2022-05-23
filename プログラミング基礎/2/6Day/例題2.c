//ユーザー関数xのn乗
#include <stdio.h>
int pw(int, int); //プロトタイプ宣言
int main()
{
    int x, n, a;
    printf("x:");
    scanf("%d", &x); //xのキーボート入力
    printf("n:");
    scanf("%d", &n);             //nのキーボート入力
    a = pw(x, n);                //関数の呼び出し 戻り値をaに代入
    printf("%d^%d:%d", x, n, a); //出力
}
int pw(int x, int n)
{ // 戻り値int, 引数int, int
    int a = 1;
    for (int i = 0; i < n; i++)
    { //xのn乗の計算
        a *= x;
    }
    return a; //戻り値
}