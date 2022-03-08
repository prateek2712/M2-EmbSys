/**
 * @file code.c
 * @author your name (PrateekChandra)
 * @brief 
 * @version 0.1
 * @date 2022-03-8
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#define LED_PIN 7
#define POTENTIOMETER_PIN A0
int buzzer = 8 ;

void setup()
{
  Serial.begin(9600) ;
  pinMode(LED_PIN, OUTPUT);
  pinMode(buzzer, OUTPUT) ;
  pinMode(A0,INPUT);
  
  
}

void loop()

{
  digitalWrite(buzzer, HIGH);

  int potentiometerValue = analogRead(POTENTIOMETER_PIN);
  int brightness = potentiometerValue / 4;
  
  analogWrite(LED_PIN, brightness);
  if (LED_PIN == HIGH)
  {
  
    digitalWrite(buzzer, HIGH);
}
else
{
  digitalWrite(buzzer, LOW);
}

}
