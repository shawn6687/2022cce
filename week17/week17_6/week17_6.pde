void setup(){
  size(400,400);
}
int result=0;
void draw(){
  background(#FFFFF2);
  if(dist(mouseX,mouseY,300,300)<50)fill(0,255,0);
  else fill(255,255,0);
  ellipse(300,300,100,100);
  
  fill(0);
  textSize(30);
  text("Press Me",300-50,300);
  if(mousePressed) result = int(random(10));
  text(result, 100,200);
}
