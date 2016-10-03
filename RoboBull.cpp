#include "RoboBull.h"


RoboBull::RoboBull() {
  LServo.attach(2);
  RServo.attach(3);
  lServospeed = 90;
  rServospeed = 90;

  LServo.write(lServospeed);
  RServo.write(rServospeed);
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
  if(delaytime > 0)
    delay(delaytime * 1000);
  return;
}

void RoboBull::backward(unsigned short Lspeed, unsigned short Rspeed,
                        float delaytime){
  if(Lspeed <= MAXSPEED && Rspeed <= MAXSPEED){
    lServospeed = 90 - Lspeed;
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
  if(delaytime > 0)
    delay(delaytime * 1000);
  return;
}

void RoboBull::turn(String direction, float delaytime){
  if(direction == "right"){
    LServo.write(100);
    RServo.write(90);
  }
  else if(direction =="left"){
    LServo.write(90);
    RServo.write(80);
  }
  else {
    LServo.write(90);
    RServo.write(90);
  }
  if(delaytime > 0)
    delay(delaytime * 1000);

}

void RoboBull::turn90(String direction){
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

unsigned short RoboBull::getLspeed() {
  return lServospeed;
}

unsigned short RoboBull::getRspeed() {
  return rServospeed;
}
