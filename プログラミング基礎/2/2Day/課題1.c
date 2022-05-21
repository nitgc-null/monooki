#include <stdio.h>
int main()
{
    int day;
    scanf("%d", &day);
    if (day <= 0 || day > 30)
    {
        printf("入力エラー");
    }
    else
    {
        switch (day % 7)
        {
        case 0:
            printf("木");
            break;
        case 1:
            printf("金");
            break;
        case 2:
            printf("土");
            break;
        case 3:
            printf("日");
            break;
        case 4:
            printf("月");
            break;
        case 5:
            printf("火");
            break;
        case 6:
            printf("水");
            break;
        }
    }
}