EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 5 5
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
L Connector:Conn_01x08_Female J?
U 1 1 5FF6B73E
P 4050 1750
AR Path="/5FF6B73E" Ref="J?"  Part="1" 
AR Path="/5FF41A88/5FF6B73E" Ref="J1"  Part="1" 
F 0 "J1" V 4123 1730 50  0000 C CNN
F 1 "DISPLAY1" V 4214 1730 50  0000 C CNN
F 2 "" H 4050 1750 50  0001 C CNN
F 3 "~" H 4050 1750 50  0001 C CNN
	1    4050 1750
	0    -1   1    0   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5FF6B744
P 3750 1400
AR Path="/5FF6B744" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B744" Ref="#PWR012"  Part="1" 
F 0 "#PWR012" H 3750 1150 50  0001 C CNN
F 1 "GND" H 3755 1227 50  0000 C CNN
F 2 "" H 3750 1400 50  0001 C CNN
F 3 "" H 3750 1400 50  0001 C CNN
	1    3750 1400
	-1   0    0    1   
$EndComp
Wire Wire Line
	3750 1400 3750 1550
Wire Wire Line
	3850 1350 3850 1550
$Comp
L power:+3V3 #PWR?
U 1 1 5FF6B74C
P 3850 1350
AR Path="/5FF6B74C" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B74C" Ref="#PWR014"  Part="1" 
F 0 "#PWR014" H 3850 1200 50  0001 C CNN
F 1 "+3V3" H 3865 1523 50  0000 C CNN
F 2 "" H 3850 1350 50  0001 C CNN
F 3 "" H 3850 1350 50  0001 C CNN
	1    3850 1350
	1    0    0    -1  
$EndComp
Text GLabel 3950 1550 1    50   Input ~ 0
CLK
Text GLabel 4050 1550 1    50   Input ~ 0
MOSI
Text GLabel 4150 1550 1    50   Input ~ 0
RST
Text GLabel 4450 1550 1    50   Input ~ 0
BLK
Text GLabel 4250 1550 1    50   Input ~ 0
CS1
$Comp
L Connector:Conn_01x08_Female J?
U 1 1 5FF6B757
P 5000 1750
AR Path="/5FF6B757" Ref="J?"  Part="1" 
AR Path="/5FF41A88/5FF6B757" Ref="J2"  Part="1" 
F 0 "J2" V 5073 1730 50  0000 C CNN
F 1 "DISPLAY2" V 5164 1730 50  0000 C CNN
F 2 "" H 5000 1750 50  0001 C CNN
F 3 "~" H 5000 1750 50  0001 C CNN
	1    5000 1750
	0    -1   1    0   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5FF6B75D
P 4700 1400
AR Path="/5FF6B75D" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B75D" Ref="#PWR018"  Part="1" 
F 0 "#PWR018" H 4700 1150 50  0001 C CNN
F 1 "GND" H 4705 1227 50  0000 C CNN
F 2 "" H 4700 1400 50  0001 C CNN
F 3 "" H 4700 1400 50  0001 C CNN
	1    4700 1400
	-1   0    0    1   
$EndComp
Wire Wire Line
	4700 1400 4700 1550
Wire Wire Line
	4800 1350 4800 1550
$Comp
L power:+3V3 #PWR?
U 1 1 5FF6B765
P 4800 1350
AR Path="/5FF6B765" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B765" Ref="#PWR020"  Part="1" 
F 0 "#PWR020" H 4800 1200 50  0001 C CNN
F 1 "+3V3" H 4815 1523 50  0000 C CNN
F 2 "" H 4800 1350 50  0001 C CNN
F 3 "" H 4800 1350 50  0001 C CNN
	1    4800 1350
	1    0    0    -1  
$EndComp
Text GLabel 4900 1550 1    50   Input ~ 0
CLK
Text GLabel 5000 1550 1    50   Input ~ 0
MOSI
Text GLabel 5100 1550 1    50   Input ~ 0
RST
Text GLabel 5400 1550 1    50   Input ~ 0
BLK
Text GLabel 5200 1550 1    50   Input ~ 0
CS2
$Comp
L Connector:Conn_01x08_Female J?
U 1 1 5FF6B770
P 5950 1750
AR Path="/5FF6B770" Ref="J?"  Part="1" 
AR Path="/5FF41A88/5FF6B770" Ref="J3"  Part="1" 
F 0 "J3" V 6023 1730 50  0000 C CNN
F 1 "DISPLAY3" V 6114 1730 50  0000 C CNN
F 2 "" H 5950 1750 50  0001 C CNN
F 3 "~" H 5950 1750 50  0001 C CNN
	1    5950 1750
	0    -1   1    0   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5FF6B776
P 5650 1400
AR Path="/5FF6B776" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B776" Ref="#PWR026"  Part="1" 
F 0 "#PWR026" H 5650 1150 50  0001 C CNN
F 1 "GND" H 5655 1227 50  0000 C CNN
F 2 "" H 5650 1400 50  0001 C CNN
F 3 "" H 5650 1400 50  0001 C CNN
	1    5650 1400
	-1   0    0    1   
$EndComp
Wire Wire Line
	5650 1400 5650 1550
