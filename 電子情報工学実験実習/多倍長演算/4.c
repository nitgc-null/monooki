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

/* 多倍長整数の大小比較 : 関数の返却値はa > b で +1 , a == b で 0, a < b で -1 */
int cmp(const int a[], const int b[], int n)
{
    int sign = 0;
    for (int i = 0; i < n && sign == 0; i++)
    {
        if (a[i] > b[i])
        {
            sign = 1;
        }
        else if (a[i] < b[i])
        {
            sign = -1;
        }
    }
    return sign;
}

/*多倍長整数の減算 : c ← a - b, 大小関係んいかかわらずaからbを引く*/
void sub2(int c[], const int a[], const int b[], int n)
{
    int borrow = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        c[i] = a[i] - b[i] - borrow;
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
}
/* 多倍長整数の減算 c ← a - b ,関数の返却値は符号(+1 / 0 / -1) */
int sub(int c[], const int a[], const int b[], int n)
{
    switch (cmp(a, b, n))
    {
    case 0:
        sub2(c, a, b, n);
        break;
    case 1:
        sub2(c, a, b, n);
        break;
    case -1:
        sub2(c, b, a, n);
        break;
    }
    return cmp(a, b, n);
}

/* main関数 */
int main(void)
{
    int a[N], b[N], c[N], return_value;
    inputLongInt(a, N); /* 最大N桁の整数を配列aに入力する */
    inputLongInt(b, N); /* 最大N桁の整数を配列bに入力する */
    return_value = sub(c, a, b, N);
    outputLongInt(c, N); /* 最大N桁の整数が格納された配列aを出力する */
    printf("符号 : %d", return_value);
    return 0;
}
