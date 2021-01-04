#include "RotaryEncoder/RotaryEncoder.h"
#include <Settings.h>

TaskHandle_t task3Handle  = NULL;
int knob1LastState,knob2LastState,knob3LastState;
int knob1value,knob2value,knob3value;
void InitKnob(void){
    pinMode(knob1_pin1,INPUT);
    pinMode(knob1_pin2,INPUT);
    pinMode(knob2_pin1,INPUT);
    pinMode(knob2_pin2,INPUT);
    pinMode(knob3_pin1,INPUT);
    pinMode(knob3_pin2,INPUT);

    knob1LastState = digitalRead(knob1_pin1);
    knob2LastState = digitalRead(knob2_pin1);
    knob3LastState = digitalRead(knob2_pin1);  
}
int mappingRotEncoder(int pin1,int pin2,int knobLastState,int value){
    int aState = digitalRead(pin1); // Reads the "current" state of the outputA
    // If the previous and the current state of the outputA are different, that means a Pulse has occured
    if (aState != knobLastState){     
    // If the outputB state is different to the outputA state, that means the encoder is rotating clockwise
        if (digitalRead(pin2) != aState) { 
            value ++;
        } 
        else {
            value --;
        }
        //Serial.print("Position: ");
        //Serial.println(value);
        return value;
    } 
    knobLastState = aState; // Updates the previous state of the outputA with the current state
 }
void vTask3(void *pvParameters){ /*Task resposible for mapping encoder*/
  InitKnob();
  int value1 = 0;
  int value2 = 0;
  int value3 = 0;
  knob1value=0;
  knob2value=0;
  knob3value=0;
  while (1)
  {
    knob1value = mappingRotEncoder(knob1_pin1,knob1_pin2,knob1LastState,value1);
    knob2value = mappingRotEncoder(knob2_pin1,knob2_pin2,knob2LastState,value2);
    knob3value = mappingRotEncoder(knob3_pin1,knob3_pin2,knob3LastState,value3);
  }
}

int knobValue(int num){
  if(num==1){
    return knob1value;
  }else if(num==2){
    return knob2value;
  }
  else{
    return knob3value;
  }
}
void TaskCreateEncoder(void){
  xTaskCreatePinnedToCore(vTask3,"TASK3.1",configMINIMAL_STACK_SIZE+1024+1024+1024,NULL,1,&task3Handle,PRO_CPU_NUM);
}

