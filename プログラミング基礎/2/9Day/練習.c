#include <stdio.h>
int func_array(int[]);
int main()
{
    int a[] = {1, 2, 3, 4, 5, -1};
    int b;
    int i;
    b = func_array(a);
    printf("結果:%d\n", b);
    for (i = 0; a[i] >= 0; i++)
        printf("%d", a[i]);
}
int func_array(int n[])
{ //配列の受け渡し 先頭アドレス
    int i, c = 0;
    for (i = 0; n[i] >= 0; i++)
    { //受け渡し配列での計算
        c = c + n[i];
        n[i] = 0; //代入 配列の要素を0に
    }
}