Wire Wire Line
	5750 1350 5750 1550
$Comp
L power:+3V3 #PWR?
U 1 1 5FF6B77E
P 5750 1350
AR Path="/5FF6B77E" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B77E" Ref="#PWR028"  Part="1" 
F 0 "#PWR028" H 5750 1200 50  0001 C CNN
F 1 "+3V3" H 5765 1523 50  0000 C CNN
F 2 "" H 5750 1350 50  0001 C CNN
F 3 "" H 5750 1350 50  0001 C CNN
	1    5750 1350
	1    0    0    -1  
$EndComp
Text GLabel 5850 1550 1    50   Input ~ 0
CLK
Text GLabel 5950 1550 1    50   Input ~ 0
MOSI
Text GLabel 6050 1550 1    50   Input ~ 0
RST
Text GLabel 6350 1550 1    50   Input ~ 0
BLK
Text GLabel 6150 1550 1    50   Input ~ 0
CS3
$Comp
L Connector:Conn_01x08_Female J?
U 1 1 5FF6B789
P 6900 1750
AR Path="/5FF6B789" Ref="J?"  Part="1" 
AR Path="/5FF41A88/5FF6B789" Ref="J4"  Part="1" 
F 0 "J4" V 6973 1730 50  0000 C CNN
F 1 "DISPLAY4" V 7064 1730 50  0000 C CNN
F 2 "" H 6900 1750 50  0001 C CNN
F 3 "~" H 6900 1750 50  0001 C CNN
	1    6900 1750
	0    -1   1    0   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5FF6B78F
P 6600 1400
AR Path="/5FF6B78F" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B78F" Ref="#PWR050"  Part="1" 
F 0 "#PWR050" H 6600 1150 50  0001 C CNN
F 1 "GND" H 6605 1227 50  0000 C CNN
F 2 "" H 6600 1400 50  0001 C CNN
F 3 "" H 6600 1400 50  0001 C CNN
	1    6600 1400
	-1   0    0    1   
$EndComp
Wire Wire Line
	6600 1400 6600 1550
Wire Wire Line
	6700 1350 6700 1550
$Comp
L power:+3V3 #PWR?
U 1 1 5FF6B797
P 6700 1350
AR Path="/5FF6B797" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B797" Ref="#PWR052"  Part="1" 
F 0 "#PWR052" H 6700 1200 50  0001 C CNN
F 1 "+3V3" H 6715 1523 50  0000 C CNN
F 2 "" H 6700 1350 50  0001 C CNN
F 3 "" H 6700 1350 50  0001 C CNN
	1    6700 1350
	1    0    0    -1  
$EndComp
Text GLabel 6800 1550 1    50   Input ~ 0
CLK
Text GLabel 6900 1550 1    50   Input ~ 0
MOSI
Text GLabel 7000 1550 1    50   Input ~ 0
RST
Text GLabel 7300 1550 1    50   Input ~ 0
BLK
Text GLabel 7100 1550 1    50   Input ~ 0
CS4
$Comp
L Connector:Conn_01x08_Female J?
U 1 1 5FF6B7A2
P 4050 2800
AR Path="/5FF6B7A2" Ref="J?"  Part="1" 
AR Path="/5FF41A88/5FF6B7A2" Ref="J5"  Part="1" 
F 0 "J5" V 4123 2780 50  0000 C CNN
F 1 "DISPLAY5" V 4214 2780 50  0000 C CNN
F 2 "" H 4050 2800 50  0001 C CNN
F 3 "~" H 4050 2800 50  0001 C CNN
	1    4050 2800
	0    -1   1    0   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5FF6B7A8
P 3750 2450
AR Path="/5FF6B7A8" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B7A8" Ref="#PWR013"  Part="1" 
F 0 "#PWR013" H 3750 2200 50  0001 C CNN
F 1 "GND" H 3755 2277 50  0000 C CNN
F 2 "" H 3750 2450 50  0001 C CNN
F 3 "" H 3750 2450 50  0001 C CNN
	1    3750 2450
	-1   0    0    1   
$EndComp
Wire Wire Line
	3750 2450 3750 2600
Wire Wire Line
	3850 2400 3850 2600
$Comp
L power:+3V3 #PWR?
U 1 1 5FF6B7B0
P 3850 2400
AR Path="/5FF6B7B0" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B7B0" Ref="#PWR015"  Part="1" 
F 0 "#PWR015" H 3850 2250 50  0001 C CNN
F 1 "+3V3" H 3865 2573 50  0000 C CNN
F 2 "" H 3850 2400 50  0001 C CNN
F 3 "" H 3850 2400 50  0001 C CNN
	1    3850 2400
	1    0    0    -1  
$EndComp
Text GLabel 3950 2600 1    50   Input ~ 0
CLK
Text GLabel 4050 2600 1    50   Input ~ 0
MOSI
Text GLabel 4150 2600 1    50   Input ~ 0
RST
Text GLabel 4450 2600 1    50   Input ~ 0
BLK
$Comp
L Connector:Conn_01x08_Female J?
U 1 1 5FF6B7BA
P 5000 2800
AR Path="/5FF6B7BA" Ref="J?"  Part="1" 
AR Path="/5FF41A88/5FF6B7BA" Ref="J6"  Part="1" 
F 0 "J6" V 5073 2780 50  0000 C CNN
F 1 "DISPLAY6" V 5164 2780 50  0000 C CNN
F 2 "" H 5000 2800 50  0001 C CNN
F 3 "~" H 5000 2800 50  0001 C CNN
	1    5000 2800
	0    -1   1    0   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5FF6B7C0
