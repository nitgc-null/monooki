#include <stdio.h>
#include <string.h> //������������Ƃ��ɓǂݍ���
int main()
{
    char s1[100];
    char s2[100];
    char s3[]="abcd"; //��r������
    int n,m;//�߂�l�p
    printf("s1 �����:");
    scanf("%s",s1); //s1 �ɃL�[�{�[�h����
    n=strlen(s1); //n�@�� s1 ��������̒�������
    printf("������̒��� : %d\n",n);
    strcpy(s2,s1); //s2 �� s1 ���R�s�[
    printf("s1���R�s�[ s2:%s\n",s2);
    m=strcmp(s1,s3); //s1 �� s3 ���r
    printf("��r������:%s", s3);
    if(m==0)
        printf(" ��v"); //s1 �� s3 ����v�����Ƃ��ɏo��
}
