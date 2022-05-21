#include <stdio.h>
int main()
{

    int i, moji = 0;
    char str[19] = {"kamabokogonpatirou"};
    for (i = 0; i < 19; i++)
    {
        if (str[i] < 'k')
        {
            moji++;
            printf("%c", str[i]);
        }
    }
    printf("%d", moji);
}