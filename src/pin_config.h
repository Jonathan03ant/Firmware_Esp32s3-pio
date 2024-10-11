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
	{5, "GPIO", "INPUT", "LOW"},					// GPIO5 (CAM_SIOC ----- ADC1_CH4 -- T6)
	{6, "GPIO", "INPUT", "LOW"},         // GPIO6
	{7, "GPIO", "INPUT", "LOW"},         // GPIO7
	{8, "GPIO", "INPUT", "LOW"},         // GPIO8
	{9, "GPIO", "INPUT", "LOW"},         // GPIO9
	{10, "GPIO", "INPUT", "LOW"},        // GPIO10
	{11, "GPIO", "INPUT", "LOW"},        // GPIO11
	{12, "GPIO", "INPUT", "LOW"},        // GPIO12
	{13, "GPIO", "INPUT", "LOW"},        // GPIO13
	{14, "GPIO", "INPUT", "LOW"},        // GPIO14
	{15, "GPIO", "INPUT", "LOW"},        // GPIO15
	{16, "GPIO", "INPUT", "LOW"},        // GPIO16
	{17, "GPIO", "INPUT", "LOW"},        // GPIO17
	{18, "GPIO", "INPUT", "LOW"},        // GPIO18
	{19, "GPIO", "INPUT", "LOW"},        // GPIO19
	{20, "RESERVED", "N/A", "N/A"},      // Not available
	{21, "GPIO", "INPUT", "LOW"},        // GPIO21
	{22, "RESERVED", "N/A", "N/A"},      // Reserved for SDIO
	{23, "RESERVED", "N/A", "N/A"},      // Reserved
	{24, "RESERVED", "N/A", "N/A"},      // Reserved
	{25, "RESERVED", "N/A", "N/A"},      // Reserved
	{26, "RESERVED", "N/A", "N/A"},      // Reserved (PSRAM)
	{27, "GPIO", "INPUT", "LOW"},        // GPIO27
	{33, "GPIO", "INPUT", "LOW"},        // GPIO33
	{34, "GPIO", "INPUT", "LOW"},        // GPIO34
	{35, "GPIO_BOOT", "INPUT", "LOW"},   // GPIO35 (Boot function)
	{36, "RESERVED", "N/A", "N/A"},      // Reserved (PSRAM)
	{37, "GPIO", "INPUT", "LOW"},        // GPIO37
	{38, "GPIO", "INPUT", "LOW"},        // GPIO38
	{39, "GPIO", "INPUT", "LOW"},        // GPIO39
	{40, "GPIO", "INPUT", "LOW"},        // GPIO40
	{41, "GPIO", "INPUT", "LOW"},        // GPIO41
	{42, "GPIO", "INPUT", "LOW"},        // GPIO42
	{43, "GPIO", "INPUT", "LOW"},        // GPIO43
	{44, "GPIO", "INPUT", "LOW"},        // GPIO44
	{45, "GPIO", "INPUT", "LOW"},        // GPIO45
	{46, "GPIO", "INPUT", "LOW"},        // GPIO46
	{47, "GPIO", "INPUT", "LOW"},        // GPIO47
	{48, "GPIO", "INPUT", "LOW"},        // GPIO48
	{49, "RESERVED", "N/A", "N/A"},      // 3.3V Pin
	{50, "RESERVED", "N/A", "N/A"},      // 5V Pin
	{51, "RESERVED", "N/A", "N/A"},      // GND Pin
	{52, "RESERVED", "N/A", "N/A"},      // GND Pin
};


	











#endif 
