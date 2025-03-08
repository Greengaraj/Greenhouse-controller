// Подключение библиотек, используемых для реализации проекта 
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <TroykaRTC.h>
#include <TroykaMQ.h>

// Подключение файла с настройками проекта
#include "settings.h"

void setup(){
  lcd.init();                                                                       // Инициализируем дисплей
  lcd.backlight();                                                                  // Включаем подсветку
  mq135.heaterPwrHigh();                                                            // Включаем нагреватель
  clock.begin();                                                                    // Инициализация часов
  // Что бы время менялось при прошивки или сбросе питания закоментируйте метод clock.set();
  clock.set(__TIMESTAMP__);                                                         // метод установки времени и даты автоматически при компиляции
  for (int pin = MOSFET_LAMP_PIN ; pin <= BUZZER_PIN; pin++) pinMode(pin, OUTPUT);  // Установка пинов пьезоэлемента и словых ключей в режим выходов
  lcd.clear();
}

void loop(){
  //
}