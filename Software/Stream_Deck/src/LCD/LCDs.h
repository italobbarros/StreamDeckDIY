#ifndef _LCDS_H_
#define _LCDS_H_

#include <Arduino.h>
#include <TFT_eSPI.h>


void decoLCD(int CS);
void InitLCDs(uint8_t rotation);/*LCDs initialize*/
void TaskCreateLCDsReceive(void);/*Task Create of LCDs with FreeRTOS*/
void TaskCreateLCDsSend(void);
void vTaskLCD1(void *pvParameters);
void vTaskLCD2(void *pvParameters);
void vTaskLCD3(void *pvParameters);
void vTaskLCD4(void *pvParameters);
void vTaskLCD5(void *pvParameters);
void vTaskLCD6(void *pvParameters);
void vTaskLCD7(void *pvParameters);
void vTaskLCD8(void *pvParameters);
void LCD(const uint16_t* imagem);
#endif /*_LCDS_H_*/