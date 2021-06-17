## the sixteenth week
正課練習題
### one
Processing大轉盤--step01 利用ellipse()畫出圓形,設定圓心,寬,高,再利用void setup()設定size()大小,在draw()有background(RGB三色)
```C
void setup(){
  size(400,200);
}
void draw(){
 background(41,209,214);
 ellipse(50,50, 80,80);//(圓心, 寬,高);
}
```
### two
Processing大轉盤--step02 使用arc()來畫圓弧,參數和ellipse很像,圓心,寬,高,後面start,stop利mouseX除50.0 來輔助了解PI 3.14 就是半圓,換了色彩才看得清楚
```C
void setup(){
 size(400,200); 
}
void draw(){
 background(185,234,193);
 fill(255);
 ellipse(100,100, 180,180);
 fill(174,182,244);
 float stop=mouseX/50.0;
 text(stop,200,100);
 arc(100,100, 180,180, 0, stop);
}
```
### three
Processing大轉盤--step03 老師解釋 度degrees 及 弧度radians 的差別, 並且改用 radians()函式,來幫助你理解 start 和 stop 代表開始角度、結束角度
```C
void setup(){
 size(400,200); 
 fill(174,182,244);
 textSize(40);
}
void draw(){
 background(185,234,193);
 arc(100,100, 180,180, radians(90),radians(180));//radians(90)表開始角度，radians(180)表結束角度
}
```
### four
Processing大轉盤--step04 了解arc()裡的start,stop要用radians單位後,我們利用 shift移動量的變數,讓它每秒轉動60度,利用radians()換算角度
```C
void setup(){
  size(400,200); 
 fill(174,182,244);
 textSize(40);
}
float shift=0;
void draw(){
 background(185,234,193);
 float start=radians(90+shift);
 float stop=radians(180+shift);
 arc(100,100, 180,180, start,stop);
 shift+=1;
}
```
### five
Processing大轉盤--step05 利用變數v讓轉動的速度可調整,慢慢 v乘0.99變慢, 最後很慢時停下來
```C
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
```
### six
Processing大轉盤--step06 利用mousePressed()觸發 random()讓v可以是亂數,每按一次mouse就會有新的轉動速度,也把停止速度改一下。+5是為了讓v介於5-15之間
```C
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
 float start=radians(90+shift);
 float stop=radians(180+shift);
 arc(100,100, 180,180, start,stop);
 if(v>0.1){//在還有速度時，轉動
 shift+=v;//轉動的速度
 v=v*0.99;//速度會慢慢減速
 }
 text(shift,200,100);//印出shift
 text(v,200,150);//印出轉動的速度
}
```
### seven
Processing大轉盤--step07 利用for迴圈,畫出24片小Pizza,會組合成很大的pizza,分別利用if(餘數)來填上不同的顏色,start及stop的計算看起來很複雜,其實就是把整個圓蓋起來
```C
void setup(){
  size(400,200); 
 fill(174,182,244);
 textSize(40);
}
float shift=0, v=0;//開始時速度為10
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
```
### seven-2(p5.js)
Processing大轉盤--step07 利用for迴圈,畫出24片小Pizza,會組合成很大的pizza,分別利用if(餘數)來填上不同的顏色,start及stop的計算看起來很複雜,其實就是把整個圓蓋起來
```C
function setup(){
  createCanvas(400,200); 
 fill(174,182,244);
 textSize(40);
}
let shift=0, v=0;//開始時速度為0
function mousePressed(){
 v=random(10)+5; 
}
function draw(){
 background(185,234,193);
 for(let i=0;i<24;i++){
  if(i%3==0) fill(0);
  if(i%3==1) fill(255);
  if(i%3==2) fill(200,180.0);
  let start=radians(0+shift+i*360/24);
  let stop=radians(360/24+shift+i*360/24);
  arc(100,100, 180,180, start,stop);
 }
 if(v>0.1){//在還有速度時，轉動
 shift+=v;//轉動的速度
 v=v*0.99;//速度會慢慢減速
 }
 text(shift,200,100);//印出shift
 text(v,200,150);//印出轉動的速度
}
```
