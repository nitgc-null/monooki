#include <stdio.h>
int main()
{
    int odd = 0, even = 0;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 1)
            odd += i;
        if (i % 2 == 0)
            even += i;
    }
    printf("奇数:%d 偶数:%d", odd, even);
}