import processing.sound.*;
SoundFile file;
void setup(){
  size(400,400);
  file =new SoundFile(this,"beat.aiff");
  file.loop();
}
void draw(){
  
}  
