#include <virtuabotixRTC.h>
virtuabotixRTC myRTC(6,7,8);//CLK, DAT, RST
int tanggal, bulan, tahun, jam, menit, detik;

#include<Wire.h>
#include <LiquidCrystal_I2C.h> // libray lcd
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup(){
  Serial.begin(9600);
  lcd.begin();
  //myRTC.setDS1302Time(20, 42, 23, 6, 10, 05, 2021);
  }
void loop()
 {
  myRTC.updateTime();
  tanggal=myRTC.dayofmonth;
  bulan=myRTC.month;
  tahun=myRTC.year;
  jam=myRTC.hours;
  menit=myRTC.minutes;
  detik=myRTC.seconds;
lcd.setCursor(0,0);
lcd.print(String() +tanggal+"/"+bulan+"/"+tahun);
lcd.setCursor(0,1);
lcd.print(String() +jam+":" +menit+":"+detik+" "   );
delay(1000);
}
