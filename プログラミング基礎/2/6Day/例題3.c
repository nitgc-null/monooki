#include <stdio.h>
void func1()
{
    static int n = 0; //static利用 静的変数
    int m = 0;        //static利用なし
    n++;
    m++;
    printf("n:%d m:%d\n", n, m);
}
int main()
{
    func1();
    func1();
    func1();
}