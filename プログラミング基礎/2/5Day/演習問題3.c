#include <stdio.h>
#include <math.h>

int main()
{
    double sum = 0;
    for (int i = 0; i <= 8; i++)
    {
        sum += pow(-1, i) / pow(2, i);
    }
    printf("%lf", sum);
}