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
