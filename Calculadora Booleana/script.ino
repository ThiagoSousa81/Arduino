// Caso sinta o desejo de terminar este script pra mim...
// ficarei muito agradecido em fazer o Merge da sua Pull-Request

#include "Adafruit_LEDBackpack.h"

Adafruit_7segment led_display1 = Adafruit_7segment();

int v128 = 0, v64 = 0, v32 = 0, v16 = 0, v8 = 0, v4 = 0, v2 = 0, v1 = 0;

void setup()
{
  pinMode(0, INPUT);
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  
  led_display1.begin(112);
}

void loop()
{ 
  
  if (digitalRead(2) == HIGH)
  {
    led_display1.println(9909);
  }
  else
  {
    led_display1.println(0000); 
  }
  
  led_display1.writeDisplay();
  delay(100);
}
