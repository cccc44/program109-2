## the fifteenth week
正課練習題
### one
Processing倒數計時--step01 second()秒鐘,textSize()字型大小,test()畫出字,setup()做一次,draw()每秒做60次
```C
void setup(){
 size(400,200);
 textSize(40);
}
void draw(){
  background(128,158,182);
  int s=second();
  text(s,100,100);
}
```
### two
Processing倒數計時--step02 利用餘數及減法,來做出9到0的倒數計時
```C
void setup(){
 size(400,200);
 textSize(40);
}
void draw(){
  background(128,158,182);
  int s=second();
  text(9-s%10,100,100);
}
```
### three
Processing播出聲音--step03 要先用Sketch-Library-Add Library加入Sound,接下來照著老師hackmd的教學,剪貼程式碼,再把mp3檔放進去PDE寫程式的地方
```C
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  player=new SoundFile(this,"tada.mp3");
}
void draw(){
  background(128,158,182);
}
void mousePressed(){
 player.play(); 
}
```
### four
Processing倒數計時並播出聲音--step04 把第01,02,03的step合併,以step02為主,插入step03的宣告、初始化、play播放,但每秒播60次,很吵
```C
import processing.sound.*;
SoundFile player;
void setup(){
 size(400,200);
 textSize(40);
 player=new SoundFile(this,"tada.mp3");
}
void draw(){
  background(128,158,182);
  int s=second();
  text(9-s%10,100,100);
  if(9-s%10 == 0) player.play();
}
```
### five
Processing倒數計時並播出聲音--step05 要有更好的聲音播放,所以if( player.isPlaying() )時,要stop(), 否則 play(), 記得要換bell mp3哦
```C
import processing.sound.*;
SoundFile player;
void setup(){
  size(400,200);
  player=new SoundFile(this,"bell.mp3");
}
void draw(){
  background(128,158,182);
}
void mousePressed(){
 if(player.isPlaying()){
  player.stop(); 
 }
 else{
  player.play(); 
 }
}
```
### six
Processing--step06 新增程式頁面,切換成p5 js模式,利用 MaKey教授的網頁,將processing to p5 js converter轉換,貼上,執行,就會開網頁
```C
function setup(){
 createCanvas(400,200);
 textSize(40);
}
function draw(){
  background(128,158,182);
  let s=second();
  text(s,100,100);
}
```
