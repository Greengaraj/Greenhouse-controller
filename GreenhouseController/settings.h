#ifndef SETTINGS_H
#define SETTINGS_H

constexpr uint8_t RESISTIVE_SOIL_MOISTURE_SENSOR_PIN = A0;  // Имя для пина, к которому подключен резистивный датчик влажности почвы
constexpr uint8_t MQ135_PIN = A1;                           // Имя для пина, к которому подключен датчик MQ-135
constexpr uint8_t MQ135_HEATER_PIN = 4;                     // Имя для пина, к которому подключен нагреватель датчика MQ-135
constexpr uint8_t MOSFET_POMPA_PIN = 2;                     // Имя для пина, к которому подключена помпа
constexpr uint8_t MOSFET_LAMP_PIN = 3;                      // Имя для пина, к которому подключена светодиодная лента
constexpr uint8_t BUZZER_PIN = 5;                           // Имя для пина, к которому подключен пьезодинамик

constexpr uint32_t INTERVAL = 180000;                       // Интервал между проверкой на полив растения

uint8_t current_hour;
uint8_t current_minute;

#endif