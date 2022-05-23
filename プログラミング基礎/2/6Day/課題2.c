#include <stdio.h>
#define N 5
void func2(int n)
{
    static int s = 0;
    s = s + n;
    if (n == N)
    {
        printf("%d", s);
    }
}
int main()
{
    for (int i = 1; i <= N; i++)
    {
        func2(i);
    }
}