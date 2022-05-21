#include <stdio.h>

void main()
{
    int a, b, m, n;
    /* input */
    printf("Enter a! : ");
    scanf("%d", &a);
    printf("Enter b! : ");
    scanf("%d", &b);
    printf("Enter m! : ");
    scanf("%d", &m);
    printf("Enter n! : ");
    scanf("%d", &n);

    int x[n];
    x[0] = b;
    for (int i = 0; i < n; i++) // 合同法乱数
    {
        x[i + 1] = (a * x[i]) % m;
    }

    for (int i = 0; i < n + 1; i++) // 3-1(2)
    {
        printf("x[%d] : %d\n", i, x[i]); //出力
    }
}