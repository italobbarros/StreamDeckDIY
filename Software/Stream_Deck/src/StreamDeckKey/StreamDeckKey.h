#ifndef _STREAMDECKKEY_H_
#define	_STREAMDECKKEY_H_

#include <Arduino.h>
#include <BleKeyboard.h>

void SendBleKey (void);
void Sendkey(const uint8_t key1, const uint8_t key2);
void vTaskSendBleKey(void *pvParameters);
void TaskCreateSendBleKey(void);
void vTaskSendEncoder(void *pvParameters);
void TaskCreateSendEncoder(int knob1_value_receive,int knob2_value_receive,int knob3_value_receive );
#endif /* _STREAMDECKKEY_H_ */
