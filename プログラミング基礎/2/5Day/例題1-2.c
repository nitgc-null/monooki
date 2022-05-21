#include <stdio.h>
int main()
{
    int i = 5;
    while (--i)
    {
        printf("%d ", i);
    }
    printf("\n");
    i = 5;
    while (i--)
    {
        printf("%d ", i);
    }
}