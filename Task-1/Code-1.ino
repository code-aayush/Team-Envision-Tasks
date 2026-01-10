#include <Adafruit_LiquidCrystal.h>
Adafruit_LiquidCrystal lcd(0);
void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Hello World!");
}
void loop() {
  lcd.setCursor(0, 1);
  lcd.print("Timer: ");
  lcd.print(millis() / 1000);
    delay(100);
}
