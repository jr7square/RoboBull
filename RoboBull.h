#ifndef RoboBull_h
#define RoboBull_h
#include <Servo.h>
#include <Arduino.h>




class RoboBull {
private:
  Servo LServo;
  Servo RServo;
  const float maxdelay = 60.0;
  unsigned short lServospeed;
  unsigned short rServospeed;
  const short MAXSPEED = 10;
public:
  /* Constructor */
  RoboBull();

  /* Robobull moves forward
  Params:
    Lspeed: Left servo speed (scale from 1 to 10)
    Rspeed: Right servo speed (scale from 1 to 10)
    delayTime: time to move forward (in seconds)
    */
  void forward(unsigned short Lspeed, unsigned short Rspeed,
              float delaytime);
  /*
  Parms:
    Lspeed:Left servo speed (valid values: 1 to 10)
    Rspeed: Right servo speed (valid values: 1 t0 10)
    delaytime: tim e to move backward ( in seconds)
  */
  void backward(unsigned short Lspeed, unsigned short Rspeed,
               float delaytime);
  /*
    Params:
      direction: direction to turn (valid values: "left", "right")
      delaytime: time to turn in given direction ( in seconds)
  */
  void turn(String direction, float delaytime);
  /*
    Params:
      direction: direction to turn (valid values: "left", "right")
  */
  void turn90(String direction);

  /* Getters   */
  unsigned short getLspeed();
  unsigned short getRspeed();
};

#endif
