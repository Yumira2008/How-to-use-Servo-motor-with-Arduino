#include<Servo.h>

Servo myservo;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(3);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.write(90);
  delay(500);
  myservo.write(180);
  delay(500);
  myservo.write(0);
  delay(750);
  
}
