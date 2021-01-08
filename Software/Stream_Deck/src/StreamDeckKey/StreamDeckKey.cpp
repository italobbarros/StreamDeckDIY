#include "StreamDeckKey/StreamDeckKey.h"
#include <Settings.h>

TaskHandle_t TaskSendBleKeyHandle  = NULL;
BleKeyboard bleKeyboard;
TaskHandle_t TaskSendEncoderHandle1 = NULL;
TaskHandle_t TaskSendEncoderHandle2 = NULL;
TaskHandle_t TaskSendEncoderHandle3 = NULL;
bool AtualizaBLE1 = false;
void Sendkey(const uint8_t key1, const uint8_t key2){
  Serial.println("Sending: "+ String(key1)+ " + " + String(key2));
  bleKeyboard.press(key1);
  bleKeyboard.press(key2);
  vTaskDelay(pdMS_TO_TICKS(100));
  bleKeyboard.releaseAll();
}
void SendBleKey (void){
  if(bleKeyboard.isConnected()){
    //Serial.println("Dispositivo conectado!");
    vTaskDelay(pdMS_TO_TICKS(50));
    if(AtualizaBLE1 != StatusLCD1){
      if(StatusLCD1){
        Sendkey(KEY_LEFT_CTRL,KEY_F23);
      }
      else{
        Sendkey(KEY_LEFT_CTRL,KEY_F24);
      }
      AtualizaBLE1 = StatusLCD1;
    }
  }  
  else{
        Serial.println("Nenhum dispositivo conectado");
        vTaskDelay(pdMS_TO_TICKS(5000));
  }
  vTaskDelay(pdMS_TO_TICKS(100));
}
void vTaskSendBleKey(void *pvParameters){ /*Task resposible for send keyboard bluetooth*/
  Serial.println("Starting BLE work!");
  bleKeyboard.begin();          /*Bluetooth Keyboard initialize*/
  vTaskDelay(pdMS_TO_TICKS(1000));
  while (1)
  {
    SendBleKey();
  }
}
void vTaskSendEncoder(void *pvParameters){
  int Valueknob = (int)pvParameters;
  while(1){
    if(bleKeyboard.isConnected()){  /*falta ajeitar o que ele vai mandar*/
      vTaskDelay(pdMS_TO_TICKS(1000));
      /*
      
      código

      */
    }
  }
}
void TaskCreateSendBleKey(void){
  xTaskCreatePinnedToCore(vTaskSendBleKey,"vTaskSendBleKey",configMINIMAL_STACK_SIZE+1024+1024,NULL,1,&TaskSendBleKeyHandle,PRO_CPU_NUM);
}
void TaskCreateSendEncoder(int knob1_value_receive,int knob2_value_receive,int knob3_value_receive ){
  xTaskCreatePinnedToCore(vTaskSendEncoder,"TaskSendEncoder1",configMINIMAL_STACK_SIZE+1024+1024,(void*) knob1_value_receive,2,&TaskSendEncoderHandle1,PRO_CPU_NUM);
  xTaskCreatePinnedToCore(vTaskSendEncoder,"TaskSendEncoder2",configMINIMAL_STACK_SIZE+1024+1024,(void*) knob2_value_receive,2,&TaskSendEncoderHandle2,PRO_CPU_NUM);
  xTaskCreatePinnedToCore(vTaskSendEncoder,"TaskSendEncoder3",configMINIMAL_STACK_SIZE+1024+1024,(void*) knob3_value_receive,2,&TaskSendEncoderHandle3,PRO_CPU_NUM);
}
