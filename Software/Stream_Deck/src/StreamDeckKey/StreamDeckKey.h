#ifndef _STREAMDECKKEY_H_
#define	_STREAMDECKKEY_H_

#include <Arduino.h>
#include <BleKeyboard.h>

void bleInit(void);
void SendKeyboard (uint16_t AnalogReadButton1,uint16_t AnalogReadButton2);
void vTask2(void *pvParameters);
void TaskCreateKeyboard(void);
void vTaskSendEncoder(void *pvParameters);
void TaskCreateSendEncoder(int knob1_value_receive,int knob2_value_receive,int knob3_value_receive );
#endif /* _STREAMDECKKEY_H_ */
