#include <stdio.h>
int func_a(int);
int main()
{
    int a = 10, b;
    b = func_a(a);
    printf("%d", b);
}

int func_a(int n)
{
    int i, c = 0;
    for (i = 0; i < n; i++)
    {
        c = c + (i % 3);
    }
    return c;
}