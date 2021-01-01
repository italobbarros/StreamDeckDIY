/*
    Exemplos para criação de tasks
    esse exemplo exibe como criar tarefas no freertos

*/
/*biblioteca do arduino*/
#include <Arduino.h>
/*biblioteca do FreeRTOS*/
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include <Wire.h>  
#include <SPI.h>
#include <InitLCDs.h>
#define ENCODER_DO_NOT_USE_INTERRUPTS
#include <BleKeyboard.h>/*biblioteca para fazer o teclado bluetooth*/
#include <SendKeyboard.h>
#include <TFT_eSPI.h>
#include "User_Setups/Setup24_ST7789.h"
/*#include <Encoder.h>*/

#define Button1 32 /*entrada analogica para os primeiros 4 botoes*/
#define Button2 33 /*entrada analogica para os ultimos 4 botoes*/


/* variaveis para armazenamento do handle das tasks*/
TaskHandle_t task1Handle1 = NULL;
TaskHandle_t task1Handle2 = NULL;
TaskHandle_t task1Handle3 = NULL;
TaskHandle_t task1Handle4 = NULL;
TaskHandle_t task1Handle5 = NULL;
TaskHandle_t task1Handle6 = NULL;
TaskHandle_t task1Handle7 = NULL;
TaskHandle_t task1Handle8 = NULL;
TaskHandle_t task2Handle = NULL;

TFT_eSPI tft = TFT_eSPI();

/* prototipos das tasks*/
void vTask1(void *pvParameters);
void vTask2(void *pvParameters);

BleKeyboard bleKeyboard;

void setup() {
  Serial.begin(115200);
  InitLCDs(); /*função que inicializa os 8 LCDs*/
  Serial.println("Starting BLE work!");
  bleKeyboard.begin();
  xTaskCreatePinnedToCore(vTask1,"TASK1",configMINIMAL_STACK_SIZE+1024,(void*) TFT_CS1,2,&task1Handle1,APP_CPU_NUM);
  xTaskCreatePinnedToCore(vTask1,"TASK2",configMINIMAL_STACK_SIZE+1024,(void*) TFT_CS2,2,&task1Handle2,APP_CPU_NUM);
  xTaskCreatePinnedToCore(vTask1,"TASK3",configMINIMAL_STACK_SIZE+1024,(void*) TFT_CS3,2,&task1Handle3,APP_CPU_NUM);
  xTaskCreatePinnedToCore(vTask1,"TASK4",configMINIMAL_STACK_SIZE+1024,(void*) TFT_CS4,2,&task1Handle4,APP_CPU_NUM);
  xTaskCreatePinnedToCore(vTask1,"TASK5",configMINIMAL_STACK_SIZE+1024,(void*) TFT_CS5,2,&task1Handle5,APP_CPU_NUM);
  xTaskCreatePinnedToCore(vTask1,"TASK6",configMINIMAL_STACK_SIZE+1024,(void*) TFT_CS6,2,&task1Handle6,APP_CPU_NUM);
  xTaskCreatePinnedToCore(vTask1,"TASK7",configMINIMAL_STACK_SIZE+1024,(void*) TFT_CS7,2,&task1Handle7,APP_CPU_NUM);
  xTaskCreatePinnedToCore(vTask1,"TASK8",configMINIMAL_STACK_SIZE+1024,(void*) TFT_CS8,2,&task1Handle8,APP_CPU_NUM);
  xTaskCreatePinnedToCore(vTask2,"TASK2",configMINIMAL_STACK_SIZE+1024+1024,NULL,1,&task2Handle,PRO_CPU_NUM);
}

void loop() {
}

void vTask1(void *pvParameters){/*Atualiza o display*/
  int CS = (int)pvParameters; 
  while (1)
  {
    digitalWrite(CS,LOW); /*inicio da comunicação com os display*/
    /*
    código aqui
    */
    digitalWrite(CS,HIGH); /*Fim da comunicação com os display*/
  }
  
}
void vTask2(void *pvParameters){ /*mapeia e envia o comando do botao clicado*/
  
  pinMode(Button1,INPUT);
  pinMode(Button2,INPUT);

  while (1)
  {
    if(bleKeyboard.isConnected()){
      delay(1000);
      SendKeyboard(analogRead(Button1),analogRead(Button2)); 
    }
  }
}
