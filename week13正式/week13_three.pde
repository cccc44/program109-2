void setup(){
  size(1024,400);
}
void draw(){
 if(mousePressed) background(128,158,182);
 else background(170,217,211);
 textSize(50);
 text(a,100,100);
}
int a=0;
void mousePressed(){
 a++; 
}
