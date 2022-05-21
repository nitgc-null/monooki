#include <stdio.h>
double triangle(double, double);
int main()
{
    double b, h;
    printf("Enter the length and height of the bottom.");
    scanf("%lf %lf", &b, &h);
    printf("Area of a triangle:%g", triangle(b, h));
}
double triangle(double b, double h)
{
    return ((b * h) / 2);
}