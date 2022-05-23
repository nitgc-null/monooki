#include <stdio.h>
#include <math.h>
double diff(double a, double x, int n) //微分算出
{
    double derf;
    derf = a * (n * pow(x, n - 1)); //ax^n
    return derf;
}
int main()
{
    double a, x;
    int n;
    printf("ax^n\n");
    printf("a:");
    scanf("%lf", &a);
    printf("x:");
    scanf("%lf", &x);
    printf("n:");
    scanf("%d", &n);
    printf("Derivative : %g", diff(a, x, n));
}