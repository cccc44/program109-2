void setup(){
  size(400,200); 
 fill(174,182,244);
 textSize(40);
}
float shift=0, v=10;//開始時速度為10
void draw(){
 background(185,234,193);
 float start=radians(90+shift);
 float stop=radians(180+shift);
 arc(100,100, 180,180, start,stop);
 if(v>0.0001){//在還有速度時，轉動
 shift+=v;//轉動的速度
 v=v*0.99;//速度會慢慢減速
 }
 text(shift,200,100);//印出shift
 text(v,200,150);//印出轉動的速度
}
