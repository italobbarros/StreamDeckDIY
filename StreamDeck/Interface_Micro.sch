EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 2 2
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L SamacSys_Parts:ATMEGA48V-10PU IC?
U 1 1 5FF1D4B6
P 3700 3000
AR Path="/5FF1D4B6" Ref="IC?"  Part="1" 
AR Path="/5FEF57A5/5FF1D4B6" Ref="IC?"  Part="1" 
F 0 "IC?" H 5200 3265 50  0000 C CNN
F 1 "ATMEGA48V-10PU" H 5200 3174 50  0000 C CNN
F 2 "DIP794W53P254L3467H457Q28N" H 6550 3100 50  0001 L CNN
F 3 "http://componentsearchengine.com/Datasheets/1/ATmega48V-10PU.pdf" H 6550 3000 50  0001 L CNN
F 4 "8-bit MCU" H 6550 2900 50  0001 L CNN "Description"
F 5 "4.572" H 6550 2800 50  0001 L CNN "Height"
F 6 "556-ATMEGA48V10PU" H 6550 2700 50  0001 L CNN "Mouser Part Number"
F 7 "https://www.mouser.co.uk/ProductDetail/Microchip-Technology-Atmel/ATMEGA48V-10PU?qs=8jWQYweyg6Ny8zKT3kF4XA%3D%3D" H 6550 2600 50  0001 L CNN "Mouser Price/Stock"
F 8 "Microchip" H 6550 2500 50  0001 L CNN "Manufacturer_Name"
F 9 "ATMEGA48V-10PU" H 6550 2400 50  0001 L CNN "Manufacturer_Part_Number"
	1    3700 3000
	1    0    0    -1  
$EndComp
$Comp
L Device:C C?
U 1 1 5FF1D4BC
P 7650 3750
AR Path="/5FF1D4BC" Ref="C?"  Part="1" 
AR Path="/5FEF57A5/5FF1D4BC" Ref="C?"  Part="1" 
F 0 "C?" H 7765 3796 50  0000 L CNN
F 1 "100nF" H 7765 3705 50  0000 L CNN
F 2 "" H 7688 3600 50  0001 C CNN
F 3 "~" H 7650 3750 50  0001 C CNN
	1    7650 3750
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR?
U 1 1 5FF1D4C2
P 7650 3500
AR Path="/5FF1D4C2" Ref="#PWR?"  Part="1" 
AR Path="/5FEF57A5/5FF1D4C2" Ref="#PWR?"  Part="1" 
F 0 "#PWR?" H 7650 3350 50  0001 C CNN
F 1 "+5V" H 7665 3673 50  0000 C CNN
F 2 "" H 7650 3500 50  0001 C CNN
F 3 "" H 7650 3500 50  0001 C CNN
	1    7650 3500
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5FF1D4C8
P 7650 4000
AR Path="/5FF1D4C8" Ref="#PWR?"  Part="1" 
AR Path="/5FEF57A5/5FF1D4C8" Ref="#PWR?"  Part="1" 
F 0 "#PWR?" H 7650 3750 50  0001 C CNN
F 1 "GND" H 7655 3827 50  0000 C CNN
F 2 "" H 7650 4000 50  0001 C CNN
F 3 "" H 7650 4000 50  0001 C CNN
	1    7650 4000
	1    0    0    -1  
$EndComp
Wire Wire Line
	7650 3500 7650 3600
Wire Wire Line
	7650 3900 7650 4000
