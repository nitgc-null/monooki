#include <stdio.h>
int main()
{
    int score[3][4]; //成績格納用配列
    printf("成績入力: 番号 数学 国語 英語\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d人目:", i + 1);
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &score[i][j]); //入力 スペース区切り
        }
    }
}