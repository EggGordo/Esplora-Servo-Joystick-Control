#include <Esplora.h>
#include <Servo.h>
Servo x;
Servo y;
void setup() {
  x.attach(1);
  y.attach(0);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  int valx = Esplora.readJoystickX();
  int valy = Esplora.readJoystickY();
  Serial.println(valx, valy);
  int valx1 = map(valx, -512, 512, 0, 180);
  int valy1 = map(valy, -512, 512, 0, 180);
  x.write(valx1);
  y.write(valy1);
  delay(10);
  // put your main code here, to run repeatedly:

}
