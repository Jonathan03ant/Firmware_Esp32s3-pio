#include "pin_config.h"  // Include your pin configuration file
#include <Arduino.h>

/*
    * Returns GPIO Index in the list
*/
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
    Serial.println(F("Initializing Pins..."));
    int totalPins = getTotalPins();
    Serial.print(F("Total Pins: "));
    Serial.println(totalPins);

    for (int i = 0; i < totalPins; i++) {
        Serial.print(F("Processing index: "));
        Serial.println(i);

        Pin &pin = esp32s3Pins[i];
        Serial.print(F("Pin Number: "));
        Serial.println(pin.GPIO_NUMBER);
        Serial.print(F("Pin Type: "));
        Serial.println(pin.type);

        if (strcmp(pin.type, "GPIO") == 0) {
            // Existing code...
        } else {
            Serial.print(F("Skipping strapping/non-GPIO Pin "));
            Serial.print(pin.GPIO_NUMBER);
            Serial.print(F(" (Type: "));
            Serial.print(pin.type);
            Serial.println(F(")"));
        }
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
