#include "StreamDeckKey/StreamDeckKey.h"
#include <Settings.h>

TaskHandle_t task2Handle  = NULL;
BleKeyboard bleKeyboard;
TaskHandle_t TaskSendEncoderHandle1 = NULL;
TaskHandle_t TaskSendEncoderHandle2 = NULL;
TaskHandle_t TaskSendEncoderHandle3 = NULL;

void bleInit(void){
  Serial.println("Starting BLE work!");
  bleKeyboard.begin();
}
void SendKeyboard (uint16_t AnalogReadButton1,uint16_t AnalogReadButton2){
    if(bleKeyboard.isConnected()){
      vTaskDelay(pdMS_TO_TICKS(1000));
      if(analogRead(AnalogReadButton1)<570){
        /*Serial.println("Sending Alt+F1...");*/
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F1);
        vTaskDelay(pdMS_TO_TICKS(100));
        bleKeyboard.releaseAll();
      }else if (analogRead(AnalogReadButton1)>600||analogRead(AnalogReadButton1)<680)
      {
        /*Serial.println("Sending Alt+F2...");*/
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F2);
        vTaskDelay(pdMS_TO_TICKS(100));
        bleKeyboard.releaseAll();
      }else if (analogRead(AnalogReadButton1)>710||analogRead(AnalogReadButton1)<790)
      {
        /*Serial.println("Sending Alt+F3...");*/
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F3);
        vTaskDelay(pdMS_TO_TICKS(100));
        bleKeyboard.releaseAll();
      }else if (analogRead(AnalogReadButton1)>800||analogRead(AnalogReadButton1)<900)
      {
        /*Serial.println("Sending Alt+F4...");*/
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F4);
        vTaskDelay(pdMS_TO_TICKS(100));
        bleKeyboard.releaseAll();
      }
      else if(analogRead(AnalogReadButton2)<570){
        /*Serial.println("Sending Alt+F5...");*/
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F5);
        vTaskDelay(pdMS_TO_TICKS(100));
        bleKeyboard.releaseAll();
      }else if (analogRead(AnalogReadButton2)>600||analogRead(AnalogReadButton2)<680)
      {
        /*Serial.println("Sending Alt+F6...");*/
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F6);
        vTaskDelay(pdMS_TO_TICKS(100));
        bleKeyboard.releaseAll();
      }else if (analogRead(AnalogReadButton2)>710||analogRead(AnalogReadButton2)<790)
      {
        /*Serial.println("Sending Alt+F7...");*/
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F7);
        vTaskDelay(pdMS_TO_TICKS(100));
        bleKeyboard.releaseAll();
      }else if (analogRead(AnalogReadButton2)>800||analogRead(AnalogReadButton2)<900)
      {
        /*Serial.println("Sending Alt+F4...");*/
        bleKeyboard.press(KEY_LEFT_ALT);
        bleKeyboard.press(KEY_F8);
        vTaskDelay(pdMS_TO_TICKS(100));
        bleKeyboard.releaseAll();
      }
    }
}
void vTask2(void *pvParameters){ /*Task resposible for mapping keyboard*/
  pinMode(Button1,INPUT);
  pinMode(Button2,INPUT);
  while (1)
  {
    SendKeyboard(analogRead(Button1),analogRead(Button2));
  }
}
void vTaskSendEncoder(void *pvParameters){
  int value = (int)pvParameters;
  while(1){
    if(bleKeyboard.isConnected()){
      vTaskDelay(pdMS_TO_TICKS(1000));
      bleKeyboard.write(value);
      vTaskDelay(pdMS_TO_TICKS(10));
    }
  }
}
void TaskCreateKeyboard(void){
  xTaskCreatePinnedToCore(vTask2,"TASK2.1",configMINIMAL_STACK_SIZE+1024+1024,NULL,2,&task2Handle,PRO_CPU_NUM);
}
void TaskCreateSendEncoder(int knob1_value_receive,int knob2_value_receive,int knob3_value_receive ){
  xTaskCreatePinnedToCore(vTaskSendEncoder,"TaskSendEncoder1",configMINIMAL_STACK_SIZE+1024+1024,(void*) knob1_value_receive,2,&TaskSendEncoderHandle1,PRO_CPU_NUM);
  xTaskCreatePinnedToCore(vTaskSendEncoder,"TaskSendEncoder2",configMINIMAL_STACK_SIZE+1024+1024,(void*) knob2_value_receive,2,&TaskSendEncoderHandle2,PRO_CPU_NUM);
  xTaskCreatePinnedToCore(vTaskSendEncoder,"TaskSendEncoder3",configMINIMAL_STACK_SIZE+1024+1024,(void*) knob3_value_receive,2,&TaskSendEncoderHandle3,PRO_CPU_NUM);
}
