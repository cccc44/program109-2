void setup(){
  size(400,200); 
 fill(174,182,244);
 textSize(40);
}
float shift=0, v=0;//開始時速度為0
void mousePressed(){
 v=random(10)+5; 
}
void draw(){
 background(185,234,193);
 for(int i=0;i<24;i++){
  if(i%3==0) fill(0);
  if(i%3==1) fill(255);
  if(i%3==2) fill(200,180.0);
  float start=radians(0+shift+i*360/24);
  float stop=radians(360/24+shift+i*360/24);
  arc(100,100, 180,180, start,stop);
 }
 if(v>0.1){//在還有速度時，轉動
 shift+=v;//轉動的速度
 v=v*0.99;//速度會慢慢減速
 }
 text(shift,200,100);//印出shift
 text(v,200,150);//印出轉動的速度
}
