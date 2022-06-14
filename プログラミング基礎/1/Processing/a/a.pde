int x[] = new int [30]; //10個円のx座標
int y[] = new int [30]; //y座標
int rgb[] = new int [30];

void setup() {
  size(500, 500);
  for (int i=0; i<30; i++) {
    x[i] = 0; //初期の座標を
    y[i] = 0; //初期の座標を
  }
}

void draw() {
    background(100);//画面リセット
    x[0] = mouseX; 
    y[0] = mouseY;
    rgb[0]= 255;
    fill(rgb[0],rgb[0],rgb[0]);
    ellipse(x[0], y[0], 30, 30);
    for (int i=29; i>0; i--) {
      x[i] = x[i-1];
      y[i] = y[i-1];
      rgb[i] = rgb[i]-8*i;
      fill(rgb[i],rgb[i],rgb[i]);
      ellipse(x[i], y[i], 30, 30);
    }
  }
