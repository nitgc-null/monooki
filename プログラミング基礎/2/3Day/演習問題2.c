#include <stdio.h>
int main()
{
    int decimal, binary = 0, base = 1;

    printf("10進数:");
    scanf("%d", &decimal);
    while (decimal > 0)
    {
        binary = binary + (decimal % 2) * base;
        decimal = decimal / 2;
        base = base * 10;
    }
    printf(" 2進数 = %d\n", binary);
}