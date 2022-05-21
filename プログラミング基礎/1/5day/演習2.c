#include <stdio.h>
int main()
{

    int result[2][10] = {{78, 65, 82, 97, 55, 87, 45, 65, 72, 51}, {87, 45, 77, 93, 59, 60, 41, 70, 80, 49}};
    int counter_math = 0;
    int counter_english = 0;

    for (int i = 0; i < 10; i++)
    {
        if (result[0][i] <= 50)
        {
            counter_math++;
        }
        if (result[1][i] <= 50)
        {
            counter_english++;
        }
    }
    printf("数学 : %d人\n", counter_math);
    printf("英語 : %d人\n", counter_english);
}