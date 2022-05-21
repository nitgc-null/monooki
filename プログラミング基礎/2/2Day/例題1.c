#include <stdio.h>
int main()
{
    int score; //点数
    scanf("%d", &score);
    if (score >= 60)    //条件 60以上の時
    {
        printf("合格");
    }
    else    //そうでないとき
    {
        printf("不合格");
    }
}