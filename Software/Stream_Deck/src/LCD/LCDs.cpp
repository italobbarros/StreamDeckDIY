#include "LCD/LCDs.h"
//#include "SdCardFile/SdCardFile.h"
#include <Settings.h>
#include "KeyboardLCD/KeyboardLCD.h"
#include <JPEGDecoder.h>

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

#define number 52
#define minimum(a,b)     (((a) < (b)) ? (a) : (b))

const char* jpeg[]={
"/00.jpg","/01.jpg","/02.jpg","/03.jpg","/04.jpg","/05.jpg","/06.jpg","/07.jpg","/08.jpg","/09.jpg","/10.jpg","/11.jpg","/12.jpg","/13.jpg","/14.jpg","/15.jpg","/16.jpg","/17.jpg","/18.jpg","/19.jpg","/20.jpg",
"/21.jpg","/22.jpg","/23.jpg","/24.jpg","/25.jpg","/26.jpg","/27.jpg","/28.jpg","/29.jpg","/30.jpg","/31.jpg","/32.jpg","/33.jpg","/34.jpg","/35.jpg","/36.jpg","/37.jpg","/38.jpg","/39.jpg","/40.jpg","/41.jpg",
"/42.jpg","/43.jpg","/44.jpg","/45.jpg","/46.jpg","/47.jpg","/48.jpg","/49.jpg","/50.jpg","/51.jpg","/52.jpg"
};


TFT_eSPI tft = TFT_eSPI();

void InitLCDs(uint8_t rotation){/*LCDs initialize*/
  uint8_t tam_text = 8;
  pinMode(TFT_CS1,OUTPUT);
  pinMode(TFT_CS2,OUTPUT);
  pinMode(TFT_CS3,OUTPUT);
  tft.init();
  tft.setTextSize(tam_text);
  tft.setRotation(rotation);
  tft.fillScreen(TFT_BLACK);

  if (!SPIFFS.begin()) {
    Serial.println("SPIFFS initialisation failed!");
    while (1) yield(); // Stay here twiddling thumbs waiting
  }
  Serial.println("\r\nInitialisation done.");
  listFiles(); // Lists the files so you can see what is in the SPIFFS

  vTaskDelay(pdMS_TO_TICKS(100));
  /*
  for(int i=1;i<9;i++){
    Serial.println("Lcd: " + String(i));
    decoLCD(i);
    tft.init();
    tft.setTextSize(tam_text);
    tft.setRotation(rotation);
  }*/
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
  drawJpeg("/default.jpg", 0, 0);
  vTaskDelay(pdMS_TO_TICKS(1000));
  drawJpeg(jpeg[0], 0, 0);
  while (1){
    if(AtualizaLCD1 != StatusLCD1){
      if(!StatusLCD1){
        decoLCD(1);
        //LCD(Img1);
        drawJpeg(jpeg[0], 0, 0);
      }
      else{
        decoLCD(1);
        drawJpeg(jpeg[1], 0, 0);
      }
      AtualizaLCD1 = StatusLCD1;
    }  
    vTaskDelay(pdMS_TO_TICKS(100));
  }
}
void LCD(const uint16_t* imagem){
  tft.setSwapBytes(true);
  tft.pushImage(0,0,240,240,imagem);
}
//####################################################################################################
// Draw a JPEG on the TFT pulled from SD Card
//####################################################################################################
// xpos, ypos is top left corner of plotted image
void drawJpeg(const char *filename, int xpos, int ypos) {

  Serial.println("===========================");
  Serial.print("Drawing file: "); Serial.println(filename);
  Serial.println("===========================");

  // Open the named file (the Jpeg decoder library will close it after rendering image)
  fs::File jpegFile = SPIFFS.open( filename, "r");    // File handle reference for SPIFFS
  //  File jpegFile = SD.open( filename, FILE_READ);  // or, file handle reference for SD library

  //ESP32 always seems to return 1 for jpegFile so this null trap does not work
  if ( !jpegFile ) {
    Serial.print("ERROR: File \""); Serial.print(filename); Serial.println ("\" not found!");
    return;
  }

  // Use one of the three following methods to initialise the decoder,
  // the filename can be a String or character array type:

  //boolean decoded = JpegDec.decodeFsFile(jpegFile); // Pass a SPIFFS file handle to the decoder,
  //boolean decoded = JpegDec.decodeSdFile(jpegFile); // or pass the SD file handle to the decoder,
  boolean decoded = JpegDec.decodeFsFile(filename);  // or pass the filename (leading / distinguishes SPIFFS files)

  if (decoded) {
    // print information about the image to the serial port
    //jpegInfo();

    // render the image onto the screen at given coordinates
    jpegRender(xpos, ypos);
  }
  else {
    Serial.println("Jpeg file format not supported!");
  }
}

