size(365, 365);

int x, y;
x = 20;
y = 10;
ellipse(y, y, x, x);
y = 20;
ellipse(y, y, x, x);
y = 40;
ellipse(y, y, x, x);

String text;
text = "hoge";
print(text);

int number, X, Y;
number = 1;
X = 100; 
Y = 100;
// textsize();
while (number <= 10) {
  println(number);
  text(number, X, Y);
  number ++;
  Y += 25;
}
