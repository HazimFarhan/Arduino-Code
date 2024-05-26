/**
 * DS1307, DS3231 and DS3232 RTCs basic library
 *
 * Really tiny library to basic RTC functionality on Arduino.
 *
 * Supported features:
 *     * SQuare Wave Generator
 *     * Fixed output pin for DS1307
 *     * RAM for DS1307 and DS3232
 *     * temperature sensor for DS3231 and DS3232
 *     * Alarms (1 and 2) for DS3231 and DS3232
 *     * Power failure check for DS3231 and DS3232
 *
 * See uEEPROMLib for EEPROM support.
 *
 * @copyright Naguissa
 * @author Naguissa
 * @url https://github.com/Naguissa/uRTCLib
 * @url https://www.foroelectro.net/librerias-arduino-ide-f29/rtclib-arduino-libreria-simple-y-eficaz-para-rtc-y-t95.html
 * @email naguissa@foroelectro.net
 */
#include "Arduino.h"
#include "uRTCLib.h"

int buzzer = 23;

// uRTCLib rtc;
uRTCLib rtc(0x68);
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
delay (2000);
  Serial.begin(9600);
  Serial.println("Serial OK");
  lcd.init();
  lcd.backlight();
  pinMode(buzzer,OUTPUT);
  #ifdef ARDUINO_ARCH_ESP8266
    URTCLIB_WIRE.begin(0, 2); // D3 and D4 on ESP8266
  #else
    URTCLIB_WIRE.begin();
  #endif


  //rtc.set(0, 42, 4, 6, 15, 4, 22);
  //  RTCLib::set(byte second, byte minute, byte hour, byte dayOfWeek, byte dayOfMonth, byte month, byte year)
}

void loop() {
 
  rtc.refresh();

  Serial.print("RTC DateTime: ");
  Serial.print(rtc.year());
  Serial.print('/');

  lcd.setCursor(7,3);
  lcd.print(rtc.year());
  
  Serial.print(rtc.month());
  Serial.print('/');

  lcd.setCursor(4,3);
  lcd.print(rtc.month());
  lcd.print('/');
  
  Serial.print(rtc.day());
  lcd.setCursor(1,3);
  lcd.print(rtc.day());
  lcd.print('/');

  Serial.print(' ');

  Serial.print(rtc.hour());
  Serial.print(':');

  lcd.setCursor(1,0);
  lcd.print(rtc.hour());
  lcd.setCursor(3,0);  
  lcd.print(':');
  
  Serial.print(rtc.minute());
  Serial.print(':');

  lcd.setCursor(4,0);
  lcd.print(rtc.minute());
  lcd.print(':');

  Serial.print(rtc.second());

  lcd.setCursor(7,0);
  lcd.print(rtc.second());
  
  Serial.print(rtc.second());

  Serial.print(" DOW: ");
  Serial.print(rtc.dayOfWeek());

  Serial.print(" - Temp: ");
  Serial.print(rtc.temp()  / 100);

  Serial.println();

  if (rtc.second() <= 0){
    digitalWrite(buzzer,HIGH);
  }
  else {
    digitalWrite(buzzer,LOW);
  }
    


  delay(1000);
}
