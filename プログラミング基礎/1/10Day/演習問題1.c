#include <stdio.h>
double div(double, double);

int main()
{
    double x,y,z;
    printf("x‚Ì’l:");
    scanf("%lf", &x);
    printf("y‚Ì’l:");
    scanf("%lf", &y);
    z=div(x, y);
    printf("z‚Ì’l: %.2f",z);
}
double div(double a, double b)
{
    return a/b;
}
