int led = 12;
// LEDをデジタルピン12に接続

void setup()
{
    pinMode(led, OUTPUT);
    //デジタルピン12を出力に設定
}
void loop()
{
    digitalWrite(led, HIGH);
    // LEDを点ける
    delay(1000);
    // 1秒待つ
    digitalWrite(led, LOW);
    // LEDを消す
    delay(1000);
    // 1秒待つ
}