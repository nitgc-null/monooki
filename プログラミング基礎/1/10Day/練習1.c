#include <stdio.h>
#include <string.h> //文字列を扱うときに読み込む
int main()
{
    char s1[100];
    char s2[100];
    char s3[]="abcd"; //比較文字列
    int n,m;//戻り値用
    printf("s1 を入力:");
    scanf("%s",s1); //s1 にキーボード入力
    n=strlen(s1); //n　に s1 文字列をの長さを代入
    printf("文字列の長さ : %d\n",n);
    strcpy(s2,s1); //s2 に s1 をコピー
    printf("s1をコピー s2:%s\n",s2);
    m=strcmp(s1,s3); //s1 と s3 を比較
    printf("比較文字列:%s", s3);
    if(m==0)
        printf(" 一致"); //s1 と s3 が一致したときに出力
}
