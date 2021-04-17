/*
 * Copyright © 2019 LanMooTech All rights reserved.
 */
 
//XLAN:定義 LED 燈所使用的腳位
int LED_PIN = 10;

void setup()
{
  //XLAN:設定 LED 燈腳位為輸出腳位
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  //XLAN:LED 燈腳位輸出高電位，LED 燈亮起
  
  
  int delayTime =  1;
  bool isAdd  = true;
  int gap = 40;
  int maxTime = 200;
  while (true) {
    digitalWrite(LED_PIN, HIGH);
    delay(delayTime);
    digitalWrite(LED_PIN, LOW);
    delay(delayTime);
    
    if (isAdd) {
      if (delayTime >= maxTime) {
        delayTime = maxTime;
        isAdd = !isAdd;
      } else {
        delayTime += gap;
      }
    } else {
      if (delayTime <= 0) {
        delayTime = 0;
        isAdd = !isAdd;
      } else {
        delayTime -= gap;
      }
    }
  }

  //XLAN:LED 燈腳位輸出低電位，LED 燈熄滅
 
}
