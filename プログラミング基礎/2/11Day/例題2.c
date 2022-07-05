#include <stdio.h>
int main()
{
    int a, b;     //変数の宣言
    int *pa, *pb; //ポインタ変数を千g年
    a = 5, b = 10;
    pa = &a; //ポインタ変数paにaのアドレスを代入
    pb = &b; //ポインタ変数pbにbのアドレスを代入
    printf("aの値:%d aのアドレス:%p\n");
    printf("paの値:%p paのアドレス:%p paの関節参照先の値:%d\n", pa, &pa, *pa);
    *pa = *pa + 100; //関節参照先への値の代入
    printf("bの値:%d bのアドレス:%p\n", b & b);
    printf("pbの値:%p pbのアドレス:%p pbの関節参照先の値:%d\n", pb, &pb, *pb);
}