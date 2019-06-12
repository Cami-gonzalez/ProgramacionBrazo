  #include <Servo.h>
#define pinBase 12
#define pinDerecho 11
#define pinIzquierdo 10
#define pinGarra 9

Servo motorBase;
Servo motorDerecho;
Servo motorIzquierdo;
Servo motorGarra;

void setup() {
  motorBase.attach(pinBase);
  motorDerecho.attach(pinDerecho);
  motorIzquierdo.attach(pinIzquierdo);
  motorGarra.attach(pinGarra);
  
  motorBase.write(90);
  delay(2000);
  motorIzquierdo.write(90);
  delay(2000);
  motorDerecho.write(90);
  delay(2000);
  motorGarra.write(180);
  delay(2000);
  motorBase.write(170);
  delay(3000);
  motorIzquierdo.write(170);
  delay(2000);
  motorDerecho.write(170);
  delay(2000);
  motorGarra.write(0);
  delay(1500);
  motorGarra.write(180),
  delay(1500);
  motorIzquierdo.write(90);
  delay(1500);
  motorDerecho.write(90);
  delay(1500);
  motorBase.write(10);
  delay(3000);
  motorIzquierdo.write(10);
  delay(2000);
  motorDerecho.write(10);
  delay(2000);
  motorGarra.write(0);
  delay(1500);
  motorGarra.write(180);
  delay(1500);
  motorIzquierdo.write(90);
  delay(1500);
  motorDerecho.write(90);
  delay(1500);
  motorBase.write(90);
  delay(3000);
  motorIzquierdo.write(90);
  delay(2000);
  motorDerecho.write(90);
  delay(2000);
  motorGarra.write(0);
  delay(1500);
  motorGarra.write(180);
  delay(1500);
  motorIzquierdo.write(170);
  delay(2000);
  motorDerecho.write(170);
  delay(2000);
  motorGarra.write(0);
  delay(1500);
  motorGarra.write(180);
  delay(1500);
  motorIzquierdo.write(90);
  delay(2000);
  motorDerecho.write(90);
  delay(2000);
  

}
void loop() {
  // put your main code here, to run repeatedly:

}
