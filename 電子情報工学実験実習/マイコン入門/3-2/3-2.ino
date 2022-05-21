const int buttonPin = 7;
// pushbuttonが接続されているピン
const int ledPin = 12;
// LEDが接続されているピン

int buttonState = 0;
// pushbuttonの状態がこの変数に記憶される

void setup()
{
    // ledPinピンをLED出力に設定
    pinMode(ledPin, OUTPUT);
    // buttonPinをpushbuttonの入力に設定
    pinMode(buttonPin, INPUT);
}
void loop()
{
    //入力を読み取り変数に記憶
    buttonState = digitalRead(buttonPin);

    // pushbuttonが押されているかをチェック
    //押されているとHIGHを出力
    if (buttonState == HIGH)
    {
        // LEDをオン
        digitalWrite(ledPin, HIGH);
    }
    else
    {
        // lEDをオフ
        digitalWrite(ledPin, LOW);
    }
}
