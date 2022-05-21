#include <stdio.h>
int main()
{
    int d[] = {1, 3, 5, 7, 4, 7, 2, 9, 0, 6, -1};
    int max = 0;
    for (int i = 0; d[i] > 0; i++)
    {
        max = (d[i] > max) ? d[i] : max;
    }
    printf("max=%d", max);
}