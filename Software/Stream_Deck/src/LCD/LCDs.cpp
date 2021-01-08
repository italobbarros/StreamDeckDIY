#include "LCD/LCDs.h"
//#include "SdCardFile/SdCardFile.h"
//#include <SdFat.h> 
#include <Settings.h>
#include "KeyboardLCD/KeyboardLCD.h"
#include "Img1.h"
#include "Img2.h"

/* handle of the tasks*/
TaskHandle_t taskLCD1Handle = NULL;
TaskHandle_t taskLCD2Handle = NULL;
TaskHandle_t taskLCD3Handle = NULL;
TaskHandle_t taskLCD4Handle = NULL;
TaskHandle_t taskLCD5Handle = NULL;
TaskHandle_t taskLCD6Handle = NULL;


bool AtualizaLCD1 = false;
bool AtualizaLCD2 = false;
bool AtualizaLCD3 = false;
bool AtualizaLCD4 = false;
bool AtualizaLCD5 = false;
bool AtualizaLCD6 = false;

TFT_eSPI tft = TFT_eSPI();

void InitLCDs(uint8_t rotation){/*LCDs initialize*/
  pinMode(TFT_CS1,OUTPUT);
  pinMode(TFT_CS2,OUTPUT);
  pinMode(TFT_CS3,OUTPUT);
  uint8_t tam_text = 8;
  for(int i=1;i<9;i++){
    Serial.println("Lcd: " + String(i));
    decoLCD(i);
    tft.init();
    tft.setTextSize(tam_text);
    tft.setRotation(rotation);
  }
}
void decoLCD(int CS){/*LCDs decodificator*/
    switch (CS)
    {
    case 1:
      digitalWrite(TFT_CS1, LOW);
      digitalWrite(TFT_CS2, LOW);
      digitalWrite(TFT_CS3, LOW);
    break;
    case 2:
      digitalWrite(TFT_CS1, HIGH);
      digitalWrite(TFT_CS2, LOW);
      digitalWrite(TFT_CS3, LOW);
    break;
    case 3:
      digitalWrite(TFT_CS1, LOW);
      digitalWrite(TFT_CS2, HIGH);
      digitalWrite(TFT_CS3, LOW);
    break;
    case 4:
      digitalWrite(TFT_CS1, HIGH);
      digitalWrite(TFT_CS2, HIGH);
      digitalWrite(TFT_CS3, LOW);
    break;
    case 5:
      digitalWrite(TFT_CS1, LOW);
      digitalWrite(TFT_CS2, LOW);
      digitalWrite(TFT_CS3, HIGH);
    break;
    case 6:
      digitalWrite(TFT_CS1, HIGH);
      digitalWrite(TFT_CS2, LOW);
      digitalWrite(TFT_CS3, HIGH);
    break;
    default:
      digitalWrite(TFT_CS3, HIGH);    //padrao nao vai ter nenhum display conectado
      digitalWrite(TFT_CS3, HIGH);
      digitalWrite(TFT_CS3, HIGH);
    break;
    }
}
void vTaskLCD1(void *pvParameters){/*Atualiza o display*/
  while (1){
    if(AtualizaLCD1 != StatusLCD1){
      if(StatusLCD1){
        decoLCD(1);
        LCD(Img1);
        Serial.println("imagem1");
      }
      else{
        decoLCD(1);
        LCD(Img2);
        Serial.println("imagem2");
      }
      AtualizaLCD1 = StatusLCD1;
    }  
    vTaskDelay(pdMS_TO_TICKS(100));
  }
}
void vTaskLCD2(void *pvParameters){/*Atualiza o display*/
  while (1){
    if(AtualizaLCD2 != StatusLCD2){
      if(StatusLCD2){
        decoLCD(2);
        LCD(Img1);
        Serial.println("imagem1");
      }
      else{
        decoLCD(2);
        LCD(Img2);
        Serial.println("imagem2");
      }
      AtualizaLCD2 = StatusLCD2;
    }
    vTaskDelay(pdMS_TO_TICKS(100));
  }
}
void vTaskLCD3(void *pvParameters){/*Atualiza o display*/
  while (1){
    if(AtualizaLCD3 != StatusLCD3){
      if(StatusLCD3){
        decoLCD(3);
        LCD(Img1);
        Serial.println("imagem1");
      }
      else{
        decoLCD(3);
        LCD(Img2);
        Serial.println("imagem2");
      }
      AtualizaLCD3 = StatusLCD3;
    }
    vTaskDelay(pdMS_TO_TICKS(100));
  }
}
void vTaskLCD4(void *pvParameters){/*Atualiza o display*/
  while (1){
    if(AtualizaLCD4 != StatusLCD4){
      if(StatusLCD4){
        decoLCD(4);
        LCD(Img1);
        Serial.println("imagem1");
      }
      else{
        decoLCD(4);
        LCD(Img2);
        Serial.println("imagem2");
      }
      AtualizaLCD4 = StatusLCD4;
    }
    vTaskDelay(pdMS_TO_TICKS(100));
  }
}
void vTaskLCD5(void *pvParameters){/*Atualiza o display*/
  while (1){
    if(AtualizaLCD5 != StatusLCD5){
      if(StatusLCD5){
        decoLCD(5);
        LCD(Img1);
        Serial.println("imagem1");
      }
      else{
        decoLCD(5);
        LCD(Img2);
        Serial.println("imagem2");
      }
      AtualizaLCD5 = StatusLCD5;
    }
    vTaskDelay(pdMS_TO_TICKS(100));
  }
}
void vTaskLCD6(void *pvParameters){/*Atualiza o display*/
  while (1){
    if(AtualizaLCD6 != StatusLCD6){
      if(StatusLCD6){
        decoLCD(6);
        LCD(Img1);
        Serial.println("imagem1");
      }
      else{
        decoLCD(6);
        LCD(Img2);
        Serial.println("imagem2");
      }
      AtualizaLCD6 = StatusLCD6;
    }
    vTaskDelay(pdMS_TO_TICKS(100));
  }
}
void LCD(const uint16_t* imagem){
  tft.setSwapBytes(true);
  tft.pushImage(0,0,240,240,imagem);
}
void TaskCreateLCDsReceive(void){
  xTaskCreatePinnedToCore(vTaskLCD1,"vTaskLCD1",configMINIMAL_STACK_SIZE+1024,NULL,2,&taskLCD1Handle,APP_CPU_NUM);
  /*xTaskCreatePinnedToCore(vTaskLCD2,"vTaskLCD2",configMINIMAL_STACK_SIZE+1024,NULL,2,&taskLCD2Handle,APP_CPU_NUM);
  xTaskCreatePinnedToCore(vTaskLCD3,"vTaskLCD3",configMINIMAL_STACK_SIZE+1024,NULL,2,&taskLCD3Handle,APP_CPU_NUM);
  xTaskCreatePinnedToCore(vTaskLCD4,"vTaskLCD4",configMINIMAL_STACK_SIZE+1024,NULL,2,&taskLCD4Handle,APP_CPU_NUM);
  xTaskCreatePinnedToCore(vTaskLCD5,"vTaskLCD5",configMINIMAL_STACK_SIZE+1024,NULL,2,&taskLCD5Handle,APP_CPU_NUM);
  xTaskCreatePinnedToCore(vTaskLCD6,"vTaskLCD6",configMINIMAL_STACK_SIZE+1024,NULL,2,&taskLCD6Handle,APP_CPU_NUM);
  */
}