P 4700 2450
AR Path="/5FF6B7C0" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B7C0" Ref="#PWR019"  Part="1" 
F 0 "#PWR019" H 4700 2200 50  0001 C CNN
F 1 "GND" H 4705 2277 50  0000 C CNN
F 2 "" H 4700 2450 50  0001 C CNN
F 3 "" H 4700 2450 50  0001 C CNN
	1    4700 2450
	-1   0    0    1   
$EndComp
Wire Wire Line
	4700 2450 4700 2600
Wire Wire Line
	4800 2400 4800 2600
$Comp
L power:+3V3 #PWR?
U 1 1 5FF6B7C8
P 4800 2400
AR Path="/5FF6B7C8" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B7C8" Ref="#PWR021"  Part="1" 
F 0 "#PWR021" H 4800 2250 50  0001 C CNN
F 1 "+3V3" H 4815 2573 50  0000 C CNN
F 2 "" H 4800 2400 50  0001 C CNN
F 3 "" H 4800 2400 50  0001 C CNN
	1    4800 2400
	1    0    0    -1  
$EndComp
Text GLabel 4900 2600 1    50   Input ~ 0
CLK
Text GLabel 5000 2600 1    50   Input ~ 0
MOSI
Text GLabel 5100 2600 1    50   Input ~ 0
RST
Text GLabel 5400 2600 1    50   Input ~ 0
BLK
$Comp
L Connector:Conn_01x08_Female J?
U 1 1 5FF6B7D2
P 5950 2800
AR Path="/5FF6B7D2" Ref="J?"  Part="1" 
AR Path="/5FF41A88/5FF6B7D2" Ref="J7"  Part="1" 
F 0 "J7" V 6023 2780 50  0000 C CNN
F 1 "DISPLAY7" V 6114 2780 50  0000 C CNN
F 2 "" H 5950 2800 50  0001 C CNN
F 3 "~" H 5950 2800 50  0001 C CNN
	1    5950 2800
	0    -1   1    0   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5FF6B7D8
P 5650 2450
AR Path="/5FF6B7D8" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B7D8" Ref="#PWR027"  Part="1" 
F 0 "#PWR027" H 5650 2200 50  0001 C CNN
F 1 "GND" H 5655 2277 50  0000 C CNN
F 2 "" H 5650 2450 50  0001 C CNN
F 3 "" H 5650 2450 50  0001 C CNN
	1    5650 2450
	-1   0    0    1   
$EndComp
Wire Wire Line
	5650 2450 5650 2600
Wire Wire Line
	5750 2400 5750 2600
$Comp
L power:+3V3 #PWR?
U 1 1 5FF6B7E0
P 5750 2400
AR Path="/5FF6B7E0" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B7E0" Ref="#PWR045"  Part="1" 
F 0 "#PWR045" H 5750 2250 50  0001 C CNN
F 1 "+3V3" H 5765 2573 50  0000 C CNN
F 2 "" H 5750 2400 50  0001 C CNN
F 3 "" H 5750 2400 50  0001 C CNN
	1    5750 2400
	1    0    0    -1  
$EndComp
Text GLabel 5850 2600 1    50   Input ~ 0
CLK
Text GLabel 5950 2600 1    50   Input ~ 0
MOSI
Text GLabel 6050 2600 1    50   Input ~ 0
RST
Text GLabel 6350 2600 1    50   Input ~ 0
BLK
Text GLabel 6150 2600 1    50   Input ~ 0
CS7
$Comp
L Connector:Conn_01x08_Female J?
U 1 1 5FF6B7EB
P 6900 2800
AR Path="/5FF6B7EB" Ref="J?"  Part="1" 
AR Path="/5FF41A88/5FF6B7EB" Ref="J8"  Part="1" 
F 0 "J8" V 6973 2780 50  0000 C CNN
F 1 "DISPLAY8" V 7064 2780 50  0000 C CNN
F 2 "" H 6900 2800 50  0001 C CNN
F 3 "~" H 6900 2800 50  0001 C CNN
	1    6900 2800
	0    -1   1    0   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5FF6B7F1
P 6600 2450
AR Path="/5FF6B7F1" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B7F1" Ref="#PWR051"  Part="1" 
F 0 "#PWR051" H 6600 2200 50  0001 C CNN
F 1 "GND" H 6605 2277 50  0000 C CNN
F 2 "" H 6600 2450 50  0001 C CNN
F 3 "" H 6600 2450 50  0001 C CNN
	1    6600 2450
	-1   0    0    1   
$EndComp
Wire Wire Line
	6600 2450 6600 2600
Wire Wire Line
	6700 2400 6700 2600
