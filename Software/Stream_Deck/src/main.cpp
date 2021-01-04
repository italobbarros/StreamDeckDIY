/*Arduino library*/
#include <Arduino.h>

/*FreeRTOS library */
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

/*Own library*/
#include "LCD/LCDs.h"
#include "StreamDeckKey/StreamDeckKey.h"
#include "RotaryEncoder/RotaryEncoder.h"

void setup() {
  Serial.begin(115200);
  InitLCDs();           /*LCDs initialize*/
  bleInit();            /*Bluetooth Keyboard initialize*/
  TaskCreateLCDs();     /*Task Create of LCDs with FreeRTOS*/
  TaskCreateKeyboard();      /*Task Create of Keyboard with FreeRTOS*/
  TaskCreateEncoder();  /*Task Create of Encoder with FreeRTOS*/
  TaskCreateSendEncoder(knobValue(1),knobValue(2),knobValue(3));
}
void loop() {}