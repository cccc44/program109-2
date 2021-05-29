## the fourteenth week
正課練習題
### one
Processing抽籤--step01 在setup()設定裡, 用亂數random(60)取出小於60的數,用text()印出來,textSize()字大小設大一些
```C
void setup(){
 size(300,200);
 float ans=random(60);
 textSize(30);
 text(ans,30,30);
}
```
### two
Processing抽籤--step02 修改後,利用(int)random(60)將float轉成int,利用mosuePressed()來改亂數,記得background()清背景
```C
void setup(){
 size(300,200);
 textSize(30);
}
int ans=0;
void draw(){
 background(128,158,182);
 text(ans,30,30);
}
void mousePressed(){
 ans=(int)random(60); 
}
```
### three
Processing亂數洗牌--step03 先宣告Java的陣列 int [] a = {...}, 再用for迴圈,印出陣列的值, mousePressed()時,利用random()挑2個數i1,i2,將a[i1],a[i2]交換
```C
int []a={1,2,3,4,5,6,7,8,9,10};
void setup(){
  size(400,200);
  textSize(30);
}
void draw(){
  background(128,158,182);
  for(int i=0;i<10;i++){
   text(a[i],i*40,100);
  }
}
void mousePressed(){
 int i1=(int)random(10);
 int i2=(int)random(10); 
 int temp=a[i1];a[i1]=a[i2];a[i2]=temp; 
}
```
### four
Processing大樂透--step04 使用作弊的方法,事先亂數洗牌10000次,再拿前面6個數字,當成中獎號碼。小心,Java陣列的宣告有點特別, 要記得裡面用for迴圈放值
```C
int []a=new int[49];
void setup(){
  size(400,200);
  textSize(30);
  for(int i=0;i<49;i++) a[i]=i+1;
}
void draw(){
  background(128,158,182);
  for(int i=0;i<6;i++){
   text(a[i],i*50,100);
  }
}
void mousePressed(){
 for(int i=0;i<10000;i++){
   int i1=(int)random(49);
   int i2=(int)random(49); 
   int temp=a[i1];a[i1]=a[i2];a[i2]=temp; 
 }
}
```
### five
Processing大樂透--step05 大樂透的球,會慢慢掉出來,有個bug是會N++超過6顆球
```C
int []a=new int[49];
void setup(){
  size(400,200);
  textSize(30);
  for(int i=0;i<49;i++) a[i]=i+1;
  for(int i=0;i<10000;i++){
    int i1=(int)random(49),i2=(int)random(49);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }
}
int N=0;
void draw(){
  background(128,158,182);
  for(int i=0;i<N;i++){
   fill(255);ellipse(50+i*50,100,40,40);
   textAlign(CENTER,CENTER);
   fill(0); text(a[i],50+i*50,100);
  }
}
void mousePressed(){
 N++;
}
```