$Comp
L power:+3V3 #PWR?
U 1 1 5FF6B7F9
P 6700 2400
AR Path="/5FF6B7F9" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B7F9" Ref="#PWR053"  Part="1" 
F 0 "#PWR053" H 6700 2250 50  0001 C CNN
F 1 "+3V3" H 6715 2573 50  0000 C CNN
F 2 "" H 6700 2400 50  0001 C CNN
F 3 "" H 6700 2400 50  0001 C CNN
	1    6700 2400
	1    0    0    -1  
$EndComp
Text GLabel 6800 2600 1    50   Input ~ 0
CLK
Text GLabel 6900 2600 1    50   Input ~ 0
MOSI
Text GLabel 7000 2600 1    50   Input ~ 0
RST
Text GLabel 7300 2600 1    50   Input ~ 0
BLK
Text GLabel 7100 2600 1    50   Input ~ 0
CS8
$Comp
L Device:R R?
U 1 1 5FF6B804
P 4750 3550
AR Path="/5FF6B804" Ref="R?"  Part="1" 
AR Path="/5FF41A88/5FF6B804" Ref="R2"  Part="1" 
F 0 "R2" V 4543 3550 50  0000 C CNN
F 1 "500R" V 4634 3550 50  0000 C CNN
F 2 "" V 4680 3550 50  0001 C CNN
F 3 "~" H 4750 3550 50  0001 C CNN
	1    4750 3550
	0    1    1    0   
$EndComp
$Comp
L Device:R R?
U 1 1 5FF6B80A
P 5250 3550
AR Path="/5FF6B80A" Ref="R?"  Part="1" 
AR Path="/5FF41A88/5FF6B80A" Ref="R6"  Part="1" 
F 0 "R6" V 5043 3550 50  0000 C CNN
F 1 "500R" V 5134 3550 50  0000 C CNN
F 2 "" V 5180 3550 50  0001 C CNN
F 3 "~" H 5250 3550 50  0001 C CNN
	1    5250 3550
	0    1    1    0   
$EndComp
$Comp
L Device:R R?
U 1 1 5FF6B810
P 5750 3550
AR Path="/5FF6B810" Ref="R?"  Part="1" 
AR Path="/5FF41A88/5FF6B810" Ref="R10"  Part="1" 
F 0 "R10" V 5543 3550 50  0000 C CNN
F 1 "500R" V 5634 3550 50  0000 C CNN
F 2 "" V 5680 3550 50  0001 C CNN
F 3 "~" H 5750 3550 50  0001 C CNN
	1    5750 3550
	0    1    1    0   
$EndComp
$Comp
L Device:R R?
U 1 1 5FF6B816
P 6250 3550
AR Path="/5FF6B816" Ref="R?"  Part="1" 
AR Path="/5FF41A88/5FF6B816" Ref="R14"  Part="1" 
F 0 "R14" V 6043 3550 50  0000 C CNN
F 1 "500R" V 6134 3550 50  0000 C CNN
F 2 "" V 6180 3550 50  0001 C CNN
F 3 "~" H 6250 3550 50  0001 C CNN
	1    6250 3550
	0    1    1    0   
$EndComp
Wire Wire Line
	6100 3550 6000 3550
Wire Wire Line
	5600 3550 5500 3550
Wire Wire Line
	5100 3550 5000 3550
$Comp
L Device:R R?
U 1 1 5FF6B81F
P 5000 3800
AR Path="/5FF6B81F" Ref="R?"  Part="1" 
AR Path="/5FF41A88/5FF6B81F" Ref="R4"  Part="1" 
F 0 "R4" V 4793 3800 50  0000 C CNN
F 1 "500R" V 4884 3800 50  0000 C CNN
F 2 "" V 4930 3800 50  0001 C CNN
F 3 "~" H 5000 3800 50  0001 C CNN
	1    5000 3800
	1    0    0    -1  
$EndComp
$Comp
L Device:R R?
U 1 1 5FF6B825
P 5500 3800
AR Path="/5FF6B825" Ref="R?"  Part="1" 
AR Path="/5FF41A88/5FF6B825" Ref="R8"  Part="1" 
F 0 "R8" V 5293 3800 50  0000 C CNN
F 1 "500R" V 5384 3800 50  0000 C CNN
F 2 "" V 5430 3800 50  0001 C CNN
F 3 "~" H 5500 3800 50  0001 C CNN
	1    5500 3800
	1    0    0    -1  
$EndComp
$Comp
L Device:R R?
U 1 1 5FF6B82B
P 6000 3800
AR Path="/5FF6B82B" Ref="R?"  Part="1" 
AR Path="/5FF41A88/5FF6B82B" Ref="R12"  Part="1" 
F 0 "R12" V 5793 3800 50  0000 C CNN
F 1 "500R" V 5884 3800 50  0000 C CNN
F 2 "" V 5930 3800 50  0001 C CNN
F 3 "~" H 6000 3800 50  0001 C CNN
	1    6000 3800
	1    0    0    -1  
