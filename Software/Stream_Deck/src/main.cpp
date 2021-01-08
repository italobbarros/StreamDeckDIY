/*Arduino library*/
#include <Arduino.h>

/*FreeRTOS library */
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

/*Own library*/
#include "LCD/LCDs.h"
#include "SdCardFile/SdCardFile.h"
#include "KeyboardLCD/KeyboardLCD.h"
#include "StreamDeckKey/StreamDeckKey.h"
#include "RotaryEncoder/RotaryEncoder.h"
#include "Settings.h"

void setup() {
  Serial.begin(115200);
  InitLCDs(0);           /*LCDs initialize*/ 
  SDInit();
  TaskCreateKeymapping();
  TaskCreateLCDsReceive();     /*Task Create of LCDs with FreeRTOS*/
  TaskCreateSendBleKey();      /*Task Create of Keyboard with FreeRTOS*/
  //TaskCreateEncoder();  /*Task Create of Encoder with FreeRTOS*/
  //TaskCreateSendEncoder(knobValue(1),knobValue(2),knobValue(3));
}
void loop() {}
