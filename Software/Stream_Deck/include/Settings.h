#ifndef _SETTINGS_H_
#define _SETTINGS_H_

#define Number_displays 6

/*StreamDeckKey Settings*/
const static int Button1 = 33; /*Analog input for the first 4 buttons*/
/*LCD Settings*/

extern bool StatusLCD1; //variavel que determina se a tela esta no modo 1 ou modo 2
extern bool StatusLCD2; //variavel que determina se a tela esta no modo 1 ou modo 2
extern bool StatusLCD3; //variavel que determina se a tela esta no modo 1 ou modo 2
extern bool StatusLCD4; //variavel que determina se a tela esta no modo 1 ou modo 2
extern bool StatusLCD5; //variavel que determina se a tela esta no modo 1 ou modo 2
extern bool StatusLCD6; //variavel que determina se a tela esta no modo 1 ou modo 2

const static int TFT_CS1 = 22;    /* chip select 1 */
const static int TFT_CS2 =  1;    /* chip select 2 */
const static int TFT_CS3 =  3;    /* chip select 3 */
/*change pins in User_Setup.h

#define TFT_MOSI 13
#define TFT_SCLK 14
#define TFT_CS   -1 // Not connected
#define TFT_DC   4
#define TFT_RST  2  // Connect reset to ensure display initialises
*/
/*RotaryEncoder Settings*/

const static int knob1_pin1 = 36;
const static int knob1_pin2 = 39;
const static int knob2_pin1 = 5;
const static int knob2_pin2 = 35;
const static int knob3_pin1 = 32;
const static int knob3_pin2 = 25;
extern int knob1value,knob2value,knob3value;

/*Keyboard LCD*/

/*Sd Card reader pins*/
const static int SD_MISO_PIN = 19;       //GPIO12 é o HSPI MISO   GPIO19 é o VSPI MISO
const static int SD_MOSI_PIN = 23;       //GPIO13 é o HSPI MOSI   GPIO23 é o VSPI MOSI
const static int SD_SCK_PIN  = 18;       //GPIO14 é o HSPI CLK    GPIO18 é o VSPI CLK
const static int SD_SS_PIN   = 34;       //GPIO15 é o HSPI CS0    GPIO05 é o VSPI CS0
/*O VSPI esta sendo utilizado para os displays*/
/*------------------------------------------------------------------------*/

#endif  /*_SETTINGS_H_*/
 
