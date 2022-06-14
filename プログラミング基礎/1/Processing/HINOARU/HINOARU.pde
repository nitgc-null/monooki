PImage Emperor;

int x = 0; //<>//
int y = 0; //<>//
void setup() {
  size(720,480);
  noStroke();
  
  Emperor = loadImage("https://www.nippon.com/ja/ncommon/contents/japan-topics/127351/127351.jpg", "jpg");
  
}
void draw() {
  background(255);
  if ( keyPressed == true && keyCode == RIGHT ) {
    x += 10;
  }
  if ( keyPressed == true && keyCode == LEFT ) {
    x -= 10;
  }
  if ( keyPressed == true && keyCode == UP ) {
    y -= 10;
  }
  if ( keyPressed == true && keyCode == DOWN ) {
    y += 10;
  }
  fill(255,0,0);
  ellipse(x, y, 288,288);
  if( mousePressed == true){
    x = 0;
    y = 0;
}
  text("X座標 : "+ x,650,30);
  text("Y座標 : "+ y,650,40);
  if(x == 360 && y == 240){
    Emperor.resize(720,480);
    background(Emperor);
  }}
