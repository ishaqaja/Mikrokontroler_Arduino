#include <AFMotor.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);
const int pinSensorKiri = A3;
const int pinSensorKanan = A1;
const int PinBuzzer = 13;

char val;
AF_DCMotor motor1(1, MOTOR12_64KHZ); //Jadikan motor kanan, 64KHZ
AF_DCMotor motor2(2, MOTOR12_64KHZ); //Jadikan motor kiri, 642hHZ
AF_DCMotor motor3(3, MOTOR12_64KHZ); //Jadikan motor kanan, 64KHZ
AF_DCMotor motor4(4, MOTOR12_64KHZ); //Jadikan motor kiri, 642hHZ

void setup() {
  //de here, to run once:
Serial.begin (9600);
pinMode (pinSensorKiri, INPUT);
pinMode (pinSensorKanan, INPUT);

motor1.setSpeed(255); //Set kecepatan motor 1 240 (range 0-255)
motor2.setSpeed(255); //Set kecepatan motor 2 240 (range 0-255)
motor3.setSpeed(255); //Set kecepatan motor 3 240 (range 0-255)
motor4.setSpeed(255); //Set kecepatan motor 4 240 (range 0-255)

  
}

void loop() {
  // put your main code here, to run repeatedly:
int dataAnalog1 = digitalRead (pinSensorKiri);
int dataAnalog2 = digitalRead (pinSensorKanan);
Serial.print ("Sensor : ");
Serial.print (dataAnalog1);
Serial.print (", Sensor : ");
Serial.print (dataAnalog2);


//maju
if (dataAnalog1 == 0 && dataAnalog2 == 0) {
  motor1.run(FORWARD); //Motor 1 maju
  motor2.run(FORWARD); //Motor 2 maju
  motor3.run(FORWARD); //Motor 3 maju
  motor4.run(FORWARD); //Motor 4 maju
}
//belok ke kiri 
else if(dataAnalog1 == 1 && dataAnalog2 == 0) {
  motor1.run(BACKWARD); //Motor 1 mundur
  motor2.run(BACKWARD); //Motor 2 mundur
  motor3.run(FORWARD); //Motor 3 maju
  motor4.run(FORWARD); //Motor 4 maju
}
//belok ke kanan
else if(dataAnalog1 == 0 && dataAnalog2 == 1){
  motor1.run(FORWARD); //Motor 1 maju
  motor2.run(FORWARD); //Motor 2 maju
  motor3.run(BACKWARD); //Motor 3 berhenti
  motor4.run(BACKWARD); //Motor 4 berhenti
}
//berhenti
else if(dataAnalog1 == 1 && dataAnalog2 == 1){
  motor1.run(RELEASE); //Motor 1 berhenti
  motor2.run(RELEASE); //Motor 2 berhenti
  motor3.run(RELEASE); //Motor 3 berhenti
  motor4.run(RELEASE); //Motor 4 berhenti
  }
}
