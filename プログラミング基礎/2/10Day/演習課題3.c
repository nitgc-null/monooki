#include <stdio.h>
void lewtu(const double array[][3], double *x, double *y)
{
    double matrix;
    matrix = array[0][0] * array[1][1] - array[0][1] * array[1][0];
    if (matrix == 0)
    {
        printf("連立方程式の解がありまちぇん。\n");
    }
    else
    {
        *x = (array[0][2] * array[1][1] - array[0][1] * array[1][2]) / matrix;
        *y = (array[0][0] * array[1][2] - array[0][2] * array[1][0]) / matrix;
    }
}

int main()
{
    double array[2][3] = {0}, x, y;
    printf("えー : ");
    scanf("%lf", &array[0][0]);
    printf("びー : ");
    scanf("%lf", &array[0][1]);
    printf("しー : ");
    scanf("%lf", &array[0][2]);
    printf("でぃー : ");
    scanf("%lf", &array[1][0]);
    printf("いー : ");
    scanf("%lf", &array[1][1]);
    printf("えふー : ");
    scanf("%lf", &array[1][2]);
    lewtu(array, &x, &y);
    printf("えっくすー : %f\n", x);
    printf("わいー : %f\n", y);
}