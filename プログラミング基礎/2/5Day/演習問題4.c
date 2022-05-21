#include <stdio.h>

int main()
{
    int a = 5, k;
    for (int k = 1; k < 10; k++)
    {
        a = 2 * a + 4 * k;
    }
    printf("%d", a);
}