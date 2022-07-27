#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
#define Temperature_sensor A0
int LEDR = 7;
int LEDG = 13;
void setup() {
  // put your setup code here, to run once:


lcd.begin(16,2);

lcd.setCursor(0,0);
lcd.print(" DIGITAL ");
lcd.setCursor(0,1);
lcd.print(" THERMOMETER ");
delay(3500);
lcd.clear();

}

void loop() {
  
  // temperature:
  
  float analog_read = analogRead(Temperature_sensor);
  float temp = analog_read/2.046 ;
  delay(10);
  
//lcd display:

  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("TEMPERATURE");
  lcd.setCursor(4,1);
  lcd.print(temp);
  lcd.print("C");
  delay(1000); 
  
}
