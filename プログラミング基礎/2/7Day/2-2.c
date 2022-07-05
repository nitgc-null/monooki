#include <stdio.h>
#define N 20
int func1(int n)
{
    int flag;
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        flag = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", i);
            count++;
        }
    }
    return count;
}
int main()
{
    int count;
    count = func1(N);
    printf("\n%d個", count);
}