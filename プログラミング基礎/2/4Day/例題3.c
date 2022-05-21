#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    int a;
    do
    {
        printf("整数を入力してください:");
        scanf("%d", &n);
        a = 1;
        for (int i = 1; i <= n; i++)
            a *= i;
        printf("%d\n", a);
        printf("継続:n以外 終了:n\n");
    } while (getch() != 'n'); //getchは一文字を読み込む nと比較
}
