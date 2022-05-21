#include <stdio.h>
int main(){
    char str[31];
    int i;
    int str_counter=0;
    printf("30文字以下の文字列を入力してください。\n");
    scanf("%s",str);
    for (i=0;str[i]!='\0';i++){
        str_counter++;
    }
    printf("入力された文字列の長さは%d文字です。",str_counter);
}