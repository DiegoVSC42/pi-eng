#include <Arduino.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
	lcd.setCursor(4,0);
	lcd.print("Hackster");
}

void loop()
{
}