#include <stdio.h>
int main()
{
    int month; //月
    scanf("%d", &month);
    switch (month)
    { //switchによる分岐
    case 12:
    case 1:
    case 2:
        printf("Winter");
        break;
    case 3:
    case 4:
    case 5:
        printf("Spring");
        break;
    case 6:
    case 7:
    case 8:
        printf("Summer");
        break;
    case 9:
    case 10:
    case 11:
        printf("Autumn");
        break;
    default:
        printf("error");
    }
}