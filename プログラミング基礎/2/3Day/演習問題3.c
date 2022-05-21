#include <stdio.h>

int nPr(int n, int r)
{
    if (r <= 1)
        return n;
    return (n - r + 1) * nPr(n, r - 1);
}

int nCr(int n, int r)
{
    return nPr(n, r) / nPr(r, r);
}

int main()
{
    int n, r;
    printf("n:");
    scanf("%d", &n);
    printf("r:");
    scanf("%d", &r);
    printf("nPr:%d\nnCr:%d", nPr(n, r), nCr(n, r));
}