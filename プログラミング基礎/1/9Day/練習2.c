#include <stdio.h>
#include <math.h>
int main()
{
    double d;
    printf("角度:");
    scanf("%lf", &d);
    printf("sin:%.2f\n", sin(d * (M_PI / 180)));
    printf("cos:%.2f\n", cos(d * (M_PI / 180)));
    printf("tan:%.2f\n", tan(d * (M_PI / 180)));
}