$Comp
L Device:C C?
U 1 1 5FF1D4D0
P 8100 3750
AR Path="/5FF1D4D0" Ref="C?"  Part="1" 
AR Path="/5FEF57A5/5FF1D4D0" Ref="C?"  Part="1" 
F 0 "C?" H 8215 3796 50  0000 L CNN
F 1 "100nF" H 8215 3705 50  0000 L CNN
F 2 "" H 8138 3600 50  0001 C CNN
F 3 "~" H 8100 3750 50  0001 C CNN
	1    8100 3750
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR?
U 1 1 5FF1D4D6
P 8100 3500
AR Path="/5FF1D4D6" Ref="#PWR?"  Part="1" 
AR Path="/5FEF57A5/5FF1D4D6" Ref="#PWR?"  Part="1" 
F 0 "#PWR?" H 8100 3350 50  0001 C CNN
F 1 "+5V" H 8115 3673 50  0000 C CNN
F 2 "" H 8100 3500 50  0001 C CNN
F 3 "" H 8100 3500 50  0001 C CNN
	1    8100 3500
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5FF1D4DC
P 8100 4000
AR Path="/5FF1D4DC" Ref="#PWR?"  Part="1" 
AR Path="/5FEF57A5/5FF1D4DC" Ref="#PWR?"  Part="1" 
F 0 "#PWR?" H 8100 3750 50  0001 C CNN
F 1 "GND" H 8105 3827 50  0000 C CNN
F 2 "" H 8100 4000 50  0001 C CNN
F 3 "" H 8100 4000 50  0001 C CNN
	1    8100 4000
	1    0    0    -1  
$EndComp
Wire Wire Line
	8100 3500 8100 3600
Wire Wire Line
	8100 3900 8100 4000
$Comp
L power:GND #PWR?
U 1 1 5FF1D4E4
P 7200 3600
AR Path="/5FF1D4E4" Ref="#PWR?"  Part="1" 
AR Path="/5FEF57A5/5FF1D4E4" Ref="#PWR?"  Part="1" 
F 0 "#PWR?" H 7200 3350 50  0001 C CNN
F 1 "GND" V 7205 3472 50  0000 R CNN
F 2 "" H 7200 3600 50  0001 C CNN
F 3 "" H 7200 3600 50  0001 C CNN
	1    7200 3600
	0    -1   -1   0   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5FF1D4EA
P 3500 3700
AR Path="/5FF1D4EA" Ref="#PWR?"  Part="1" 
AR Path="/5FEF57A5/5FF1D4EA" Ref="#PWR?"  Part="1" 
F 0 "#PWR?" H 3500 3450 50  0001 C CNN
F 1 "GND" V 3505 3572 50  0000 R CNN
F 2 "" H 3500 3700 50  0001 C CNN
F 3 "" H 3500 3700 50  0001 C CNN
	1    3500 3700
	0    1    1    0   
$EndComp
Wire Wire Line
	3700 3700 3500 3700
$Comp
L power:+5V #PWR?
U 1 1 5FF1D4F1
P 3500 3600
AR Path="/5FF1D4F1" Ref="#PWR?"  Part="1" 
AR Path="/5FEF57A5/5FF1D4F1" Ref="#PWR?"  Part="1" 
F 0 "#PWR?" H 3500 3450 50  0001 C CNN
F 1 "+5V" V 3515 3728 50  0000 L CNN
F 2 "" H 3500 3600 50  0001 C CNN
F 3 "" H 3500 3600 50  0001 C CNN
	1    3500 3600
	0    -1   -1   0   
$EndComp
Wire Wire Line
	3700 3600 3500 3600
$Comp
L power:+5V #PWR?
U 1 1 5FF1D4F8
P 6950 3800
AR Path="/5FF1D4F8" Ref="#PWR?"  Part="1" 
AR Path="/5FEF57A5/5FF1D4F8" Ref="#PWR?"  Part="1" 
F 0 "#PWR?" H 6950 3650 50  0001 C CNN
F 1 "+5V" V 6965 3928 50  0000 L CNN
F 2 "" H 6950 3800 50  0001 C CNN
F 3 "" H 6950 3800 50  0001 C CNN
	1    6950 3800
	0    1    1    0   
$EndComp
Wire Wire Line
	6950 3800 6700 3800
