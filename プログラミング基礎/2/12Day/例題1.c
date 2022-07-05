#include <stdio.h>
int main()
{
    char str[] = "ohayou";
    char *ps;
    ps = str;
    printf("%c",*(ps));
    printf("%c",*(ps+1));
    printf("%c",*(ps+2));
    printf("%c",*(ps+3));
    printf("%c",*(ps+4));
    printf("%c",*(ps+5));
}