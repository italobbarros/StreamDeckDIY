
#ifndef _INITLCDS_H_
#define _INITLCDS_H_

#include <Arduino.h>
#include <TFT_eSPI.h>

int TFT_CS1 =  22;   /* chip select for display_1 */
int TFT_CS2 =  1;    /* chip select for display_2 */
int TFT_CS3 = 3 ;    /* chip select for display_3 */
int TFT_CS4 = 21;    /* chip select for display_4 */
int TFT_CS5 = 17;    /* chip select for display_5 */
int TFT_CS6 = 16;    /* chip select for display_6 */
int TFT_CS7 = 12;    /* chip select for display_7 */
int TFT_CS8 = 15;    /* chip select for display_8 */

void InitLCDs(void);/*função que inicializa os 8 LCDs*/
  
#endif