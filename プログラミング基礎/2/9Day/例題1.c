#include <stdio.h>
#define N 6
int main()
{
    int a[N];
    int temp;
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]); //キーボードから配列入力
    printf(" a:");
    for (int i = 0; i < N; i++)
        printf("%d", a[i]);
    //逆順に入れ替え
    for (int i = 0; i < N / 2; i++)
    {
        temp = a[i];
        a[i] = a[N - i - 1];
        a[N - i - 1] = temp;
    }
    printf("\nr_a:"); //逆順にしたものを出力
    for (int i = 0; i < N; i++)
        printf("%d", a[i]);
}