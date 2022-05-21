#include <stdio.h>
int main()
{
    int d, sum = 0;
    int n = 0, max = 0;
    double avg;
    while (1)
    {
        printf("数を入力:");
        scanf("%d", &d); //aはキーボード入力
        if (d < 0)
            break; //負の数を入力で終了
        if (d >= 100)
        { //100を超える場合
            printf("入力エラー");
            continue; //ループ先頭に戻る
        }
        if (d > max)
            max = d;
        sum += d; // dに加算
        n++;
    }
    avg = (double)sum / n;
    printf("合計:%d 平均:%.2f 最大値:%d", sum, avg, max);
}