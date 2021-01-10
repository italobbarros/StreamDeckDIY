#ifndef _LCDS_H_
#define _LCDS_H_

#include <Arduino.h>
#include <TFT_eSPI.h>


void decoLCD(int CS);
void InitLCDs(uint8_t rotation);/*LCDs initialize*/
void TaskCreateLCDsReceive(void);/*Task Create of LCDs with FreeRTOS*/
void TaskCreateLCDsSend(void);
void listFiles(void);
void createArray(const char *filename);
void jpegRender(int xpos, int ypos);
void drawJpeg(const char *filename, int xpos, int ypos);
void listDir(fs::FS &fs, const char * dirname, uint8_t levels);
void showTime(uint32_t msTime);
void jpegRendertransparent(int xpos, int ypos,uint16_t transparent);
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