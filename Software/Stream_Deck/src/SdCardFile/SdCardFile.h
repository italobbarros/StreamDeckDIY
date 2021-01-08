#ifndef _SDCARDFILE_H_
#define _SDCARDFILE_H_

#include "mySD.h" // Biblioteca com as funções referentes ao SD card
#include <SPI.h>

void SDInit(void);
int ImgOpen(int index);
int ImgRead(File img);
#endif