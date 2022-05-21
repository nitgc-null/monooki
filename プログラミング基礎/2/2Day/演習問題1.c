#include <stdio.h>
int main()
{
    int score;
    scanf("%d", &score);
    if (score < 0 || score > 100)
    {
        printf("エラー");
    }
    else if (score >= 80)
    {
        printf("優");
        }
    else if (score >= 70)
    {
        printf("良");
    }
    else if (score >= 60)
    {
        printf("可");
    }
    else
    {
        printf("不可");
    }
}