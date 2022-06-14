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
/* 多倍長整数の除算: c ← a ÷ b , 関数の返却値は余り */
int div(int c[], const int a[], int b, int n)
{
    int borrow = 0;
    for (int i = 0; i < n; i++)
    {
        c[i] = (a[i] + borrow) / b;
        borrow = (a[i] + borrow) % b * 10;
    }
    return borrow / 10;
}
/* main関数 */
int main(void)
{
    int a[N], b, c[N], remainder;
    inputLongInt(a, N); /* 最大N桁の整数を配列aに入力する */
    scanf("%d", &b);
    remainder = div(c, a, b, N);
    outputLongInt(c, N); /* 最大N桁の整数が格納された配列aを出力する */
    printf("余り : %d", remainder);
    return 0;
}
