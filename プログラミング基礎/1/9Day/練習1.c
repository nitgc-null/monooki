//正方形の面積から一辺の長さを計算
#include <stdio.h>
#include <math.h>
int main(){
    double s;//面積用
    double l;//辺の長さ
    printf("正方形の面積:");
    scanf("%lf",&s);
    l=sqrt(s);//平方根関数 戻り値が引数の平方根
    printf("辺の長さ:%.2f",l);
}