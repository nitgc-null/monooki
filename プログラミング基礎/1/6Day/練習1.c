//文字コード表示
#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);                                  //cにキーボード入力
    printf("文字:%c 16進数:%X 10進数:%d\n", c, c, c); //表示
}