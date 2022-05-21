#include <stdio.h>
#include <math.h>

int kai(double a, double b, double c, double *xa, double *xb)
{
    double D;
    D = b * b - 4 * a * c;
    if (D > 0)
    {
        *xa = (-b + sqrt(D)) / (2 * a);
        *xb = (-b - sqrt(D)) / (2 * a);
        return (1);
    }
    else if (D == 0)
    {
        *xa = *xb = -b / (2 * a);
        return (0);
    }
    {
        *xa = -b / (2 * a);
        *xb = sqrt(-D) / (2 * a);
        return (-1);
    }
}

int main(void)
{
    double a, b, c;
    double xa, xb;
    printf("2次方程式の定数を入力してください。\n");

    printf("a = ");
    scanf("%lf", &a);

    printf("b = ");
    scanf("%lf", &b);

    printf("c = ");
    scanf("%lf", &c);

    switch (kai(a, b, c, &xa, &xb))
    {
    case 1:
        printf("実数解\n");
        printf("2次方程式の解: x = %g, %g\n", xa, xb);
        break;
    case 0:
        printf("重解\n");
        printf("2次方程式の解: x = %g, %g\n", xa, xb);
        break;
    case -1:
        printf("虚数解\n");
        printf("2次方程式の解: %g+%gi, %g-%gi\n", xa, xb, xa, xb);
        break;
    }
}