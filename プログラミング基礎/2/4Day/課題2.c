#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{
    do
    {
        int ans, n;
        srand((unsigned int)time(NULL));
        ans = rand() % 100;
        printf("0~99で答えろ\n");
        while (1)
        {
            scanf("%d", &n);
            if (ans == n)
            {
                printf("正解");
                printf("続ける？ ESCでばいばい\n");
                break;
            }
            else if (ans > n)
            {
                printf("もっと大きい\n");
            }
            else
            {
                printf("もっと小さい\n");
            }
        }
    } while (getch() != 27);
}