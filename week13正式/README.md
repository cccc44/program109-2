## the thirteenth week
正課練習題
### one
Processing時間倒數器練習--step01 使用size()還有background()開出有背景色的窗
```C
size(1024,400);
background(128,158,182);
```
### two
Processing時間倒數器練習--step02 互做mousePressed的互動,先有void setup()及 void draw(),再用if(mousePressed) 及else來切換
```C
void setup(){
  size(1024,400);
}
void draw(){
 if(mousePressed) background(128,158,182);
 else background(170,217,211);
}
```
### three
Processing時間倒數器練習--step03 用textSize()調字大小,text()畫出字,void mousePressed()做按下去的動作
```C
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
```
### four
Processing時間倒數器練習--step04 利用hour()小時,minute()分鐘,second()秒,再用特別的字串加法,顯示垷在的時間
```C
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
```
### five
Processing時間倒數器練習--step05 利用 textFont()改成字型createFont()的標楷體, 甪乘上60 60 來算出總秒數
```C
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
 text( "總秒數:"+total,100,200);
}
```
### six
Processing時間倒數器練習--step06 把總秒數 像找零錢方法 利用 取餘數 算出時、分、秒
```C
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
```
