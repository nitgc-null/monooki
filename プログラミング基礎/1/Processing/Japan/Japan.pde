PImage Emperor, Sovet, Korea;
void setup() {
  size(1920, 1080);
  background(255);
  fill(255, 0, 0);
  ellipse(960, 540, 648, 648);
  noStroke();

  Emperor = loadImage("https://www.nippon.com/ja/ncommon/contents/japan-topics/127351/127351.jpg", "jpg");
  Sovet = loadImage("https://images-na.ssl-images-amazon.com/images/I/51J-woGQbmL._AC_SL1500_.jpg", "jpg");
  Korea = loadImage("https://www.civillink.net/sozai/images/pics2642.gif", "gif");
  Korea.resize(1920, 1080);
  
  println("嘘は嘘であると");
println("　見抜けぬ人でないと");
println("　プログラミングは難しい");
println("　　　　＿＿_＿");
println("　　　／へへ　 ＼");
println("　　／／⌒⌒＼　 ＼");
println("　 / /　　　　ヽ　 ヽ");
println("　｜｜ヽ　／⌒ |　　|");
println("　 ﾚY-･／　-･- ヽ　 |");
println("　　| /　　　　 Ｖ) |");
println("　　|(＿つ　 ･　 丿ノ");
println("　　|＜三三＞)　/ /");
println("　　ヽ　ﾞﾞ　　／ﾚｿ");
println("　　　＼从ww／　｜");
println("　　　　/)￣　　∧");
println("　　　／ﾚヽ　 ／ |＼");
println("　　 ｜|　|　｜⌒ |｜");

}

void draw() {
  background(255);
  fill(255, 0, 0);
  ellipse(960, 540, 648, 648);
  switch (mouseButton) {
    case LEFT:
    image(Emperor, mouseX, mouseY, 640, 438.5);
    break;
    case RIGHT:
    Emperor.resize(1920,1080);
    background(Emperor);
    fill(255, 0, 0);
    ellipse(960, 540, 540, 540);
    break;
  }
  if (keyPressed == true) {
    background(190, 0, 2);
    image(Sovet, 0, 0);
    if (mousePressed == true) {
      background(0, 0, 0);
      image(Korea, 0, 0);
    }
  }
}
