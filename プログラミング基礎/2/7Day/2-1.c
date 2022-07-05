#include <stdio.h>
#define N 5
int main()
{
    int a = 2;
    int i = 1;
    while (1)
    {
        if (i >= N)
            break;
        a += a;
        i++;
    }
    printf("%d", a);
}