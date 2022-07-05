#include <stdio.h>
void sort3(int *);
int main()
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    sort3(a);
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", a[i]);
    }
}
void sort3(int *a)
{
    int temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}