$EndComp
$Comp
L Device:R R?
U 1 1 5FF6B831
P 6500 3800
AR Path="/5FF6B831" Ref="R?"  Part="1" 
AR Path="/5FF41A88/5FF6B831" Ref="R16"  Part="1" 
F 0 "R16" V 6293 3800 50  0000 C CNN
F 1 "500R" V 6384 3800 50  0000 C CNN
F 2 "" V 6430 3800 50  0001 C CNN
F 3 "~" H 6500 3800 50  0001 C CNN
	1    6500 3800
	1    0    0    -1  
$EndComp
Wire Wire Line
	6500 3650 6500 3550
Wire Wire Line
	6500 3550 6400 3550
Wire Wire Line
	6000 3650 6000 3550
Connection ~ 6000 3550
Wire Wire Line
	6000 3550 5900 3550
Wire Wire Line
	5500 3650 5500 3550
Connection ~ 5500 3550
Wire Wire Line
	5500 3550 5400 3550
Wire Wire Line
	5000 3650 5000 3550
Connection ~ 5000 3550
Wire Wire Line
	5000 3550 4900 3550
Text GLabel 5000 3400 1    50   Input ~ 0
AN1
Wire Wire Line
	5000 3400 5000 3550
Wire Wire Line
	4600 3550 4400 3550
Wire Wire Line
	4400 3550 4400 3450
Wire Wire Line
	5100 4150 5000 4150
Wire Wire Line
	5000 3950 5000 4150
Connection ~ 5000 4150
Wire Wire Line
	5000 4150 4900 4150
Wire Wire Line
	5100 4550 5000 4550
$Comp
L power:GND #PWR?
U 1 1 5FF6B84B
P 5000 4700
AR Path="/5FF6B84B" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B84B" Ref="#PWR022"  Part="1" 
F 0 "#PWR022" H 5000 4450 50  0001 C CNN
F 1 "GND" H 5005 4527 50  0000 C CNN
F 2 "" H 5000 4700 50  0001 C CNN
F 3 "" H 5000 4700 50  0001 C CNN
	1    5000 4700
	1    0    0    -1  
$EndComp
Wire Wire Line
	5000 4700 5000 4550
Connection ~ 5000 4550
Wire Wire Line
	5000 4550 4900 4550
Wire Wire Line
	5600 4150 5500 4150
Wire Wire Line
	5500 3950 5500 4150
Connection ~ 5500 4150
Wire Wire Line
	5500 4150 5400 4150
Wire Wire Line
	5600 4550 5500 4550
$Comp
L power:GND #PWR?
U 1 1 5FF6B859
P 5500 4700
AR Path="/5FF6B859" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B859" Ref="#PWR024"  Part="1" 
F 0 "#PWR024" H 5500 4450 50  0001 C CNN
F 1 "GND" H 5505 4527 50  0000 C CNN
F 2 "" H 5500 4700 50  0001 C CNN
F 3 "" H 5500 4700 50  0001 C CNN
	1    5500 4700
	1    0    0    -1  
$EndComp
Wire Wire Line
	5500 4700 5500 4550
Connection ~ 5500 4550
Wire Wire Line
	5500 4550 5400 4550
$Comp
L Switch:SW_Push_Dual SW?
U 1 1 5FF6B862
P 5900 4350
AR Path="/5FF6B862" Ref="SW?"  Part="1" 
AR Path="/5FF41A88/5FF6B862" Ref="SW5"  Part="1" 
F 0 "SW5" H 5900 4635 50  0000 C CNN
F 1 "SW_Push_Dual" H 5900 4544 50  0000 C CNN
F 2 "" H 5900 4550 50  0001 C CNN
F 3 "~" H 5900 4550 50  0001 C CNN
	1    5900 4350
	0    -1   -1   0   
$EndComp
Wire Wire Line
	6100 4150 6000 4150
Wire Wire Line
	6000 3950 6000 4150
Connection ~ 6000 4150
Wire Wire Line
	6000 4150 5900 4150
Wire Wire Line
	6100 4550 6000 4550
$Comp
L power:GND #PWR?
U 1 1 5FF6B86D
P 6000 4700
AR Path="/5FF6B86D" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B86D" Ref="#PWR046"  Part="1" 
F 0 "#PWR046" H 6000 4450 50  0001 C CNN
F 1 "GND" H 6005 4527 50  0000 C CNN
F 2 "" H 6000 4700 50  0001 C CNN
F 3 "" H 6000 4700 50  0001 C CNN
	1    6000 4700
	1    0    0    -1  
$EndComp
Wire Wire Line
	6000 4700 6000 4550
Connection ~ 6000 4550
Wire Wire Line
	6000 4550 5900 4550
$Comp
L Switch:SW_Push_Dual SW?
U 1 1 5FF6B876
P 6400 4350
AR Path="/5FF6B876" Ref="SW?"  Part="1" 
AR Path="/5FF41A88/5FF6B876" Ref="SW7"  Part="1" 
F 0 "SW7" H 6400 4635 50  0000 C CNN
F 1 "SW_Push_Dual" H 6400 4544 50  0000 C CNN
F 2 "" H 6400 4550 50  0001 C CNN
F 3 "~" H 6400 4550 50  0001 C CNN
	1    6400 4350
	0    -1   -1   0   
$EndComp
Wire Wire Line
	6600 4150 6500 4150
Wire Wire Line
	6500 3950 6500 4150
