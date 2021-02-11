#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

#define ReedSwitchPin 2

void setup() {
  pinMode(ReedSwitchPin, INPUT);

  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("****Reed  Switch****");
  lcd.setCursor(0, 2);
  lcd.print("State: O");
}

void loop() {
  lcd.setCursor(8, 1);

  if (digitalRead(ReedSwitchPin)) {
    lcd.print("ff");
  } else {
    lcd.print("n ");
  }
}
