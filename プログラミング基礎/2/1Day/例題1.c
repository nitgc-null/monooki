#include <stdio.h>
int main()
{
    int a = 5, b = 10, c;
    c = (a > b) ? a : b; //a>bならa,そうでないならbを代入
    printf("%d", c);
}