Connection ~ 6500 4150
Wire Wire Line
	6500 4150 6400 4150
Wire Wire Line
	6600 4550 6500 4550
$Comp
L power:GND #PWR?
U 1 1 5FF6B881
P 6500 4700
AR Path="/5FF6B881" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B881" Ref="#PWR048"  Part="1" 
F 0 "#PWR048" H 6500 4450 50  0001 C CNN
F 1 "GND" H 6505 4527 50  0000 C CNN
F 2 "" H 6500 4700 50  0001 C CNN
F 3 "" H 6500 4700 50  0001 C CNN
	1    6500 4700
	1    0    0    -1  
$EndComp
Wire Wire Line
	6500 4700 6500 4550
Connection ~ 6500 4550
Wire Wire Line
	6500 4550 6400 4550
$Comp
L Switch:SW_Push_Dual SW?
U 1 1 5FF6B88A
P 4900 6200
AR Path="/5FF6B88A" Ref="SW?"  Part="1" 
AR Path="/5FF41A88/5FF6B88A" Ref="SW2"  Part="1" 
F 0 "SW2" H 4900 6485 50  0000 C CNN
F 1 "SW_Push_Dual" H 4900 6394 50  0000 C CNN
F 2 "" H 4900 6400 50  0001 C CNN
F 3 "~" H 4900 6400 50  0001 C CNN
	1    4900 6200
	0    -1   -1   0   
$EndComp
$Comp
L Device:R R?
U 1 1 5FF6B890
P 4750 5400
AR Path="/5FF6B890" Ref="R?"  Part="1" 
AR Path="/5FF41A88/5FF6B890" Ref="R3"  Part="1" 
F 0 "R3" V 4543 5400 50  0000 C CNN
F 1 "500R" V 4634 5400 50  0000 C CNN
F 2 "" V 4680 5400 50  0001 C CNN
F 3 "~" H 4750 5400 50  0001 C CNN
	1    4750 5400
	0    1    1    0   
$EndComp
$Comp
L Device:R R?
U 1 1 5FF6B896
P 5250 5400
AR Path="/5FF6B896" Ref="R?"  Part="1" 
AR Path="/5FF41A88/5FF6B896" Ref="R7"  Part="1" 
F 0 "R7" V 5043 5400 50  0000 C CNN
F 1 "500R" V 5134 5400 50  0000 C CNN
F 2 "" V 5180 5400 50  0001 C CNN
F 3 "~" H 5250 5400 50  0001 C CNN
	1    5250 5400
	0    1    1    0   
$EndComp
$Comp
L Device:R R?
U 1 1 5FF6B89C
P 5750 5400
AR Path="/5FF6B89C" Ref="R?"  Part="1" 
AR Path="/5FF41A88/5FF6B89C" Ref="R11"  Part="1" 
F 0 "R11" V 5543 5400 50  0000 C CNN
F 1 "500R" V 5634 5400 50  0000 C CNN
F 2 "" V 5680 5400 50  0001 C CNN
F 3 "~" H 5750 5400 50  0001 C CNN
	1    5750 5400
	0    1    1    0   
$EndComp
$Comp
L Device:R R?
U 1 1 5FF6B8A2
P 6250 5400
AR Path="/5FF6B8A2" Ref="R?"  Part="1" 
AR Path="/5FF41A88/5FF6B8A2" Ref="R15"  Part="1" 
F 0 "R15" V 6043 5400 50  0000 C CNN
F 1 "500R" V 6134 5400 50  0000 C CNN
F 2 "" V 6180 5400 50  0001 C CNN
F 3 "~" H 6250 5400 50  0001 C CNN
	1    6250 5400
	0    1    1    0   
$EndComp
Wire Wire Line
	6100 5400 6000 5400
Wire Wire Line
	5600 5400 5500 5400
Wire Wire Line
	5100 5400 5000 5400
$Comp
L Device:R R?
U 1 1 5FF6B8AB
P 5000 5650
AR Path="/5FF6B8AB" Ref="R?"  Part="1" 
AR Path="/5FF41A88/5FF6B8AB" Ref="R5"  Part="1" 
F 0 "R5" V 4793 5650 50  0000 C CNN
F 1 "500R" V 4884 5650 50  0000 C CNN
F 2 "" V 4930 5650 50  0001 C CNN
F 3 "~" H 5000 5650 50  0001 C CNN
	1    5000 5650
	1    0    0    -1  
$EndComp
$Comp
L Device:R R?
U 1 1 5FF6B8B1
P 5500 5650
AR Path="/5FF6B8B1" Ref="R?"  Part="1" 
AR Path="/5FF41A88/5FF6B8B1" Ref="R9"  Part="1" 
F 0 "R9" V 5293 5650 50  0000 C CNN
F 1 "500R" V 5384 5650 50  0000 C CNN
F 2 "" V 5430 5650 50  0001 C CNN
F 3 "~" H 5500 5650 50  0001 C CNN
	1    5500 5650
	1    0    0    -1  
