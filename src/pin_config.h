#ifndef PIN_CONFIG_H
#define PIN_CONFIG_H

#include <Arduino.h>

struct Pin {
	int GPIO_NUMBER;						// GPIO Numbers from the module 
	String type;							// Reserved or GPIO; Pin as read from the datasheet
	String mode;							// PinMode: Input or Output
	String state;							// PinState: High or Low
};


									/* Creating List of pin structs */
Pin esp32s3Pins[] = {
	{0, "GPIO_BOOT", "INPUT", "LOW"},				// BOOT
	{1, "GPIO", "INPUT", "LOW"},					// GPIO1 (ADC1_CH0 ----------------- T1)
	{2, "GPIO", "INPUT", "LOW"},					// GPIO2 (ADC1_CH1 ----- LED ON ---- T2)
	{3, "GPIO", "INPUT", "LOW"},					// GPIO3 (JTAG EN  ----- ADC1_CH2 -- T3)
	{4, "GPIO", "INPUT", "LOW"},					// GPIO4 (CAM_SIOD ----- ADC1_CH3 -- T4)
	{5, "GPIO", "INPUT", "LOW"},					// GPIO5 (CAM_SIOC ----- ADC1_CH4 -- T5)
	{6, "GPIO", "INPUT", "LOW"},         			// GPIO6 (CAM_VSYNC ---- ADC1_CH5 -- T6)
	{7, "GPIO", "INPUT", "LOW"},         			// GPIO7 (CAM_HREF ----- ADC1_CH6 -- T7)
	{8, "GPIO", "INPUT", "LOW"},         			// GPIO8 (CAM_Y4   ----- ADC1_CH7 -- T8)
	{9, "GPIO", "INPUT", "LOW"},         			// GPIO9 (CAM_Y3   ----- ADC2_CH8 -- T9)
	{10, "GPIO", "INPUT", "LOW"},        			// GPIO10 (CAM_Y5  ----- ADC2_CH9 -- T10)
	{11, "GPIO", "INPUT", "LOW"},        			// GPIO11 (CAM_Y2  ----- ADC2_CH0 -- T11)
	{12, "GPIO", "INPUT", "LOW"},        			// GPIO12 (CAM_Y6  ----- ADC2_CH1 -- T12)
	{13, "GPIO", "INPUT", "LOW"},        			// GPIO13 (CAM_PCLK----- ADC2_CH2 -- T13)
	{14, "GPIO", "INPUT", "LOW"},        			// GPIO14 (------------- ADC2_CH3 -- T14)
	{15, "GPIO", "INPUT", "LOW"},        			// GPIO15 (CAM_XCLK----- ADC2_CH4 -- UORTS)
	{16, "GPIO", "INPUT", "LOW"},        			// GPIO16 (CAM_Y9  ----- ADC2_CH5 -- U0CTS)
	{17, "GPIO", "INPUT", "LOW"},        			// GPIO17 (CAM_Y8  ----- ADC2_CH6 -- U1TXD)
	{18, "GPIO", "INPUT", "LOW"},        			// GPIO18 (CAM_Y7  ----- ADC2_CH7 -- T8)
	{19, "GPIO", "INPUT", "LOW"},        			// GPIO19 (USB_D+  ----- ADC2_CH8 -- U1RTS)
	{20, "GPIO", "INPUT", "LOW"},        			// GPIO20 (USB_D-  ----- ADC2_CH9 -- U1CTS)
	{21, "GPIO", "INPUT", "LOW"},        			// GPIO21 
	{22, "RESERVED", "N/A", "N/A"},      			// Reserved 
	{23, "RESERVED", "N/A", "N/A"},      			// Reserved
	{24, "RESERVED", "N/A", "N/A"},      			// Reserved
	{25, "RESERVED", "N/A", "N/A"},      			// Reserved
	{26, "RESERVED", "N/A", "N/A"},      			// Reserved 
	{27, "RESERVED", "N/A", "N/A"},      			// Reserved 
	{28, "RESERVED", "N/A", "N/A"},      			// Reserved 
	{29, "RESERVED", "N/A", "N/A"},      			// Reserved 
	{30, "RESERVED", "N/A", "N/A"},      			// Reserved 
	{31, "RESERVED", "N/A", "N/A"},      			// Reserved 
	{32, "RESERVED", "INPUT", "LOW"},   			// GPIO32 
	{33, "RESERVED", "INPUT", "LOW"},   			// GPIO33 
	{34, "RESERVED", "INPUT", "LOW"},   			// GPIO34 
	{35, "RESERVED", "INPUT", "LOW"},   			// GPIO35  (PSSRAM)
	{36, "RESERVED", "INPUT", "LOW"},   			// GPIO35  (PSSRAM)
	{37, "RESERVED", "INPUT", "LOW"},   			// GPIO35  (PSSRAM)
	{38, "GPIO", "INPUT", "LOW"},        			// GPIO38  (SD_CMD)
	{39, "GPIO", "INPUT", "LOW"},        			// GPIO39  (SD_CLK  ----- MTCK) 
	{40, "GPIO", "INPUT", "LOW"},        			// GPIO40  (SD_DATA ----- MTDO)
	{41, "GPIO", "INPUT", "LOW"},        			// GPIO41  (------------- MTDI)
	{42, "GPIO", "INPUT", "LOW"},        			// GPIO42  (------------- MTMS)
	{43, "GPIO", "INPUT", "LOW"},        			// GPIO43  (U0TXD   ----- LED_TX)
	{44, "GPIO", "INPUT", "LOW"},        			// GPIO44  (U0RXD   ----- LED_RX)
	{45, "GPIO", "INPUT", "LOW"},        			// GPIO45  (VSPI)
	{46, "GPIO", "INPUT", "LOW"},        			// GPIO46  (LOG)
	{47, "GPIO", "INPUT", "LOW"},        			// GPIO47  
	{48, "GPIO", "INPUT", "LOW"},        			// GPIO48  (WS2812)
	{49, "3V3", "N/A", "N/A"},      				// 3.3V Pin
	{50, "RST", "N/A", "N/A"},      				// RST
	{51, "5V", "N/A", "N/A"},      					// 5V Pin
	{52, "GND", "N/A", "N/A"},      				// GND Pin
};


	











#endif 
