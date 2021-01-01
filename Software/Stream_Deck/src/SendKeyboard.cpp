#include <BleKeyboard.h>
#include <SendKeyboard.h>
#include <Arduino.h>

BleKeyboard bleKeyboard;

void SendKeyboard (uint16_t AnalogReadButton1,uint16_t AnalogReadButton2){
      if(analogRead(AnalogReadButton1)<570){
        /*Serial.println("Sending Alt+F1...");*/
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F1);
        delay(100);
        bleKeyboard.releaseAll();
      }else if (analogRead(AnalogReadButton1)>600||analogRead(AnalogReadButton1)<680)
      {
        /*Serial.println("Sending Alt+F2...");*/
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F2);
        delay(100);
        bleKeyboard.releaseAll();
      }else if (analogRead(AnalogReadButton1)>710||analogRead(AnalogReadButton1)<790)
      {
        /*Serial.println("Sending Alt+F3...");*/
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F3);
        delay(100);
        bleKeyboard.releaseAll();
      }else if (analogRead(AnalogReadButton1)>800||analogRead(AnalogReadButton1)<900)
      {
        /*Serial.println("Sending Alt+F4...");*/
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F4);
        delay(100);
        bleKeyboard.releaseAll();
      }
      else if(analogRead(AnalogReadButton2)<570){
        /*Serial.println("Sending Alt+F5...");*/
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F5);
        delay(100);
        bleKeyboard.releaseAll();
      }else if (analogRead(AnalogReadButton2)>600||analogRead(AnalogReadButton2)<680)
      {
        /*Serial.println("Sending Alt+F6...");*/
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F6);
        delay(100);
        bleKeyboard.releaseAll();
      }else if (analogRead(AnalogReadButton2)>710||analogRead(AnalogReadButton2)<790)
      {
        /*Serial.println("Sending Alt+F7...");*/
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F7);
        delay(100);
        bleKeyboard.releaseAll();
      }else if (analogRead(AnalogReadButton2)>800||analogRead(AnalogReadButton2)<900)
      {
        /*Serial.println("Sending Alt+F4...");*/
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F8);
        delay(100);
        bleKeyboard.releaseAll();
      }
}