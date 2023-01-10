/*To read the analog values and print it on the Serial monitor*/
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display
void setup() 
{
  // put your setup code here, to run once:
  lcd.init();                      
    lcd.backlight();
    lcd.clear();
    lcd.home();
    lcd.setCursor(0, 0);
    lcd.print("ADC");
}

void loop()
{
  // put your main code here, to run repeatedly:
  String temperature;

   

  //reading the analog output voltage fromtemperature sensor and converting it to deg cel (10mv-> 1deg cel)
  temperature = String (((analogRead(A0) *(float)5/ 1024)) /(float) 0.01);
   
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print( temperature);
    lcd.print("  deg cel");
 
  delay(1000);
}
