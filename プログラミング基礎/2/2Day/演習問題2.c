#include <stdio.h>
int main()
{
    int score;
    scanf("%d", &score);
    if (score < 0 || score > 100)
    {
        printf("入力エラー");
    }
    else
    {
        score /= 10; //10で割る 小数点以下は切り捨て
        switch (score)
        {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("不可");
            break;
        case 6:
            printf("可");
            break;
        case 7:
            printf("良");
            break;
        case 8:
        case 9:
        case 10:
            printf("優");
            break;
        }
    }
}