#include <stdio.h>
int func_r(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + func_r(n - 1);
    }
}
int main()
{
    printf("%d", func_r(5));
}