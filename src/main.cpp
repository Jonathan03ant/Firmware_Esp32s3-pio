#include "pin_config.h"  // Include your pin configuration file
#include <Arduino.h>

bool isValidGPIO(uint8_t pinNumber) {
    for (size_t i = 0; i < TOTAL_PINS; ++i) {
        if (pinConfigs[i].pinNumber == pinNumber) {
            return (pinConfigs[i].type == GPIO_PIN);
        }
    }
    return false;  // Pin not found or not a GPIO pin
}

void setPinMode(uint8_t pinNumber, const String& mode) {
    if (!isValidGPIO(pinNumber)) {
        Serial.println("Error: Invalid or reserved pin.");
        return;
    }

    if (mode == "INPUT") {
        pinMode(pinNumber, INPUT);
        Serial.println("Pin " + String(pinNumber) + " set to INPUT.");
    } else if (mode == "OUTPUT") {
        pinMode(pinNumber, OUTPUT);
        Serial.println("Pin " + String(pinNumber) + " set to OUTPUT.");
    } else {
        Serial.println("Error: Invalid mode. Use 'INPUT' or 'OUTPUT'.");
    }
}


void setPinState(uint8_t pinNumber, const String& state) {
    if (!isValidGPIO(pinNumber)) {
        Serial.println("Error: Invalid or reserved pin.");
        return;
    }

                                                                            /*
                                                                                Pins must be set to output first
                                                                                The program will change input pins to HIGH
                                                                                HOWEVER:- if the pin is an input pin this will be false activation

                                                                            */
    if (state == "HIGH") {
        digitalWrite(pinNumber, HIGH);
        Serial.println("Pin " + String(pinNumber) + " set to HIGH.");
    } else if (state == "LOW") {
        digitalWrite(pinNumber, LOW);
        Serial.println("Pin " + String(pinNumber) + " set to LOW.");
    } else {
        Serial.println("Error: Invalid state. Use 'HIGH' or 'LOW'.");
    }
}
// Command parsing function
void parseCommand(const String &command) {
    int firstComma = command.indexOf(',');
    if (firstComma == -1) {
        Serial.println("Error: Invalid command format.");
        return;
    }

    String cmd = command.substring(0, firstComma);
    String params = command.substring(firstComma + 1);
    params.trim();

    if (cmd == "SET_MODE") {
        int secondComma = params.indexOf(',');
        if (secondComma == -1) {
            Serial.println("Error: Invalid SET_MODE format.");
            return;
        }

        uint8_t pinNumber = params.substring(0, secondComma).toInt();
        String mode = params.substring(secondComma + 1);

        setPinMode(pinNumber, mode);

    } else if (cmd == "SET_STATE") {
        int secondComma = params.indexOf(',');
        if (secondComma == -1) {
            Serial.println("Error: Invalid SET_STATE format.");
            return;
        }

        uint8_t pinNumber = params.substring(0, secondComma).toInt();
        String state = params.substring(secondComma + 1);

        setPinState(pinNumber, state);

    } else if (cmd == "READ_PIN") {
        uint8_t pinNumber = params.toInt();
        if (!isValidGPIO(pinNumber)) {
            Serial.println("Error: Invalid or reserved pin.");
            return;
        }
        int value = digitalRead(pinNumber);
        Serial.println("Pin " + String(pinNumber) + " is " + (value == HIGH ? "HIGH" : "LOW"));

    } else {
        Serial.println("Error: Unknown command.");
    }
}

void setup() {
    Serial.begin(115200);
    while (!Serial);  // Wait for serial port to connect
    Serial.println("Firmware ready. Awaiting commands...");
}

void loop() {
    if (Serial.available() > 0) {
        String input = Serial.readStringUntil('\n');
        input.trim();  // Remove any leading/trailing whitespace
        parseCommand(input);
    }
}