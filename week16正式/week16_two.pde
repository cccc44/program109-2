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
