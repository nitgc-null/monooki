#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sai, n;
    srand(10); //乱数の種
    printf("サイコロ：0を入力すると終了 その他の数字：サイコロを振る");
    while (1)
    {
        //無限ループ
        scanf("%d", &n); //継続するかどうかの判定のために入力
        if (n == 0)
            break;
        printf("サイコロの数字：%d\n", rand() % 6 + 1); //乱数を6で割った余り+1
    }
}