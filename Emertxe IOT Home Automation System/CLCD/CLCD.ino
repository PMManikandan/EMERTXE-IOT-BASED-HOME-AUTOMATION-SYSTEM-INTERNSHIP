/*************************************************************
Title       : CLCD
Description : To configure the CLCD
 *************************************************************/

/*To use i2c protocol and uilt in LCD libraray*/
/* i2c library */
#include <Wire.h>
/*CLCD library*/
#include <LiquidCrystal_I2C.h>


/*initialize the liquid crystal library*/
/*the first parameter is the I2C address*/
/*the second parameter is how many rows are on your screen*/
/*the third parameter is how many columns are on your screen*/
LiquidCrystal_I2C lcd(0x27, 16, 2); 




void setup(void)
{ 
    /*initialize the lcd*/
    lcd.init();  
    /*turn the backlight */                   
    lcd.backlight();
    /*clear the clcd*/
    lcd.clear();
    /*cursor to the home */
    lcd.home();
    
    /*To display string*/
    lcd.setCursor(0, 0);
    lcd.print("Home automation");

    lcd.setCursor(3, 1);
    lcd.print("Emertxe");
    delay(1000);   
}

void loop(void) 
{
       
}
