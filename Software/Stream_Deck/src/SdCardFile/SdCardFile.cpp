#include "SdCardFile/SdCardFile.h"
#include <Settings.h>
#include "SD.h" // Biblioteca com as funções referentes ao SD card

void SDInit(void){
  Serial.println("Inicializando o cartão SD...");
  if(SD.begin (SD_SS_PIN)){// inicializar biblioteca com pinos SPI
      Serial.println("Inicialização concluida!");
  }else{
      Serial.println("Inicialização FALHOU!");
    }
}