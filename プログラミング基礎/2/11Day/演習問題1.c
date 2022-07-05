#include <stdio.h>
void swap(int *, int *);
int main()
{
    int a = 20, b = 30;          //変数の宣言
    printf("a:%d b:%d\n", a, b); //入れ替え前
    swap(&a, &b);                //アドレスを渡す
    printf("a:%d b:%d\n", a, b); //入れ替え後
}
//関数swapを以下に記述
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}