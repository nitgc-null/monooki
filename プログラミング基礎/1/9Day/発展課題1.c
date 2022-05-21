#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];

    int upper = 0,
        lower = 0,
        digit = 0;

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isupper(str[i]))
            upper++;
        else if (islower(str[i]))
            lower++;
        else if (isdigit(str[i]))
            digit++;
    }
    printf("文字数:%d\n大文字の数:%d\n小文字の数:%d\n数字の数:%d\n", strlen(str), upper, lower, digit);
}