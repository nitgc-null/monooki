#include <stdio.h>
#define N 5
void judgement(int *, int *, int *);
int main()
{
    int b[N] = {1, 88, 40, 97, -1}, max, min;
    judgement(b, &max, &min);
    printf("max:%d min:%d\n", max, min);
}
void judgement(int *b, int *max, int *min)
{
    *max = b[0], *min = b[0];
    for (int i = 0; b[i] != -1; i++)
    {
        if (*max < b[i])
        {
            *max = b[i];
        }
        if (*min > b[i])
        {
            *min = b[i];
        }
    }
}