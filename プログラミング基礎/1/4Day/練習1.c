#include <stdio.h>
int main()
{
    int i; //for文用
    int seiseki[4][4] = {{1, 80, 70, 60},
                         {2, 50, 100, 90},
                         {3, 60, 80, 70},
                         {4, 90, 90, 90}}; //2次元配列初期値
    printf("番号 数学 物理 英語\n");       //出力
    for (i = 0; i < 4; i++)
    {
        printf("%5d%5d%5d%5d\n",
               seiseki[i][0], seiseki[i][1], seiseki[i][2], seiseki[i][3]);
    }
}