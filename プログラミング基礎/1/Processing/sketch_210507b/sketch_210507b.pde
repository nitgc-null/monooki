size(1920, 1080);

int x,Apple,number;
x = 5;
Apple = 1;

number = 7;

while (Apple <= number){
  rect(x, x, x*2, x*2);
  ellipse(x*2, x*2, x, x);
  x*=2;
  Apple++;
}

/*
rect(x, x, x*2, x*2);
ellipse(x*2, x*2, x, x);

x*=2;

rect(x, x, x*2, x*2);
ellipse(x*2, x*2, x, x);


x*=2;

rect(x, x, x*2, x*2);
ellipse(x*2, x*2, x, x); */
