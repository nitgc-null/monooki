#include <stdio.h>
int main()
{
    int i, j;
    int seiseki[4][3] = {{80, 70, 60}, {50, 100, 90}, {60, 80, 70}, {90, 90, 90}};
    float ave[4];
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            ave[i] += seiseki[i][j];
        }
        ave[i] /= 3;
        printf("学籍番号%d:平均点%f\n", i + 1, ave[i]);
    }
}