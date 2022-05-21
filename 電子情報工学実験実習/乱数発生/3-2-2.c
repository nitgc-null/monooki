#include <stdio.h>
void output(int);
void main()
{
    int a = 66,
        b = 32,
        m = 727,

    int x[122];
    x[0] = b;
    for (int n = 0; n < 122; n++) // 合同法乱数
    {
        x[n + 1] = (a * x[n]) % m;
    }

    /* 3-2(2) */
    do
    {
        printf("Enter a natural number greater than or equal to 100! : ");
        scanf("%d", &c);
    } while (c == 0 || c < 0 || c > 100);

    y = (x[c] % 6) + 1;
    output(y);
}

void output(int input) //疑似サイコロの目
{
    printf("　 　 ＿＿＿＿＿＿\n");
    switch (input)
    {
    case 1:

        printf("　　 　 ／ 　 ＿　　　　 ／|\n");
        printf("　　 ／.　 （圭圭）　 .／　 |\n");
        printf("／　  　￣  ／\n");
        break;
    case 2:
        printf("　　／　 　 ●　／\n");
        printf("　／　 　     ／\n");
        printf("／　 ●　 　／\n");
        break;
    case 3:
        printf("　  ／　 　 ●  ／\n");
        printf("　／　  ●　  ／\n");
        printf("／　●　 　 ／\n");
        break;
    case 4:
        printf("　  ／ ●　 ●  ／\n");
        printf("　／　  　 　 ／\n");
        printf("／ ●　 ●　／\n");
        break;
    case 5:
        printf("　  ／  ●   ● ／\n");
        printf("　／　  ● 　 ／\n");
        printf("／ ●　 ●　／\n");
        break;
    case 6:
        printf("　  ／.● ● ●.／\n");
        printf("　／  　 　　 ／\n");
        printf("／.● ● ●.／\n");
        break;
    }
    printf("￣￣￣￣￣￣");
}
