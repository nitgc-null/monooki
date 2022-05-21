#include <stdio.h>
#include <stdlib.h>
int main()
{
    char first[31];
    char second[31];
    scanf("%s", first);
    scanf("%s", second);

    int first_int = atoi(first);
    int second_int = atoi(second);

    int sum = first_int + second_int;
    int difference = first_int - second_int;
    int product = first_int * second_int;
    int quotient = first_int / second_int;

    printf("和 : %d\n", sum);
    printf("差 : %d\n", difference);
    printf("積 : %d\n", product);
    printf("商 : %d\n", quotient);
}