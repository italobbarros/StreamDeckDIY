#include <Arduino.h>
#include <TFT_eSPI.h>
#include <InitLCDs.h>


TFT_eSPI tft = TFT_eSPI();

void InitLCDs(void){/*função que inicializa os 8 LCDs*/
  pinMode(TFT_CS1,OUTPUT);
  digitalWrite(TFT_CS1,HIGH);
  pinMode(TFT_CS2,OUTPUT);
  digitalWrite(TFT_CS2,HIGH);
  pinMode(TFT_CS3,OUTPUT);
  digitalWrite(TFT_CS3,HIGH);
  pinMode(TFT_CS4,OUTPUT);
  digitalWrite(TFT_CS4,HIGH);
  pinMode(TFT_CS5,OUTPUT);
  digitalWrite(TFT_CS5,HIGH);
  pinMode(TFT_CS6,OUTPUT);
  digitalWrite(TFT_CS6,HIGH);
  pinMode(TFT_CS7,OUTPUT);
  digitalWrite(TFT_CS7,HIGH);
  pinMode(TFT_CS8,OUTPUT);
  digitalWrite(TFT_CS8,HIGH);

  digitalWrite(TFT_CS1,LOW);
  digitalWrite(TFT_CS2,LOW);
  digitalWrite(TFT_CS3,LOW);
  digitalWrite(TFT_CS4,LOW);
  digitalWrite(TFT_CS5,LOW);
  digitalWrite(TFT_CS6,LOW);
  digitalWrite(TFT_CS7,LOW);
  digitalWrite(TFT_CS8,LOW);
  tft.init();
  tft.setTextSize(8);
  tft.setRotation(0);
  digitalWrite(TFT_CS1,HIGH);
  digitalWrite(TFT_CS2,HIGH);
  digitalWrite(TFT_CS3,HIGH);
  digitalWrite(TFT_CS4,HIGH);
  digitalWrite(TFT_CS5,HIGH);
  digitalWrite(TFT_CS6,HIGH);
  digitalWrite(TFT_CS7,HIGH);
  digitalWrite(TFT_CS8,HIGH);
}
