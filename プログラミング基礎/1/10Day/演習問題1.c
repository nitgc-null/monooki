#include <stdio.h>
double div(double, double);

int main()
{
    double x,y,z;
    printf("xの値:");
    scanf("%lf", &x);
    printf("yの値:");
    scanf("%lf", &y);
    z=div(x, y);
    printf("zの値: %.2f",z);
}
double div(double a, double b)
{
    return a/b;
}
