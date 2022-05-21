#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
int random() //合同法乱数生成部
{
    int a = 66,
        b = 32,
        m = 727,
        y;

    time_t t = time(NULL); //現在時刻取得

    int x[122];
    x[0] = b;
    for (int n = 0; n < 122; n++) // 合同法乱数
    {
        x[n + 1] = (a * x[n]) % m;
    }
    y = (x[t % 60] % 3) + 1; //現在時刻の秒数から算出
    return y;
}
void weather_AA(const int weather)
{
    switch (weather)
    {
    case 1:

        printf("　　　　　　　 　 ＼　│　／\n");
        printf("　　　　　　　　　　彡⌒`ミ\n");
        printf("　　　　　　　　─（ ﾟ ∀ ﾟ ）─\n");
        printf("　　　　　　　　　　＼＿／\n");
        printf("　　　　　　　　　／　│　＼\n");
        printf("\n");
        printf("\n");
        printf("　　　[： ￣￣ 彡⌒ミ￣￣：]\n");
        printf("　　　_|:||￣￣(　ﾟ∀ﾟ)￣￣ |:||_\n");
        printf("　　 |　　　 ～(っ旦c)　　　　　ヽ\n");
        printf("　　　￣| l|'￣￣u u￣￣ | l|￣\n");
        printf("　　　　 ^~　　　　　　 　　 ^~\n");

        break;
    case 2:
        printf("　　　　 ,.:⌒ヽ　　　　（.:: 　 　　　） 　　　　　　　　＼ 　 　　 |　　　　／\n");
        printf("　　　 （.:::　　　　'　　　（　　　　　　　ヽ.:⌒ヽ 　 　 　＼　　　l\n");
        printf("　　　　ゝ.::　　　　｀ヽ(.::　　　　　　　　　 　 　）　　　　　γ' ⌒ヽ　(⌒ 、\n");
        printf("　　　(.:::: 　　　　　　　　　　､.:⌒　　　　 　　　ヽ──‐ （　　　　） ─\n");
        printf("　　(.::::　　　　(:::⌒　　　　　　　　　　　 　　　　　）　　　 丶＿,ノ　　（\n");
        printf("　（.::::　　　　　　　　　　　　　　.:::　　　　　　　Y.::⌒　ヽ　◇　　　　（\n");
        printf("　　（.:::::　　　　　　　　｀).::: 　 　　　　　　　　 　　 　┌┐⌒ヽ⌒\n");
        printf("　　　　　　　　　　　　　　　　　　　　　　　　 彡⌒ ミ\n");
        printf("　　　　　　　　　　　　　　　　　　　　　　　　●ω● ）　あづい…\n");
        printf("　　　　　　　　　　　　　　　　　　　　　 　 　 ノ 　　 U\n");
        printf("　　　　　　　　　　　　　　　　　　　　　　Ｏ＿　Ｏノ\n");

        break;
    case 3:
        printf("　　　　　　　　　　　　/γ　_ 三 ミヽヽ\n");
        printf("　 /γ　_ 三 ミヽヽ　（（ ((( ﾟ∀ﾟ ) )） ） )　/γ　_ 三 ミヽヽ\n");
        printf("　（（ ((( ﾟ∀ﾟ ) )） )　　ヾヽﾐ 三彡, ソノ　 （（ ((( ﾟ∀ﾟ ) )） ) ヾ\n");
        printf("　　ヾヽﾐ 三彡, ソ　　　 ）ﾐ　彡ノ 丿 　　 ヾヽﾐ 三彡, メ　 ） 丶\n");
        printf("　　　　）ﾐ　彡ノ　　　　　}ミ三彡 {　　　 （（ ((）ﾐ　彡( )） )\n");
        printf("　　　（ミﾐ彡（　‐＝ﾆニ二二二二ニﾆ＝‐ヾヽﾐ 三彡, ソ\n");
        printf("　　　 ヾミ三彡| | | |　ヾﾐミﾐ三≡彡| | | |　/,//;./,'/';/\n");
        printf("　　　丿ﾐ ≡彡∪ !_!　　　　　　　　 !_!.∪/,,/,,,,///'/,\n");
        break;
    }
}

void output(const int input) //出力部
{
    system("cls");
    char *weather_string[3] = {"晴れ", "暑い", "台風"};
    printf("お天気誤報が明日の天気をお届けします。\n");
    printf("明日の天気は、%sでしょう。\n", weather_string[input - 1]);
    weather_AA(input);
}

void main()
{
    output(random());
}