$EndComp
$Comp
L Device:R R?
U 1 1 5FF6B8B7
P 6000 5650
AR Path="/5FF6B8B7" Ref="R?"  Part="1" 
AR Path="/5FF41A88/5FF6B8B7" Ref="R13"  Part="1" 
F 0 "R13" V 5793 5650 50  0000 C CNN
F 1 "500R" V 5884 5650 50  0000 C CNN
F 2 "" V 5930 5650 50  0001 C CNN
F 3 "~" H 6000 5650 50  0001 C CNN
	1    6000 5650
	1    0    0    -1  
$EndComp
$Comp
L Device:R R?
U 1 1 5FF6B8BD
P 6500 5650
AR Path="/5FF6B8BD" Ref="R?"  Part="1" 
AR Path="/5FF41A88/5FF6B8BD" Ref="R18"  Part="1" 
F 0 "R18" V 6293 5650 50  0000 C CNN
F 1 "500R" V 6384 5650 50  0000 C CNN
F 2 "" V 6430 5650 50  0001 C CNN
F 3 "~" H 6500 5650 50  0001 C CNN
	1    6500 5650
	1    0    0    -1  
$EndComp
Wire Wire Line
	6500 5500 6500 5400
Wire Wire Line
	6500 5400 6400 5400
Wire Wire Line
	6000 5500 6000 5400
Connection ~ 6000 5400
Wire Wire Line
	6000 5400 5900 5400
Wire Wire Line
	5500 5500 5500 5400
Connection ~ 5500 5400
Wire Wire Line
	5500 5400 5400 5400
Wire Wire Line
	5000 5500 5000 5400
Connection ~ 5000 5400
Wire Wire Line
	5000 5400 4900 5400
Text GLabel 5000 5250 1    50   Input ~ 0
AN2
Wire Wire Line
	5000 5250 5000 5400
Wire Wire Line
	4600 5400 4400 5400
Wire Wire Line
	4400 5400 4400 5300
Wire Wire Line
	5100 6000 5000 6000
Wire Wire Line
	5000 5800 5000 6000
Connection ~ 5000 6000
Wire Wire Line
	5000 6000 4900 6000
Wire Wire Line
	5100 6400 5000 6400
$Comp
L power:GND #PWR?
U 1 1 5FF6B8D7
P 5000 6550
AR Path="/5FF6B8D7" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B8D7" Ref="#PWR023"  Part="1" 
F 0 "#PWR023" H 5000 6300 50  0001 C CNN
F 1 "GND" H 5005 6377 50  0000 C CNN
F 2 "" H 5000 6550 50  0001 C CNN
F 3 "" H 5000 6550 50  0001 C CNN
	1    5000 6550
	1    0    0    -1  
$EndComp
Wire Wire Line
	5000 6550 5000 6400
Connection ~ 5000 6400
Wire Wire Line
	5000 6400 4900 6400
$Comp
L Switch:SW_Push_Dual SW?
U 1 1 5FF6B8E0
P 5400 6200
AR Path="/5FF6B8E0" Ref="SW?"  Part="1" 
AR Path="/5FF41A88/5FF6B8E0" Ref="SW4"  Part="1" 
F 0 "SW4" H 5400 6485 50  0000 C CNN
F 1 "SW_Push_Dual" H 5400 6394 50  0000 C CNN
F 2 "" H 5400 6400 50  0001 C CNN
F 3 "~" H 5400 6400 50  0001 C CNN
	1    5400 6200
	0    -1   -1   0   
$EndComp
Wire Wire Line
	5600 6000 5500 6000
Wire Wire Line
	5500 5800 5500 6000
Connection ~ 5500 6000
Wire Wire Line
	5500 6000 5400 6000
Wire Wire Line
	5600 6400 5500 6400
$Comp
L power:GND #PWR?
U 1 1 5FF6B8EB
P 5500 6550
AR Path="/5FF6B8EB" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B8EB" Ref="#PWR025"  Part="1" 
F 0 "#PWR025" H 5500 6300 50  0001 C CNN
F 1 "GND" H 5505 6377 50  0000 C CNN
F 2 "" H 5500 6550 50  0001 C CNN
F 3 "" H 5500 6550 50  0001 C CNN
	1    5500 6550
	1    0    0    -1  
$EndComp
Wire Wire Line
	5500 6550 5500 6400
Connection ~ 5500 6400
Wire Wire Line
	5500 6400 5400 6400
$Comp
L Switch:SW_Push_Dual SW?
U 1 1 5FF6B8F4
P 5900 6200
AR Path="/5FF6B8F4" Ref="SW?"  Part="1" 
AR Path="/5FF41A88/5FF6B8F4" Ref="SW6"  Part="1" 
F 0 "SW6" H 5900 6485 50  0000 C CNN
F 1 "SW_Push_Dual" H 5900 6394 50  0000 C CNN
F 2 "" H 5900 6400 50  0001 C CNN
F 3 "~" H 5900 6400 50  0001 C CNN
	1    5900 6200
	0    -1   -1   0   
$EndComp
Wire Wire Line
	6100 6000 6000 6000
Wire Wire Line
	6000 5800 6000 6000
Connection ~ 6000 6000
Wire Wire Line
	6000 6000 5900 6000
Wire Wire Line
	6100 6400 6000 6400
