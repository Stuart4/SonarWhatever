#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
void setup()
{
  lcd.begin(16,2);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,INPUT);

}

void loop()
{
  long duration;
digitalWrite(10,HIGH);
digitalWrite(11, LOW);
  delayMicroseconds(2);
  digitalWrite(11, HIGH);
  delayMicroseconds(5);
  digitalWrite(11, LOW);
  duration = pulseIn(12, HIGH);
lcd.print(inches(duration));
delay(2);
lcd.clear();

}

long inches(long sec){
return sec/72/2;
}
long centimeters(long sec)
{
return sec/29/2;
}
