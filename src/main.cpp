#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

int ReedSwitchPin = 2;
int state;

void setup() {
  pinMode(ReedSwitchPin, INPUT);

  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("****Reed  Switch****");
  lcd.setCursor(0, 1);
  lcd.print("State: O");
}

void loop() {
  state = digitalRead(ReedSwitchPin);
  lcd.setCursor(8, 1);

  if (state == LOW) {
    lcd.print("n ");
  } else {
    lcd.print("ff");
  }
}
