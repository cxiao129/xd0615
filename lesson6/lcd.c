#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

void setup()
{
  lcd.begin(16,2);
  Serial.begin(9600);
}
void loop()
{
  lcd.setCursor(0,0);
  if(Serial.available()>0)
  {
    delay(100);
    lcd.clear();
    while(Serial.available()>0)
    {
      lcd.write(Serial.read());
      lcd.print(Serial.readString());
    }
  }
}
