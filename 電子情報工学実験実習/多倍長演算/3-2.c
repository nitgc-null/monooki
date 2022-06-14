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
/* 多倍長整数の加算 c ← a + b ,関数の返却値は最大位桁の繰り上がり */
int add(int c[], const int a[], const int b[], int n)
{
    int sum, carry = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        sum = a[i] + b[i] + carry; //同桁で加算
        {
            if (sum < 10) // 繰り上がりなし
            {
                c[i + 1] = sum;
                carry = 0;
            }
            else // 繰り上がりあり
            {
                c[i + 1] = sum % 10;
                carry = 1;
            }
        }
    }
    c[0] = carry;
    return carry;
}

/* main関数 */
int main(void)
{
    int a[N], b[N], c[N + 1], return_add;
    inputLongInt(a, N); /* 最大N桁の整数を配列aに入力する */
    inputLongInt(b, N); /* 最大N桁の整数を配列bに入力する */
    return_add = add(c, a, b, N); /* 計算兼返却値代入 */
    outputLongInt(c, N + 1); /* 最大N桁の整数が格納された配列aを出力する */
    printf("最上位桁の繰り上がり : %d", return_add);
    return 0;
}
