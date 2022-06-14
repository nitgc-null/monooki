/* 多倍長整数の演算 */
#include <stdio.h>
#define N 16 /* 最大桁数 */

/* n(<=N)桁の多倍長整数を読み込み，配列x[]に格納する関数
 * 注意:N文字以上入力しないこと
 */
void inputLongInt(int x[], int n)
{
    char s[N + 3]; /* 改行文字とNULL文字を考慮し3文字分多く確保 */
    int len = 0, i;
    fgets(s, sizeof(s), stdin); /* キーボードから入力 */
    while (s[len] != '\0')
    {
        if (s[len] == '\n' || s[len] == '\r')
            s[len] = '\0'; /* 改行文字は含めない */
        else
            len++; /* 桁数を数える */
    }
    if (len > n)
        len = n; /* 先頭のn桁を読み込み対象とする */
    for (i = 0; i < n; i++)
    {
        if (i < n - len)
        {
            x[i] = 0; /* 0を埋める*/
        }
        else
        {
            x[i] = (int)(s[i - (n - len)] - '0');
        }
    }
    return;
}
/*x[]に格納された整数を出力*/
void outputLongInt(const int x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", x[i]);
    }
    printf("\n");
}
/* 多倍長整数の減算 c ← a - b ,関数の返却値は符号(+1 / 0 / -1) */
int sub(int c[], const int a[], const int b[], int n)
{
    int sign = 0, borrow = 0;
    for (int i = 0; i < n; i++) // a[] と b[] の大小比較
    {
        if (a[i] > b[i]) // a[i] > b[i] : +1
        {
            sign = 1;
            break;
        }
        else if (a[i] < b[i]) // a[i] < b[i] : -1
        {
            sign = -1;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--) // 大小比較をもとに減算
    {
        switch (sign) // 符号をもとに計算
        {
        case 0: // a == b
            c[i] = 0;
            break;
        case 1: // a > b
            c[i] = a[i] - b[i] - borrow;
            break;
        case -1: // a < b
            c[i] = b[i] - a[i] - borrow;
            break;
        }
        if (c[i] < 0)
        {
            borrow = 1;
            c[i] += 10;
        }
        else if (c[i] > 0)
        {
            borrow = 0;
        }
        else if (c[i] == 0)
        {
            borrow = 0;
        }
    }

    return sign;
}

/* main関数 */
int main(void)
{
    int a[N], b[N], c[N], return_sub;
    inputLongInt(a, N);           /* 最大N桁の整数を配列aに入力する */
    inputLongInt(b, N);           /* 最大N桁の整数を配列bに入力する */
    return_sub = sub(c, a, b, N); /* 計算兼返却値代入 */
    outputLongInt(c, N);          /* 最大N桁の整数が格納された配列aを出力する */
    printf("符号 : %d", return_sub);
    return 0;
}
