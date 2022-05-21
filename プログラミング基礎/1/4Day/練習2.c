//2次元配列への代入
#include <stdio.h>
int main()
{
    int a[3][3];
    int i, j, k; //カウント用
    k = 1;       //1~9
    //2重ループで全要素に代入
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            a[i][j] = k; //2次元配列へ代入
            k++;
        }
    }
    printf("出力\n");
    //2次元配列の出力 i行 j行で出力
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n"); //行ごとに改行
    }
}