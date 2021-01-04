#include "LCD/LCDs.h"
#include <Settings.h>
#include "imagem.h"
/* handle of the tasks*/

TaskHandle_t task1Handle1 = NULL;
TaskHandle_t task1Handle2 = NULL;
TaskHandle_t task1Handle3 = NULL;
TaskHandle_t task1Handle4 = NULL;
TaskHandle_t task1Handle5 = NULL;
TaskHandle_t task1Handle6 = NULL;
TaskHandle_t task1Handle7 = NULL;
TaskHandle_t task1Handle8 = NULL;

TFT_eSPI tft = TFT_eSPI();

void InitLCDs(void){/*LCDs initialize*/
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

void TaskCreateLCDs(void){
  xTaskCreatePinnedToCore(vTask1,"TASK1",configMINIMAL_STACK_SIZE+1024,(void*) TFT_CS1,2,&task1Handle1,APP_CPU_NUM);
  xTaskCreatePinnedToCore(vTask1,"TASK2",configMINIMAL_STACK_SIZE+1024,(void*) TFT_CS2,2,&task1Handle2,APP_CPU_NUM);
  xTaskCreatePinnedToCore(vTask1,"TASK3",configMINIMAL_STACK_SIZE+1024,(void*) TFT_CS3,2,&task1Handle3,APP_CPU_NUM);
  xTaskCreatePinnedToCore(vTask1,"TASK4",configMINIMAL_STACK_SIZE+1024,(void*) TFT_CS4,2,&task1Handle4,APP_CPU_NUM);
  xTaskCreatePinnedToCore(vTask1,"TASK5",configMINIMAL_STACK_SIZE+1024,(void*) TFT_CS5,2,&task1Handle5,APP_CPU_NUM);
  xTaskCreatePinnedToCore(vTask1,"TASK6",configMINIMAL_STACK_SIZE+1024,(void*) TFT_CS6,2,&task1Handle6,APP_CPU_NUM);
  xTaskCreatePinnedToCore(vTask1,"TASK7",configMINIMAL_STACK_SIZE+1024,(void*) TFT_CS7,2,&task1Handle7,APP_CPU_NUM);
  xTaskCreatePinnedToCore(vTask1,"TASK8",configMINIMAL_STACK_SIZE+1024,(void*) TFT_CS8,2,&task1Handle8,APP_CPU_NUM);
}

void vTask1(void *pvParameters){/*Atualiza o display*/
  int CS = (int)pvParameters; 
  while (1)
  {
    digitalWrite(CS,LOW); /*inicio da comunicação com os display*/
    tft.setSwapBytes(true); // Swap the byte order for pushImage() - corrects endianness
    tft.fillScreen(TFT_BLACK);
    tft.pushImage(0,0,240,240,imagem);
    digitalWrite(CS,HIGH); /*Fim da comunicação com os display*/
  }
}