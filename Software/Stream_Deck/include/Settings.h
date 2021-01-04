#ifndef _SETTINGS_H_
#define _SETTINGS_H_


/*StreamDeckKey Settings*/
const static int Button1 = 27; /*Analog input for the first 4 buttons*/
const static int Button2 =  2; /*Analog input for the last 4 buttons*/


/*LCD Settings*/
const static int TFT_CS1 = 22;    /* chip select of the display_1 */
const static int TFT_CS2 =  1;    /* chip select of the display_2 */
const static int TFT_CS3 =  3;    /* chip select of the display_3 */
const static int TFT_CS4 = 21;    /* chip select of the display_4 */
const static int TFT_CS5 =  5;    /* chip select of the display_5 */
const static int TFT_CS6 = 17;    /* chip select of the display_6 */
const static int TFT_CS7 = 16;    /* chip select of the display_7 */
const static int TFT_CS8 =  4;    /* chip select of the display_8 CS0 PADRÃO*/
/*change pins in User_Setup.h

#define TFT_MISO 19
#define TFT_MOSI 23
#define TFT_SCLK 18
#define TFT_CS    -1 // Not connected
#define TFT_DC   25
#define TFT_RST  26  // Connect reset to ensure display initialises
*/
/*RotaryEncoder Settings*/

const static int knob1_pin1 = 36;
const static int knob1_pin2 = 39;
const static int knob2_pin1 = 34;
const static int knob2_pin2 = 35;
const static int knob3_pin1 = 32;
const static int knob3_pin2 = 33;

/*Sd Card reader pins*/
const static int SdCardMISO = 12;       //GPIO12 é o HSPI MISO   GPIO19 é o VSPI MISO
const static int SdCardMOSI = 13;       //GPIO13 é o HSPI MOSI   GPIO23 é o VSPI MOSI
const static int SdCardSCLK = 14;       //GPIO14 é o HSPI CLK    GPIO18 é o VSPI CLK
const static int SdCardCS   = 15;       //GPIO15 é o HSPI CS0    GPIO05 é o VSPI CS0
/*O VSPI esta sendo utilizado para os displays*/
/*------------------------------------------------------------------------*/

#endif  /*_SETTINGS_H_*/
 
