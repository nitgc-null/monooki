#include <stdio.h>
int combination(int, int);
int main()
{
    int n, r;
    printf("n : 5");
    scanf("%d", &n);
    printf("r : ");
    scanf("%d", &r);
    printf("nCr : %d\n", combination(n, r));
}

int combination(int n, int r)
{
    if (r == 0 || r == n)
        return (1);
    else if (r == 1)
        return (n);
    return (combination(n - 1, r - 1) + combination(n - 1, r));
}