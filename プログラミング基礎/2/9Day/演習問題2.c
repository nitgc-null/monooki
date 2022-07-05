#include <stdio.h>
int func_d(int[]);
int main()
{
    int a[] = {1, 2, 3, 4, 5, -1};
    int b;
    int i;
    b = func_d(a);
    printf("結果:%d\n", b);
    for (i = 0; a[i] != 0; i++)
        printf("%d", a[i]);
}
int func_d(int n[])
{
    for (int i = 0; n[i] != '\0'; i++)
    {
        n[i] *= 2;
    }
}
