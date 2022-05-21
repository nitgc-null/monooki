//文字列の長さを表示する
#include <stdio.h>
#include <string.h> //文字列関連の関数利用時にこれを書く
int main()
{
    char str[100];
    int n;
    scanf("%s", str);
    n = strlen(str); //str内の文字列の長さを調べて戻り値で返す
    printf("文字列の長さ:%d", n);
}