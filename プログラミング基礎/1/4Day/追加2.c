//2次元配列への代入
#include <stdio.h>
int main()
{
    int course_results[5][4];
    int i, j; //カウント用
    //2重ループで全要素に代入
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("配列に代入する値を入力\n");
            scanf("%d", &a[i][j]);
        }
    }
    printf("出力\n");
    //2次元配列の出力 i行 j行で出力
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n"); //行ごとに改行
    }
}