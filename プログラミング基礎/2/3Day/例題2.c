#include <stdio.h>
#define N 0
int main()
{
    int i = 0;
    while (i < N)
    {
        printf("while:d\n", i);
        i++;
    }
    i = 0;
    do
    {
        printf("do-while:%d\n", i);
        i++;

    } while (i < N);
}