$Comp
L power:GND #PWR?
U 1 1 5FF6B8FF
P 6000 6550
AR Path="/5FF6B8FF" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B8FF" Ref="#PWR047"  Part="1" 
F 0 "#PWR047" H 6000 6300 50  0001 C CNN
F 1 "GND" H 6005 6377 50  0000 C CNN
F 2 "" H 6000 6550 50  0001 C CNN
F 3 "" H 6000 6550 50  0001 C CNN
	1    6000 6550
	1    0    0    -1  
$EndComp
Wire Wire Line
	6000 6550 6000 6400
Connection ~ 6000 6400
Wire Wire Line
	6000 6400 5900 6400
$Comp
L Switch:SW_Push_Dual SW?
U 1 1 5FF6B908
P 6400 6200
AR Path="/5FF6B908" Ref="SW?"  Part="1" 
AR Path="/5FF41A88/5FF6B908" Ref="SW8"  Part="1" 
F 0 "SW8" H 6400 6485 50  0000 C CNN
F 1 "SW_Push_Dual" H 6400 6394 50  0000 C CNN
F 2 "" H 6400 6400 50  0001 C CNN
F 3 "~" H 6400 6400 50  0001 C CNN
	1    6400 6200
	0    -1   -1   0   
$EndComp
Wire Wire Line
	6600 6000 6500 6000
Wire Wire Line
	6500 5800 6500 6000
Connection ~ 6500 6000
Wire Wire Line
	6500 6000 6400 6000
Wire Wire Line
	6600 6400 6500 6400
$Comp
L power:GND #PWR?
U 1 1 5FF6B913
P 6500 6550
AR Path="/5FF6B913" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B913" Ref="#PWR049"  Part="1" 
F 0 "#PWR049" H 6500 6300 50  0001 C CNN
F 1 "GND" H 6505 6377 50  0000 C CNN
F 2 "" H 6500 6550 50  0001 C CNN
F 3 "" H 6500 6550 50  0001 C CNN
	1    6500 6550
	1    0    0    -1  
$EndComp
Wire Wire Line
	6500 6550 6500 6400
Connection ~ 6500 6400
Wire Wire Line
	6500 6400 6400 6400
$Comp
L Switch:SW_Push_Dual SW?
U 1 1 5FF6B91C
P 4900 4350
AR Path="/5FF6B91C" Ref="SW?"  Part="1" 
AR Path="/5FF41A88/5FF6B91C" Ref="SW1"  Part="1" 
F 0 "SW1" V 4900 4635 50  0000 C CNN
F 1 "SW_Push_Dual" H 4900 4544 50  0000 C CNN
F 2 "" H 4900 4550 50  0001 C CNN
F 3 "~" H 4900 4550 50  0001 C CNN
	1    4900 4350
	0    -1   -1   0   
$EndComp
$Comp
L Switch:SW_Push_Dual SW?
U 1 1 5FF6B922
P 5400 4350
AR Path="/5FF6B922" Ref="SW?"  Part="1" 
AR Path="/5FF41A88/5FF6B922" Ref="SW3"  Part="1" 
F 0 "SW3" H 5400 4635 50  0000 C CNN
F 1 "SW_Push_Dual" H 5400 4544 50  0000 C CNN
F 2 "" H 5400 4550 50  0001 C CNN
F 3 "~" H 5400 4550 50  0001 C CNN
	1    5400 4350
	0    -1   -1   0   
$EndComp
Text GLabel 5200 2600 1    50   Input ~ 0
CS6
Text GLabel 4250 2600 1    50   Input ~ 0
CS5
$Comp
L power:+5V #PWR?
U 1 1 5FF6B92A
P 4400 3450
AR Path="/5FF6B92A" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B92A" Ref="#PWR016"  Part="1" 
F 0 "#PWR016" H 4400 3300 50  0001 C CNN
F 1 "+5V" H 4415 3623 50  0000 C CNN
F 2 "" H 4400 3450 50  0001 C CNN
F 3 "" H 4400 3450 50  0001 C CNN
	1    4400 3450
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR?
U 1 1 5FF6B930
P 4400 5300
AR Path="/5FF6B930" Ref="#PWR?"  Part="1" 
AR Path="/5FF41A88/5FF6B930" Ref="#PWR017"  Part="1" 
F 0 "#PWR017" H 4400 5150 50  0001 C CNN
F 1 "+5V" H 4415 5473 50  0000 C CNN
F 2 "" H 4400 5300 50  0001 C CNN
F 3 "" H 4400 5300 50  0001 C CNN
	1    4400 5300
	1    0    0    -1  
$EndComp
Text GLabel 7200 2600 1    50   Input ~ 0
DC
Text GLabel 6250 2600 1    50   Input ~ 0
DC
Text GLabel 5300 2600 1    50   Input ~ 0
DC
Text GLabel 4350 2600 1    50   Input ~ 0
DC
Text GLabel 7200 1550 1    50   Input ~ 0
DC
Text GLabel 6250 1550 1    50   Input ~ 0
DC
Text GLabel 5300 1550 1    50   Input ~ 0
DC
Text GLabel 4350 1550 1    50   Input ~ 0
DC
$EndSCHEMATC
