#include <stdio.h>
int main()
{
    double sum = 0.0; //計算結果用
    int num = 1;      //分母用
    for (int k = 0; k <= 5; k++)
    {
        if (k % 2 == 0)
        {
            sum += 1.0 / num;
        }
        else
        {
            sum += -1.0 / num;
        }
        num *= 3;
    }
    printf("%f", sum);
}