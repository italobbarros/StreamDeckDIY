#include "SdCardFile/SdCardFile.h"
#include <Settings.h>

File Img1,Img2,Img3,Img4,Img5,Img6,Img7,Img8,Padrao;
void SDInit(void){
    Serial.println("Inicializando o cartão SD...");
    if(SD.begin (SdCardCS, SdCardMOSI, SdCardMISO, SdCardSCLK)){// inicializar biblioteca com pinos SPI
        Serial.println("Inicialização concluida!");
    }else{
        Serial.println("Inicialização FALHOU!");
    }
}
int ImgOpen(int index ){
    switch (index)
    {
    case 1:
        Img1 = SD.open("img1.h");
        return ImgRead(Img1);
        break;
    case 2:
        Img2 = SD.open("img2.h");
        return ImgRead(Img2);
        break;
    case 3:
        Img3 = SD.open("img3.h");
        return ImgRead(Img3);
        break;
    case 4:
        Img4 = SD.open("img4.h");
        return ImgRead(Img4);
        break;
    case 5:
        Img5 = SD.open("img5.h");
        return ImgRead(Img5);
        break;
    case 6:
        Img6 = SD.open("img6.h");
        return ImgRead(Img6);
        break;
    case 7:
        Img7 = SD.open("img7.h");
        return ImgRead(Img7);
        break;
    case 8:
        Img8 = SD.open("img8.h");
        return ImgRead(Img8);
        break;
    default:
        Padrao = SD.open("Padrao.h");
        return ImgRead(Padrao);
        break;
    }    
}
int ImgRead(File img){
    if (img) {    
        /* read from the file until there's nothing else in it */
        while (img.available()) {
        /* read the file and print to Terminal */
            Serial.println("Opening file :" + String(img));
            return img.read();  
        }
        img.close();
    }else{
        Serial.println("error opening file :" + String(img));
    }
}
