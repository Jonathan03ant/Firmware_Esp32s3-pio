#ifndef PIN_CONFIG_H
#define PIN_CONFIG_H

#include <Arduino.h>

const int TOTAL_GPIO_PINS = 53;  // Total number of GPIO pins on the ESP32-S3

/* Defining the Pin struct */
struct Pin {
    int GPIO_NUMBER;    // GPIO Numbers from the module 
    const char* type;        // Type: "GPIO", "RESERVED", etc.
    const char* mode;        // PinMode: "INPUT" or "OUTPUT"
    const char* state;       // PinState: "HIGH" or "LOW"
};

/* Creating list of pin structs */
Pin esp32s3Pins[] = {
    {0,  "BOOT", "NA",  "NA"},   // BOOT
    {1,  "STRAP", "NA",  "NA"},   	 // GPIO1
    {2,  "GPIO", "INPUT",  "LOW"},   // GPIO2
    {3,  "STRAP", "NA",  "NA"},   	 // GPIO3
    {4,  "GPIO", "INPUT",  "LOW"},   // GPIO4
    {5,  "GPIO", "INPUT",  "LOW"},   // GPIO5
    {6,  "GPIO", "INPUT",  "LOW"},   // GPIO6
    {7,  "GPIO", "INPUT",  "LOW"},   // GPIO7
    {8,  "GPIO", "INPUT",  "LOW"},   // GPIO8
    {9,  "GPIO", "INPUT",  "LOW"},   // GPIO9
    {10, "GPIO", "INPUT",  "LOW"},   // GPIO10
    {11, "GPIO", "INPUT",  "LOW"},   // GPIO11
    {12, "GPIO", "INPUT",  "LOW"},   // GPIO12
    {13, "GPIO", "INPUT",  "LOW"},   // GPIO13
    {14, "GPIO", "INPUT",  "LOW"},   // GPIO14
    {15, "GPIO", "INPUT",  "LOW"},   // GPIO15
    {16, "GPIO", "INPUT",  "LOW"},   // GPIO16
    {17, "GPIO", "INPUT",  "LOW"},   // GPIO17
    {18, "GPIO", "INPUT",  "LOW"},   // GPIO18
    {19, "GPIO", "INPUT",  "LOW"},   // GPIO19
    {20, "GPIO", "INPUT",  "LOW"},   // GPIO20
    {21, "GPIO", "INPUT",  "LOW"},   // GPIO21
    // Reserved pins
    {22, "RESERVED", "N/A", "N/A"},  // Reserved
    {23, "RESERVED", "N/A", "N/A"},  // Reserved
    {24, "RESERVED", "N/A", "N/A"},  // Reserved
    {25, "RESERVED", "N/A", "N/A"},  // Reserved
    {26, "RESERVED", "N/A", "N/A"},  // Reserved
    {27, "RESERVED", "N/A", "N/A"},  // Reserved
    {28, "RESERVED", "N/A", "N/A"},  // Reserved
    {29, "RESERVED", "N/A", "N/A"},  // Reserved
    {30, "RESERVED", "N/A", "N/A"},  // Reserved
    {31, "RESERVED", "N/A", "N/A"},  // Reserved
    {32, "RESERVED", "N/A", "N/A"},  // Reserved
    {33, "3V3", "N/A", "N/A"},  // Reserved
    {34, "RESERVED", "N/A", "N/A"},  // Reserved
    {35, "RESERVED", "N/A", "N/A"},  // Reserved
    {36, "RESERVED", "N/A", "N/A"},  // Reserved
    {37, "RESERVED", "N/A", "N/A"},  // Reserved
    {38, "GPIO", "INPUT",  "LOW"},   // GPIO38
    {39, "GPIO", "INPUT",  "LOW"},   // GPIO39
    {40, "GPIO", "INPUT",  "LOW"},   // GPIO40
    {41, "RESERVED", "N/A", "N/A"},  // GPIO41
    {42, "RESERBED", "NA",  "NA"},   // GPIO42
    {43, "GPIO", "INPUT",  "LOW"},   // GPIO43
    {44, "GPIO", "INPUT",  "LOW"},   // GPIO44
    {45, "STRAP", "INPUT",  "LOW"},  // GPIO45
    {46, "STRAP", "INPUT",  "LOW"},  // GPIO46
    {47, "GPIO", "INPUT",  "LOW"},   // GPIO47
    {48, "GPIO", "INPUT",  "LOW"},   // GPIO48
    // Non-GPIO pins
    {49, "RST",  "N/A", "N/A"},      // RST
    {50, "5V",   "N/A", "N/A"},      // 5V Pin
    {51, "GND",  "N/A", "N/A"},      // GND Pin
};

int getTotalPins() {
    return sizeof(esp32s3Pins) / sizeof(esp32s3Pins[0]);
}

#endif  // PIN_CONFIG_H
