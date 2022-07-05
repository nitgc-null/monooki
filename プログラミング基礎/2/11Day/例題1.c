#include <stdio.h>
int main()
{
	int a;	 //変数の宣言
	int *pa; //ポインタ変数の宣言
	a = 5;
	pa = &a; //ポインタ変数paにaのアドレスを代入
	printf("aの値:%d aのアドレス:%p\n", a, &a);
	printf("paの値:%p pa のアドレス:%p pa関節参照先の値:%d\n", pa, &pa, *pa);
}