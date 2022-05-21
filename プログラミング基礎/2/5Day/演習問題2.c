#include <stdio.h>
int main()
{
    double sum = 0;
    for (int i = 1; i <= 20; i++)
    {
        sum += 1.0 / (2 * i - 1);
    }
    printf("%lf", sum);
}