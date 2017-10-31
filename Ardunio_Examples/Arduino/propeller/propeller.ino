// import servo library
#include <Servo.h>

// variables
int servo1_pin = 2; // this is the first trap door, lets ball drop into maze
int servo2_pin = 3; // this is the second trap door, let's another ball prepare to fall


// servo object
Servo Servo1; 
Servo Servo2;


void setup() {
  Servo1.attach(servo1_pin);
  Servo2.attach(servo2_pin);
}

void trap_door1() {
  Servo1.write(0);
  delay(1000);
  Servo1.write(90);
  delay(1000);
  Servo1.write(0);
  delay(4000); 
  }

void trap_door2 () { 
  Servo2.write(0);
  delay(1000);
  Servo2.write(90);
  delay(2000);
  Servo2.write(0);
  //delay(1000);
  }

// wrap arguments of the loop in an if statement, so that it can depend on the python output
void loop() {
    trap_door1();
    trap_door2();
    exit(0);
}

