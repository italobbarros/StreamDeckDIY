#ifndef _ROTARYENCODER_H_
#define _ROTARYENCODER_H_

#include <Arduino.h>

void InitKnob(void);
int mappingRotEncoder(int pin1,int pin2,int knobLastState,int value);
void vTaskmappingRotEncoder(void *pvParameters);
void TaskCreateRotEncoder(void);
int knobValue(int num);
#endif /*_ROTARYENCODER_H_*/