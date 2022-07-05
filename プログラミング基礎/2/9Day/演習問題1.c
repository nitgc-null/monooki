#include <stdio.h>
#define N 20
int main()
{
    char str[N];
    char c;
    printf("検索する文字:");
    scanf("%c", &c);
    printf("対象の文字列");
    printf("%s",str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c)
            printf("%d番目\n", i);
    }
    return 0;
}