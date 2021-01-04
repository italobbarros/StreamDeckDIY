#ifndef _LCDS_H_
#define _LCDS_H_

#include <Arduino.h>
#include <TFT_eSPI.h>

void InitLCDs(void);/*LCDs initialize*/
void TaskCreateLCDs(void);/*Task Create of LCDs with FreeRTOS*/
void vTask1(void *pvParameters);/*Task resposible for mapping keyboard*/
#endif /*_LCDS_H_*/