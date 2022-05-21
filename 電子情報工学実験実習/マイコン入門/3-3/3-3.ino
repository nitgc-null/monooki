const int LED = 11;
// LEDが接続されているピン
int val = 0;
// CdSセルの状態がこの変数に記憶される
void setup()
{
    pinMode(LED, OUTPUT);
    // LEDピンをlED出力に設定
}

void loop()
{
    val = analogRead(0);
    // CdSセルから値を読み取り

    analogWrite(LED, val / 4);
    // CdSセルから値を明るさとしてLED点滅
    delay(10); //少し待つ
}