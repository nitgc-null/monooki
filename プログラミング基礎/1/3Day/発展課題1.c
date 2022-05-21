#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d[] = {20, 45, 84, 50, 23, 91, 73, 1, 35, 68};
    int counter_e = 0; // d配列の偶数カウンター
    int counter_o = 0; // d配列の奇数カウンター
    int i;
    for (i = 0; i < 10; i++)
    {
        if (d[i] % 2 == 0)
        {
            counter_e++;
        }
        else
        {
            counter_o++;
        }
    }
    int *even = (int *)malloc(sizeof(int) * counter_e);
    int *odd = (int *)malloc(sizeof(int) * counter_o);
    counter_e = 0; //初期化
    counter_o = 0; //初期化
    for (i = 0; i < 10; i++)
    {
        if (d[i] % 2 == 0)
        {
            even[counter_e] = d[i];
            printf("偶数 : %d\n", even[counter_e]);
            counter_e++;
        }
        else
        {
            odd[counter_o] = d[i];
            printf("奇数 : %d\n", odd[counter_o]);
            counter_o++;
        }
    }
}