#define pinecho1 7
#define pintriger1 6
#include <Servo.h>

Servo myservo;

float read_srf(int pintriger, int pinecho) {
  long durasi;
  float jarak;
  digitalWrite(pintriger, LOW);
  delayMicroseconds(2);
  digitalWrite(pintriger, HIGH);
  delayMicroseconds(10);
  digitalWrite(pintriger, LOW);
  delayMicroseconds(2);

  durasi = pulseIn(pinecho, HIGH);
  jarak = durasi / 58.2;

  return jarak;
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (pintriger1, OUTPUT);
  pinMode (pinecho1, INPUT);
  myservo.attach(9);
  myservo.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  int jarak = read_srf(pintriger1, pinecho1);
  if (jarak < 10) {
    myservo.write(180);
  }
  else {
    myservo.write(0);
  }
  Serial.println(jarak);
  delay(15);
}
