//配列の初期化と出力
#include <stdio.h>
int main(){
    int i;
    float f[5]= {2.3,1.2,4.0,99.2,85.0}; //配列の初期化
    for(i=0;i<5;i++){
        printf("%d:%.1f",i,f[i]); //for分による配列の中身の表示
        }
}
