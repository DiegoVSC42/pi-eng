#include <Arduino.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
const int ledPin =  LED_BUILTIN;// the number of the LED pin

// Variables will change:
int ledState = LOW;             // ledState used to set the LED

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis = 0;        // will store last time LED was updated

// constants won't change:
const long interval = 1000;  
LiquidCrystal_I2C lcd(0x20,16,2);  // Criando um LCD de 16x2 no endereço 0x20

void setup()
{
  lcd.init();                 // Inicializando o LCD
  lcd.backlight();            // Ligando o BackLight do LCD
  lcd.print("Hello, world!"); // Exibindo no LED Hello, world!
}

void loop()
{
}