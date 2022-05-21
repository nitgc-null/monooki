#include <stdio.h>
#include <math.h>
#define N 6 // 二次配列用縦6
#define M 4 // 二次配列用横4

double input(double input[N][M])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%lf", &input[i][j]);
        }
    }
}
void output(const double input[N][M], const int column) // 出力
{

    /* 各計算結果格納 */
    double ohm = 0,
           sum = 0,
           sumv = 0,
           ave = 0,
           squ = 0,
           v = 0,
           s = 0;

    int memori_num = 0, data_num = N - 1;

    switch (column) // memori表示切り替え
    {
    case 1:
        memori_num = 4;
        break;
    case 2:
        memori_num = 7;
        break;
    case 3:
        memori_num = 10;
        break;
    }

    printf("       **** memori %d ****\n", memori_num);
    printf("------------------------------------\n");
    printf("     V[V]     I[mA]     R[Ohm]\n");
    printf("------------------------------------\n");
    for (int i = 0; i < N; i++)
    {
        if ((input[i][0] != 0) && (input[i][column] != 0))
        {
            ohm = input[i][0] * 1000 / (input[i][column]);
        }
        else
        {
            ohm = 0;
        }

        printf("%9.2f %9.1f %10.1f\n", input[i][0], input[i][column], ohm);
        sum += ohm;        // 総和
        sumv += ohm * ohm; // 二乗和
    }

    ave = sum / data_num;                // 平均
    squ = sumv - (sum * sum / data_num); // 平方和
    v = squ / data_num;                  // 分散
    s = sqrt(v);                         // 標準偏差

    printf("------------------------------------\n");
    printf("              平均       %.1f\n", ave);
    printf("      ============================\n");
    printf("              分散       %.2f\n", v);
    printf("      ----------------------------\n");
    printf("             標準偏差    %.2f\n", s);
    printf("      ----------------------------\n");
    printf("\n");
}
void main()
{
    double data[N][M]; // 実験データ格納
    input(data);
    output(data, 1);
    output(data, 2);
    output(data, 3);
}