//####################################################################################################
// Draw a JPEG on the TFT, images will be cropped on the right/bottom sides if they do not fit
//####################################################################################################
// This function assumes xpos,ypos is a valid screen coordinate. For convenience images that do not
// fit totally on the screen are cropped to the nearest MCU size and may leave right/bottom borders.
void jpegRender(int xpos, int ypos) {

  // retrieve infomration about the image
  uint16_t  *pImg;
  int16_t mcu_w = JpegDec.MCUWidth;
  int16_t mcu_h = JpegDec.MCUHeight;
  int32_t max_x = JpegDec.width;
  int32_t max_y = JpegDec.height;

  // Jpeg images are draw as a set of image block (tiles) called Minimum Coding Units (MCUs)
  // Typically these MCUs are 16x16 pixel blocks
  // Determine the width and height of the right and bottom edge image blocks
  int32_t min_w = minimum(mcu_w, max_x % mcu_w);
  int32_t min_h = minimum(mcu_h, max_y % mcu_h);

  // save the current image block size
  int32_t win_w = mcu_w;
  int32_t win_h = mcu_h;

  // record the current time so we can measure how long it takes to draw an image
  //uint32_t drawTime = millis();

  // save the coordinate of the right and bottom edges to assist image cropping
  // to the screen size
  max_x += xpos;
  max_y += ypos;

  // read each MCU block until there are no more
  while ( JpegDec.readSwappedBytes()) { // Swapped byte order read

    // save a pointer to the image block
    pImg = JpegDec.pImage;

    // calculate where the image block should be drawn on the screen
    int mcu_x = JpegDec.MCUx * mcu_w + xpos;  // Calculate coordinates of top left corner of current MCU
    int mcu_y = JpegDec.MCUy * mcu_h + ypos;

    // check if the image block size needs to be changed for the right edge
    if (mcu_x + mcu_w <= max_x) win_w = mcu_w;
    else win_w = min_w;

    // check if the image block size needs to be changed for the bottom edge
    if (mcu_y + mcu_h <= max_y) win_h = mcu_h;
    else win_h = min_h;

    // copy pixels into a contiguous block
    if (win_w != mcu_w)
    {
      for (int h = 1; h < win_h-1; h++)
      {
        memcpy(pImg + h * win_w, pImg + (h + 1) * mcu_w, win_w << 1);
      }
    }

    // draw image MCU block only if it will fit on the screen
    if ( mcu_x < tft.width() && mcu_y < tft.height())
    {
      // Now push the image block to the screen
      tft.pushImage(mcu_x, mcu_y, win_w, win_h, pImg);
    }

    else if ( ( mcu_y + win_h) >= tft.height()) JpegDec.abort();

  }

  // calculate how long it took to draw the image
  //drawTime = millis() - drawTime; // Calculate the time it took

  // print the results to the serial port
  //Serial.print  ("Total render time was    : "); Serial.print(drawTime); Serial.println(" ms");
  //Serial.println("=====================================");

}

