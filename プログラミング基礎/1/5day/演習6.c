#include <stdio.h>

int keyword_counter(const char word[], int result)
{
    int keyword_counter = 0;

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == result)
        {
            keyword_counter++;
        }
    }
    return (keyword_counter);
}

int main()
{

    char keyword[31]; //特定の文字列を格納用変数宣言
    printf("特定の文字を入力(英数字)\n");
    scanf("%s", keyword);

    char word[31]; //入力された文字列を格納用変数宣言
    printf("文字列を入力(英数字)\n");
    scanf("%s", word);

    printf("特定の文字の文字数 : %d", keyword_counter(word, keyword[0]));
}