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
