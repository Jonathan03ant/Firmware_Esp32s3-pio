/*
	* This will be a generic firmware for my ESP32-s3
	* Plans of implementation currently are
		* Query all GPIO pin statuses
		* Set any pin as input or output, except for default pins
		* Set any pin as high or low(when in outputMode), except for default pins
		* Configure pins for I2c and possibly SPI interfaces
	* We will be using serial communication to send commands from a python script remotely
	* Python --------> Talks with CPP code on ESP32
*/
#include <Arduino.h>
#include "pin_config.h"

#define DEBUG 1 

#if DEBUG == 1
#define debug(x) Serial.print(x)
#define debugln(x) Serial.println(x)
#else
#define debug(x)
#define debugln(x)
#endif 

#include "pin_config.h"  // Include your pin configuration file
#include <Arduino.h>

int findPinIndex(int gpioNumber) {
    int totalPins = getTotalPins();
    for (int i = 0; i < totalPins; i++) {
        if (esp32s3Pins[i].GPIO_NUMBER == gpioNumber) {
            return i;
        }
    }
    return -1; // GPIO number not found
}
 
void initializePins() {
    Serial.println("Initializing Pins...");
    for (int gpioNum = 0; gpioNum <= 52; gpioNum++) {
        int index = findPinIndex(gpioNum);
        if (index == -1) {
            Serial.print("Skipping Pin ");
            Serial.println(gpioNum);
            continue;
        }
        Pin &pin = esp32s3Pins[index];
        Serial.print("Initializing Pin ");
        Serial.println(pin.GPIO_NUMBER);
        // Perform initialization based on pin.mode and pin.state
        if (pin.mode == "INPUT") {
            pinMode(pin.GPIO_NUMBER, INPUT);
        } else if (pin.mode == "OUTPUT") {
            pinMode(pin.GPIO_NUMBER, OUTPUT);
            digitalWrite(pin.GPIO_NUMBER, (pin.state == "HIGH") ? HIGH : LOW);
        }
        Serial.print("Pin ");
        Serial.print(pin.GPIO_NUMBER);
        Serial.print(" initialized with state: ");
        Serial.println(pin.state);
    }
}



void setup() {
  Serial.begin(115200); // or keep it at 460800 if it is required
  delay(3000); // 3 seconds delay

  Serial.println("Initializing Pins...");
  initializePins();  // Initialize pin states
  Serial.println("Printing Pin Status:");
 
}

void loop() {
  // Empty loop
}