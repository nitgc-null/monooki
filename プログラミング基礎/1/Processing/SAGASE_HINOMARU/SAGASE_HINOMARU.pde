int x = 360;
int y = 240;
int w = 288;
int h = 96;
void setup() {
  size(720,480);
  noStroke();
}
void draw(){
  background(255);
  if ((mouseX > x-w) && (mouseX < x+w) && (mouseY > y-h) && (mouseY < y+h)){
    fill(255,0,0);
  }
  else {
    fill(255);
  }
  ellipse(x,y,288,288);
}
