void setup(){
  size(1024,400);
  textFont( createFont("標楷體",50));
}
void draw(){
 background(170,217,211);
 textSize(50);
 int h=hour();
 int m=minute();
 int s=second();
 text( "Now:"+h+":"+m+":"+s,100,100);
 int total=h*60*60+m*60+s;
 int total2=12*60*60+0*60+0;
 text( "總秒數:"+total,100,200);
 int ans=total2=total;
 int hh=ans/60/60%60,mm=ans/60%60,ss=ans%60;
 text("還剩下:"+hh+":"+mm+":"+ss,100,300);
}
