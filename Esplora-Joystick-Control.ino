#include <Esplora.h> //Libraries
#include <Servo.h>
Servo x; //Servo 1 
Servo y; //Servo 2
void setup() {
  x.attach(1); //Change both numbers acording to location of servo's pin
  y.attach(0);
  Serial.begin(9600); //Begin serial input
}

void loop() {
  int valx = Esplora.readJoystickX(); //Read joystick X value
  int valy = Esplora.readJoystickY(); //Read joystick Y value
  Serial.println(valx, valy); //Print values to serial monitor
  int valx1 = map(valx, -512, 512, 0, 180); //Map both joysticks value to servo acceptable values
  int valy1 = map(valy, -512, 512, 0, 180);
  x.write(valx1); //Write to both servos
  y.write(valy1);
  delay(1000); //Delay. Prevents overloading(?)
}
