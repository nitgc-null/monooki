//キーボード入力の数値10個(整数)を配列に入れ、配列内の50以上の数値のみ表示する
#include <stdio.h>
int main(){
    int d[10];
    int i;
    for(i=0;i<10;i++){
        printf("%d番目の数値を入力してください。",i+1);
        scanf("%d",&d[i]); //配列dの各要素に入力 &
    }
    printf("50以上の数値を出力\n");
    for(i=0;i<10;i++){
        if(d[i]>=50){
            printf("%d\n",d[i]);
            } //50以上なら出力
    }
}