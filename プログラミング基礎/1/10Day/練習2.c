//���[�U�[�֐����g����z=x+y�̌v�Z
#include <stdio.h>
int add(int, int);//�v���g�^�C�v�錾
int main()
{
    int x,y,z;
    printf("x�̒l:");
    scanf("%d", &x);
    printf("y�̒l:");
    scanf("%d", &y);
    z=add(x, y);//�֐��̌Ăяo�� x,y��()���ɏ��������� z�ɖ߂�l
    printf("z�̒l: %d",z);
}
//�쐬����֐�add ������̉��Z���ʂ�Ԃ�
int add(int a, int b)   //�������ɓ��ꂽ���̂�a�ɑ������ɓ��ꂽ���̂�b�ɂȂ�
{
    int c;//���Z���ʂ�����
    c=a+b;
    return c;//�߂�l�Ƃ��Ĥc��Ԃ� (c���g�킸�Areturn a+b; �ł��\)
}