$Comp
L Device:C C?
U 1 1 5FF1D4FF
P 6950 3700
AR Path="/5FF1D4FF" Ref="C?"  Part="1" 
AR Path="/5FEF57A5/5FF1D4FF" Ref="C?"  Part="1" 
F 0 "C?" V 6900 3800 50  0000 C CNN
F 1 "100nF" V 6950 4000 50  0000 C CNN
F 2 "" H 6988 3550 50  0001 C CNN
F 3 "~" H 6950 3700 50  0001 C CNN
	1    6950 3700
	0    1    1    0   
$EndComp
Wire Wire Line
	6700 3600 7150 3600
Wire Wire Line
	7150 3600 7150 3700
Wire Wire Line
	7150 3700 7100 3700
Connection ~ 7150 3600
Wire Wire Line
	7150 3600 7200 3600
Wire Wire Line
	6800 3700 6700 3700
Text GLabel 6700 3500 2    50   Input ~ 0
AN1
Text GLabel 6700 4000 2    50   Input ~ 0
MISO
Text GLabel 6700 4100 2    50   Input ~ 0
MOSI
Text GLabel 6700 3900 2    50   Input ~ 0
CLK
$Comp
L Switch:SW_Push_Dual SW?
U 1 1 5FF1D50F
P 4100 2400
AR Path="/5FF1D50F" Ref="SW?"  Part="1" 
AR Path="/5FEF57A5/5FF1D50F" Ref="SW?"  Part="1" 
F 0 "SW?" H 4100 2685 50  0000 C CNN
F 1 "SW_Push_Dual" H 4100 2594 50  0000 C CNN
F 2 "" H 4100 2600 50  0001 C CNN
F 3 "~" H 4100 2600 50  0001 C CNN
	1    4100 2400
	1    0    0    -1  
$EndComp
Wire Wire Line
	3900 2400 3900 2550
Wire Wire Line
	3900 2550 3500 2550
Wire Wire Line
	3500 2550 3500 3000
Wire Wire Line
	3500 3000 3700 3000
Connection ~ 3900 2550
Wire Wire Line
	3900 2550 3900 2600
Wire Wire Line
	4300 2400 4300 2500
$Comp
L power:GND #PWR?
U 1 1 5FF1D51C
P 4500 2550
AR Path="/5FF1D51C" Ref="#PWR?"  Part="1" 
AR Path="/5FEF57A5/5FF1D51C" Ref="#PWR?"  Part="1" 
F 0 "#PWR?" H 4500 2300 50  0001 C CNN
F 1 "GND" H 4505 2377 50  0000 C CNN
F 2 "" H 4500 2550 50  0001 C CNN
F 3 "" H 4500 2550 50  0001 C CNN
	1    4500 2550
	1    0    0    -1  
$EndComp
Wire Wire Line
	4300 2500 4500 2500
Wire Wire Line
	4500 2500 4500 2550
Connection ~ 4300 2500
Wire Wire Line
	4300 2500 4300 2600
Text GLabel 3700 4300 0    50   Input ~ 0
CS0
Text GLabel 3700 3100 0    50   Input ~ 0
CS1
Text GLabel 3700 3200 0    50   Input ~ 0
CS2
Text GLabel 3700 3300 0    50   Input ~ 0
CS3
Text GLabel 3700 3400 0    50   Input ~ 0
CS4
Text GLabel 3700 3500 0    50   Input ~ 0
CS5
Text GLabel 6700 3000 2    50   Input ~ 0
CS6
Text GLabel 3700 3800 0    50   Input ~ 0
XTAL1
Text GLabel 3700 3900 0    50   Input ~ 0
XTAL2
Text GLabel 6700 3100 2    50   Input ~ 0
RST
Text GLabel 6700 3400 2    50   Input ~ 0
AN2
Text GLabel 3700 4000 0    50   Input ~ 0
DC
$EndSCHEMATC
