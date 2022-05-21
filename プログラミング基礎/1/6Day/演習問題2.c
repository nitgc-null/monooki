#include <stdio.h>
int main()
{
    char str[31];
    char key[2];
    int counter = 0;
    scanf("%s", str);
    scanf("%s", key);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == key[0])
        {
            counter++;
        }
    }

    printf("%d", counter);
}
