//数あてゲーム　time関数利用
#include <stdio.h>
#include <stdlib.h>
#include <time.h>//時間にかかわる関数を利用するときに用いる
int main(){
    int ans,n;
    srand((unsigned int)time(NULL));//乱数の種に現在時刻を利用
    ans=rand()%100;//乱数を100で割った余り
    printf("数当てゲーム : 0~99の整数を当ててみよう！\n");
    while(1){
        scanf("%d", &n);
        if (ans == n){
            printf("正解！");
            break;
        }
        else if(ans>n){
            printf("もっと大きい\n");
        }
        else{
            printf("もっと小さい\n");
        }
    }
}