const byte LEDs[] = { 7, 8, 9, 10, 11, 12, 13, 14};
const byte total = sizeof(LEDs);
const int buttonPin = 6;
byte index = 0;
int j = 0;
int buttonState = 0;
void setup()
{
  // 將每個 Pin 設定成輸出
  for (byte i = 0; i < total; i++) {
    pinMode(LEDs[i], OUTPUT);
  }
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
for (index = 0; index <= 7; index++) //向左展示
    { // 所有 LED OFF
      for (byte i = 0; i < total; i++) {
        digitalWrite(LEDs[i], LOW);
      }

      // 點亮 index 位置之 LED
      digitalWrite(LEDs[index], HIGH);
      delay(100);
    }
     for (index = 7; index > 0; index--)
    { // 向右展示}
      for (byte i = 7; i > 0; i--)
      {
        digitalWrite(LEDs[i], LOW);
      }
      // 點亮 index 位置之 LED
      digitalWrite(LEDs[index], HIGH);
      delay(100);
    }
  }
   else{ 
    for (j = 0; j < 2; j++)
    {
      for (byte i = 0; i < total; i++) {
        digitalWrite(LEDs[i], HIGH);
      }
      delay(100);
      for (byte i = 0; i < total; i++) {
        digitalWrite(LEDs[i], LOW);
      }
      delay(100);

    }

    for (index = 0; index <= 7; index++) //向左展示
    { // 所有 LED OFF
      for (byte i = 0; i < total; i++) {
        digitalWrite(LEDs[i], LOW);
      }

      // 點亮 index 位置之 LED
      digitalWrite(LEDs[index], HIGH);
      delay(100);
    }
  
 
    for (j = 0; j < 2; j++)
    {
      for (byte i = 0; i < total; i++) {
        digitalWrite(LEDs[i], HIGH);
      }
      delay(100);
      for (byte i = 0; i < total; i++) {
        digitalWrite(LEDs[i], LOW);
      }
      delay(100);

    }
    for (index = 7; index > 0; index--)
    { // 向右展示}
      for (byte i = 7; i > 0; i--)
      {
        digitalWrite(LEDs[i], LOW);
      }
      // 點亮 index 位置之 LED
      digitalWrite(LEDs[index], HIGH);
      delay(100);
    }
  }
}
