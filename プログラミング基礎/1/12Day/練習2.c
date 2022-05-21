#include <stdio.h>
int main()
{
    int a, b;     //変数の宣言
    int *pa, *pb; //ポインタ変数を宣言
    a = 5, b = 10;
    pa = &a; //ポインタ変数 pa に a のアドレスを代入
    pb = &b; //ポインタ変数 pa に a のアドレスを代入
    *pa = 50;
    printf("aの値:%d aのアドレス:%p\n", a, &a);
    printf("paの値:%p paのアドレス:%p paの関節参照先の値:%d\n", pa, &pa, *pa);
    *pb = *pb + 100; //関節参照先への値の代入
    printf("bの値:%d bのアドレス:%p\n", b, &b);
    printf("pbの値:%p pbの値:%p pbの関節参照先の値:%d\n", pb, &pb, *pb);
}