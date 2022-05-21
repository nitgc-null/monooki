#include <stdio.h>
int main() 
{
    int score[5][6]; //成績格納用配列
    int ave = 0;
    printf("成績入力: 番号 数学 国語 英語 電気 情報\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d人目:", i + 1);
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &score[i][j]); //入力 スペース区切り
        }
    }
    printf("| 番号 | 数学 | 国語 | 英語 | 電気 | 情報 | 平均|\n");

    for (int i = 0; i < 5; i++)
    {
        ave = (score[i][0] + score[i][1] + score[i][2] + score[i][3] + score[i][4] + score[i][5]) / 6;
        printf("|    %d |   %d |   %d |   %d |   %d |   %d |  %d |\n", score[i][0], score[i][1], score[i][2], score[i][3], score[i][4], score[i][5], ave);
    }
}