void createArray(const char *filename) {

  // Open the named file
  fs::File jpgFile = SPIFFS.open( filename, "r");    // File handle reference for SPIFFS
  //  File jpgFile = SD.open( filename, FILE_READ);  // or, file handle reference for SD library

  if ( !jpgFile ) {
    Serial.print("ERROR: File \""); Serial.print(filename); Serial.println ("\" not found!");
    return;
  }

  uint8_t data;
  byte line_len = 0;
  Serial.println("");
  Serial.println("// Generated by a JPEGDecoder library example sketch:");
  Serial.println("// https://github.com/Bodmer/JPEGDecoder");
  Serial.println("");
  Serial.println("#if defined(__AVR__)");
  Serial.println("  #include <avr/pgmspace.h>");
  Serial.println("#endif");
  Serial.println("");
  Serial.print  ("const uint8_t ");
  while (*filename != '.') Serial.print(*filename++);
  Serial.println("[] PROGMEM = {"); // PROGMEM added for AVR processors, it is ignored by Due

  while ( jpgFile.available()) {

    data = jpgFile.read();
    Serial.print("0x"); if (abs(data) < 16) Serial.print("0");
    Serial.print(data, HEX); Serial.print(",");// Add value and comma
    line_len++;
    if ( line_len >= 32) {
      line_len = 0;
      Serial.println();
    }

  }

  Serial.println("};\r\n");
  jpgFile.close();
}
/*====================================================================================
  This sketch contains support functions for the ESP6266 SPIFFS filing system

  Created by Bodmer 15th Jan 2017
  Updated by Bodmer to support ESP32 with SPIFFS Jan 2018
  ==================================================================================*/

//====================================================================================
//                 Print a SPIFFS directory list (root directory)
//====================================================================================

#ifdef ESP32

void listFiles(void) {
  listDir(SPIFFS, "/", 0);
}

void listDir(fs::FS &fs, const char * dirname, uint8_t levels) {

  Serial.println();
  Serial.println("SPIFFS files found:");

  Serial.printf("Listing directory: %s\n", "/");
  String  line = "=====================================";

  Serial.println(line);
  Serial.println("  File name               Size");
  Serial.println(line);

  fs::File root = fs.open(dirname);
  if (!root) {
    Serial.println("Failed to open directory");
    return;
  }
  if (!root.isDirectory()) {
    Serial.println("Not a directory");
    return;
  }

  fs::File file = root.openNextFile();
  while (file) {

    if (file.isDirectory()) {
      Serial.print("DIR : ");
      String fileName = file.name();
      Serial.print(fileName);
      if (levels) {
        listDir(fs, file.name(), levels - 1);
      }
    } else {
      String fileName = file.name();
      Serial.print("  " + fileName);
      int spaces = 20 - fileName.length(); // Tabulate nicely
      while (spaces--) Serial.print(" ");
      String fileSize = (String) file.size();
      spaces = 10 - fileSize.length(); // Tabulate nicely
      while (spaces--) Serial.print(" ");
      Serial.println(fileSize + " bytes");
    }

    file = root.openNextFile();
  }

  Serial.println(line);
  Serial.println();
  delay(1000);
}
#endif

void TaskCreateLCDsReceive(void){
  xTaskCreatePinnedToCore(vTaskLCD1,"vTaskLCD1",configMINIMAL_STACK_SIZE+1024+1024,NULL,2,&taskLCD1Handle,APP_CPU_NUM);
  /*xTaskCreatePinnedToCore(vTaskLCD2,"vTaskLCD2",configMINIMAL_STACK_SIZE+1024,NULL,2,&taskLCD2Handle,APP_CPU_NUM);
  xTaskCreatePinnedToCore(vTaskLCD3,"vTaskLCD3",configMINIMAL_STACK_SIZE+1024,NULL,2,&taskLCD3Handle,APP_CPU_NUM);
  xTaskCreatePinnedToCore(vTaskLCD4,"vTaskLCD4",configMINIMAL_STACK_SIZE+1024,NULL,2,&taskLCD4Handle,APP_CPU_NUM);
  xTaskCreatePinnedToCore(vTaskLCD5,"vTaskLCD5",configMINIMAL_STACK_SIZE+1024,NULL,2,&taskLCD5Handle,APP_CPU_NUM);
  xTaskCreatePinnedToCore(vTaskLCD6,"vTaskLCD6",configMINIMAL_STACK_SIZE+1024,NULL,2,&taskLCD6Handle,APP_CPU_NUM);
  */
}
