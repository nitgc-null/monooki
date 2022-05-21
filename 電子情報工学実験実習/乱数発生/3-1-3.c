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

    int count_x, count_y = b;          //　1周期探査用
    for (int i = 0; count_x != b; i++) //　1周期探査
    {
        count_x = (a * count_y) % m; // 合同法乱数
        if (count_x == b)            //発見時処理
        {
            n = i;
            count_y = b;
            break;
        }
        count_y = count_x;
    }

    int x[n]; //1周期分の配列
    x[0] = b;
    for (int i = 0; i < n; i++) // 合同法乱数
    {
        x[i + 1] = (a * x[i]) % m;
    }

    for (int i = 0; i < n + 1; i++) // 3-1(3)
    {
        printf("x[%d] : %d\n", i, x[i]);
    }
}