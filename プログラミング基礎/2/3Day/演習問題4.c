#include <stdio.h>

int main(void)
{

    char str[100], c;

    printf("文字列:");
    scanf("%s", str);
    printf("検索文字:");
    scanf("%*c%c", &c);
    for (int i = 0; i < 100; i++)
    {
        if (str[i] == c)
        {
            printf("%d文字目\n", i + 1);
            return 0;
        }
    }
    printf("見つかりませんでした\n");
}