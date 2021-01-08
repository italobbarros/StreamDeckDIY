#ifndef _KEYBOARDLCD_H_
#define _KEYBOARDLCD_H_

#include "Settings.h"
#include <Arduino.h>

void mappingKeyboard (int Button1);
void vTaskmappingKeyboard(void *pvParameters);
void TaskCreateKeymapping(void);
#endif /*_KEYBOARDLCD_H_*/