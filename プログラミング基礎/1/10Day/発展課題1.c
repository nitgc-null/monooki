// ���[�U�֐�x��n��
#include <stdio.h>
int pw(int,int);//�v���g�^�C�v�錾���L�q
int main()
{
    int x,n,a; //a�͌v�Z���ʗp
    printf("x�̒l:");
    scanf("%d", &x);
    printf("n�̒l:");
    scanf("%d", &n);
    a=pw(x, n);//�֐��̌Ăяo��
    printf("%d��%d��: %d",x, n, a ); //���ʂ̕\��
}

//�֐� pw ���L�q
int pw(int a,int b)
{
    int c=1;
    for(int i=0; i != b; i++)
    {
        c *= a;
    }
    return c;
}
