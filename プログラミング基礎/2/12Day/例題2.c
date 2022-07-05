#include <stdio.h>
int main()
{
    int a[] = {10, 20, 30, 40, 50, -1};
    int *pa;
    char str[] = "abcdefg";
    char *ps;
    pa = a; //配列名は配列の先頭アドレス
    ps = str;
    while (*pa >= 0)
    {
        printf("%d ", *pa);
        pa++;
    }
    while (*ps != '\0')
    {
        printf("%c", *ps);
        ps++;
    }
}