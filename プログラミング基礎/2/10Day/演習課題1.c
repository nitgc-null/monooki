#include <stdio.h>
#define N 32
void convert_string(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
}
int main()
{
    char str[N];
    printf("Enter text:");
    scanf("%s", str);
    convert_string(str);
    printf("Converted characters : %s", str);
}
