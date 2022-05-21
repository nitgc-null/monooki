#include <stdio.h>
int main()
{
    int keyword_counter = 0;

    char keyword[2]; //特定の1文字列を格納
    printf("特定の1文字を入力(英数字)\n");
    scanf("%s", keyword);

    char word[31]; //入力された文字列を格納
    printf("文字列を入力(英数字)\n");
    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == keyword[0])
        {
            keyword_counter++;
        }
    }
    printf("特定の1文字の文字数 : %d", keyword_counter);
}