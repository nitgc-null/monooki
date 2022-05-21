#include <stdio.h>
int main()
{

    int result[] = {78, 65, 82, 97, 55, 87, 45, 65, 72, 51};
    int counter = 0;

    for (int i = 0; i < 10; i++)
    {
        if (result[i] >= 80)
        {
            counter++;
        }
    }
    printf("%d人", counter);
}