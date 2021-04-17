/*
 * Copyright © 2019 LanMooTech All rights reserved.
 */
 
//XLAN:定義電位器所使用的腳位
int POT_PIN = A0;

//XLAN:定義 LED 燈所使用的腳位
int LED_PIN = 11;

void setup()
{
  //XLAN:初始化序列埠
  Serial.begin(9600);

  //XLAN:設定電位器腳位為輸入腳位
  pinMode(POT_PIN, INPUT);
  
  //XLAN:設定 LED 燈腳位為輸出腳位
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  //XLAN:讀取電位器的類比輸入值並顯示
  int val = analogRead(POT_PIN);
  Serial.println(val);

  //XLAN:從類比輸入範圍(0~1023)對應到類比輸出範圍(0~255)
  int r = map(val, 0, 1023, 0, 255);

  //XLAN:類比輸出到 LED 燈
  analogWrite(LED_PIN, r);

  //XLAN:延遲 100 ms
  delay(100);
}
