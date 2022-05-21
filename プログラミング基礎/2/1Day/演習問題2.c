#include <stdio.h>
#include <math.h>
int main()
{
    double r;
    scanf("%lf", &r);
    printf("円周の長さ:%.2f\n面積:%.2f", r * 2 * M_PI, r * r * M_PI);
}