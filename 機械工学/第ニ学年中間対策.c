#include <stdio.h>
int main()
{
    int a1 = 892,
        a2 = -808,
        a3 = 12,
        a4 = 722659,
        a5 = 563,
        a6 = 922;
    double a7 = 26.751,
           a8 = 12.321,
           a9 = -28.091,
           a10 = 2263.2;
    printf("%d\n", a1);
    printf("%d\n", a2);
    printf("%4d\n", a3);
    printf("%5d\n", a4);
    printf("%06d\n", a5);
    printf("%-6d\n", a6);
    printf("%f\n", a7);
    printf("%8.2f\n", a8);
    printf("%-8.2f\n", a9);
    printf("%5.1f\n", a10);
}