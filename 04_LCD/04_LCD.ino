/*
 * Copyright © 2019 LanMooTech All rights reserved.
 */
 
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

//XLAN:宣告 LCD 顯示器物件
//XLAN:使用 I2C 位址 0x3f 或 0x27
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  //XLAN:初始化 LCD 顯示器物件
  lcd.init();

  //XLAN:開啟 LCD 顯示器的背光
  lcd.backlight();

  //XLAN:於 LCD 顯示器顯示字串
  lcd.print("Welcome to X-LAN");
}

void loop()
{
  
}
