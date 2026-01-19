//A-F PRODUCTION
const int PIR = 2;
const int ledPin = 3;
const int batasdelay = 50;
int waktuawal = 0;
void setup(){
    Serial.begin(9600);
    pinMode(PIR, INPUT);
    pinMode(ledPin, OUTPUT);
 
}
void loop(){
    int dataPIR = digitalRead(PIR);
    if(dataPIR == HIGH)
    {
        digitalWrite(ledPin, HIGH);
        waktuawal = millis();
    }
    if(millis()-waktuawal>batasdelay)
    {
        digitalWrite(ledPin, LOW);
    }
}
