//小文字→大文字
#include <stdio.h>
int main()
{
    char c, ct;
    scanf("%c", &c); //cにキーボード入力
    ct = c - 32;
    printf("文字:%c 16進数:%X 10進数:%d\n", c, c, c);       //表示
    printf("大文字に変換→文字:%c 16進数:%d\n", ct, ct, ct); //表示
}