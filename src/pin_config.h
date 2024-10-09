#ifndef PIN_CONFIG_H
#define PIN_CONFIG_H

#include <Arduino.h>

struct Pin {
	int GPIO_NUMBER;						/* GPIO Numbers from the module */
	String type;							/* Reserved or GPIO */
};


									/* Creating List of pin structs */
Pin esp32s3Pins[] = {
	{0, "__BOOT"},
	{1, "GPIO"},
	{2, "GPIO"},
	{3, "GPIO"},
	{4, "GPIO"},
	{5, "GPIO"},
	{6, "GPIO"},
	{7, "GPIO"},
	{8, "GPIO"},
	{9, "GPIO"},
	{10, "GPIO"},
	{11, "GPIO"},
	{12, "GPIO"},
	{13, "GPIO"},
	{14, "GPIO"},
	{15, "GPIO"},
	{16, "GPIO"}, 
	{17, "GPIO"},
	{18, "GPIO"},
	{19, "GPIO"},
	{20, "GPIO"},
	{21, "GPIO"},
	{22, "GPIO"},
	{23, "GPIO"},
	{24, "RESERVED"},
	{25, "RESERVED"},
	{26, "RESERVED"},
	{27, "GPIO"},
	{28, "GPIO"},
	{29, "GPIO"},
	{30, "GPIO"},
	{31, "GPIO"}, 
	{32, "GPIO"},
	{33, "__POWER"}, 
	{34, "GPIO"},
	{35, "RESERVED"}, 
	{36, "RESERVED"},
	{37, "GPIO"},
	{38, "GPIO"},
	{39, "GPIO"},
	{40, "GPIO"},
	{41, "GPIO"},
	{42, "GPIO"},
	{43, "GPIO"},
	{44, "GPIO"},
	{45, "GPIO"},
	{46, "GPIO"},
	{47, "GPIO"},
	{48, "GPIO"}
};

	











#endif 
