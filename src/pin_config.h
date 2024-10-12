#ifndef PIN_CONFIG_H
#define PIN_CONFIG_H

#include <Arduino.h>

// Enum for pin types
enum PinType {
    GPIO_PIN,
    RESERVED_PIN,
    STRAP_PIN,
    BOOT_PIN,
    POWER_3V3_PIN,
    POWER_5V_PIN,
    GND_PIN,
    RESET_PIN
};

// Structure to hold pin configuration
struct PinConfig {
    uint8_t pinNumber;
    PinType type;
};

// Static array of pin configurations
const PinConfig pinConfigs[] = {
    {0,  BOOT_PIN},        																			// GPIO0
    {1,  STRAP_PIN},       																			// GPIO1
    {2,  GPIO_PIN},        																			// GPIO2
    {3,  STRAP_PIN},       																			// GPIO3
    {4,  GPIO_PIN},        																			// GPIO4
    {5,  GPIO_PIN},        																			// GPIO5
    {6,  GPIO_PIN},        																			// GPIO6
    {7,  GPIO_PIN},       																		 	// GPIO7
    {8,  GPIO_PIN},        																			// GPIO8
    {9,  GPIO_PIN},        																			// GPIO9
    {10, GPIO_PIN},        																			// GPIO10
    {11, GPIO_PIN},        																			// GPIO11
    {12, GPIO_PIN},        																			// GPIO12
    {13, GPIO_PIN},        																			// GPIO13
    {14, GPIO_PIN},        																			// GPIO14
    {15, GPIO_PIN},        																			// GPIO15
    {16, GPIO_PIN},        																			// GPIO16
    {17, GPIO_PIN},        																			// GPIO17
    {18, GPIO_PIN},        																			// GPIO18
    {19, GPIO_PIN},        																			// GPIO19
    {20, GPIO_PIN},        																			// GPIO20
    {21, GPIO_PIN},        																			// GPIO21
    {22, RESERVED_PIN},    																			// Reserved
    {23, RESERVED_PIN},    																			// Reserved
    {24, RESERVED_PIN},    																			// Reserved
    {25, RESERVED_PIN},    																			// Reserved
    {26, RESERVED_PIN},    																			// Reserved
    {27, RESERVED_PIN},    																			// Reserved
    {28, RESERVED_PIN},    																			// Reserved
    {29, RESERVED_PIN},    																			// Reserved
    {30, RESERVED_PIN},    																			// Reserved
    {31, RESERVED_PIN},    																			// Reserved
    {32, RESERVED_PIN},    																			// Reserved
    {33, POWER_3V3_PIN},   																			// 3V3
    {34, RESERVED_PIN},    																			// Reserved
    {35, RESERVED_PIN},    																			// Reserved
    {36, RESERVED_PIN},    																			// Reserved
    {37, RESERVED_PIN},    																			// Reserved
    {38, GPIO_PIN},        																			// GPIO38
    {39, GPIO_PIN},        																			// GPIO39
    {40, GPIO_PIN},        																			// GPIO40
    {41, RESERVED_PIN},    																			// GPIO41
    {42, RESERVED_PIN},    																			// GPIO42
    {43, GPIO_PIN},        																			// GPIO43
    {44, GPIO_PIN},        																			// GPIO44
    {45, STRAP_PIN},       																			// GPIO45
    {46, STRAP_PIN},       																			// GPIO46
    {47, GPIO_PIN},        																			// GPIO47
    {48, GPIO_PIN},        																			// GPIO48
    {49, RESET_PIN},       																			// RST
    {50, POWER_5V_PIN},    																			// 5V Pin
    {51, GND_PIN},         																			// GND Pin
    
};


const size_t TOTAL_PINS = sizeof(pinConfigs) / sizeof(pinConfigs[0]);						        // Predefined Total Number of Pins

#endif  // PIN_CONFIG_H

