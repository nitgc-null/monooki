#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, d;

    printf("辺aの値:");
    scanf("%lf", &a);

    printf("辺bの値:");
    scanf("%lf", &b);

    printf("角度:");
    scanf("%lf", &d);

    printf("辺cの値:%.2f\n", sqrt(pow(a, 2.0) + pow(b, 2.0) - 2 * a * b * cos(d * (M_PI / 180))));
}