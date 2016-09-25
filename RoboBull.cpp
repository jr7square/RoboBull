#include "RoboBull.h"


RoboBull::RoboBull() {
  LServo.attach(2);
  RServo.attach(3);

  LServo.write(90);
  RServo.write(90);

  maxdelay = 60.0;

  MAXSPEED = 10;
  lServospeed = 90;
  rServospeed = 90;
}

void RoboBull::forward(unsigned short Lspeed, unsigned short Rspeed,
                        float delaytime){
  if(Lspeed <= MAXSPEED && Rspeed <= MAXSPEED){
    lServospeed = 90 + Lspeed;
    rServospeed = 90 - Rspeed;
    LServo.write(lServospeed);
    RServo.write(rServospeed);
  }
  else {
    lServospeed = 90 + MAXSPEED;
    rServospeed = 90 - MAXSPEED;
    LServo.write(lServospeed);
    RServo.write(rServospeed);
  }
  delay(delaytime * 1000);
  return;
}

void RoboBull::backward(unsigned short Lspeed, unsinged short Rspeed,
                        float delaytime){
  if(Lspeed <= MAXSPEED && Rspeed <= MAXSPEED){
    lServospeed = 90 - Lspeed);
    rServospeed = 90 + Rspeed;
    LServo.write(lServospeed);
    RServo.write(rServospeed);
  }
  else {
    lServospeed = 90 - MAXSPEED;
    rServospeed = 90 + MAXSPEED;
    LServo.write(lServospeed);
    RServo.write(rServospeed);
  }
  return;
}

void RoboBull::turn(String direction, float delaytime){
  if(direction == "right"){
    LServo.write(100);
    RServo.write(90);
  }
  else if(direction =="left"){
    LServo.write(90);
    Rservo.write(80);
  }
  else {
    LServo.write(90):
    RServo.write(90);
  }
  if(delaytime < maxdelay){
    delay(delaytime * 1000);
  }
}

void RoboBull::turn90(String diretion){
  if(direction == "right"){
    LServo.write(100);
    RServo.write(90);
    delay(1336);
  }
  else if(direction == "left"){
    LServo.write(90);
    RServo.write(80);
    delay(1336);
  }
}

unsigned short getLspeed() {
  return lServospeed;
}

unsigned short getRspeed() {
  return rServospeed;
}
