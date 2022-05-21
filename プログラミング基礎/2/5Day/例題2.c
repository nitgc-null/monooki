#include <stdio.h>
int main()
{
    int sum = 0;
    for (int k = 1; k <= 5; k++)
    {
        sum += k * k;
    }
    printf("%d", sum);
}