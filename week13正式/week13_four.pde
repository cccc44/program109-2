void setup(){
  size(1024,400);
}
void draw(){
 background(170,217,211);
 textSize(50);
 int h=hour();
 int m=minute();
 int s=second();
 text("Now:"+h+":"+m+":"+s,100,100);
}
