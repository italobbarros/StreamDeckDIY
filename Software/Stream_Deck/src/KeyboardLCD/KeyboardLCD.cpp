#include "KeyboardLCD.h"

TaskHandle_t mappingKeyboardhandle ;
//variavel que determina se a tela esta no modo 1 ou modo 2
bool StatusLCD1,StatusLCD2,StatusLCD3,StatusLCD4,StatusLCD5,StatusLCD6; 

bool StatusPush1_Atual, StatusPush1_Last;
bool StatusPush2_Atual, StatusPush2_Last;
bool StatusPush3_Atual, StatusPush3_Last;
bool StatusPush4_Atual, StatusPush4_Last;
bool StatusPush5_Atual, StatusPush5_Last;
bool StatusPush6_Atual, StatusPush6_Last;

void mappingKeyboard (int Button1){
    uint16_t value = analogRead(Button1);
    if(value<200){
        Serial.println("BT1: "+ String(value));
        StatusPush1_Atual = true;
        if(StatusPush1_Atual != StatusPush1_Last){
            StatusLCD1= !StatusLCD1;
            StatusPush1_Last = StatusPush1_Atual;
        }
    }
    else if (value>300 && value<1000){
        Serial.println("BT2: "+ String(value));
        
    }
    else if (value>1100 && value<1700){
        Serial.println("BT3: "+ String(value));
             
    }
    else if (value>1800 && value<2200){
        Serial.println("BT4: "+ String(value));
             
    }
    else if (value>2300 && value<2900){
        Serial.println("BT5: "+ String(value));
             
    }
    else if (value>3000 && value<3500){
        Serial.println("BT6: "+ String(value));
              
    }
    else{
        StatusPush1_Atual = false;
        StatusPush1_Last  = StatusPush1_Atual;
        
    }
    vTaskDelay(pdMS_TO_TICKS(100));
}
void vTaskmappingKeyboard(void *pvParameters){ /*Task resposible for mapping keyboard*/
    pinMode(Button1,INPUT);
    StatusPush1_Atual = false;
    StatusPush1_Last  = StatusPush1_Atual;
    while (1)
    {
        mappingKeyboard(Button1);
    }
}
void TaskCreateKeymapping(void){
  xTaskCreatePinnedToCore(vTaskmappingKeyboard,"vTaskmappingKeyboard",configMINIMAL_STACK_SIZE+1024,NULL,10,&mappingKeyboardhandle,PRO_CPU_NUM);
}
