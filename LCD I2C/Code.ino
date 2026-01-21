#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // Kalau gagal ganti 0x3F ke 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.backlight();          // Print a message to the LCD
  lcd.setCursor(0,0);
  lcd.print("halo");
  
  lcd.setCursor(0,1);
  lcd.print("halo");
  delay (3000);
}


void loop()
{
  lcd.setCursor(0,0);
  lcd.print("     Halo");
  lcd.scrollDisplayLeft() ;
  delay(500);
  
  lcd.setCursor(0,1);
  lcd.print("     aku ishaq");
  lcd.scrollDisplayLeft() ;
  delay(500);
}
