import serial
import time

def find_serial_port():
    # This function is optional and would be implemented to auto-detect the port
    return '/dev/tty.wchusbserial58760795321'

def open_serial_connection(port, baudrate=115200, timeout=1):
    ser = serial.Serial(port, baudrate, timeout=timeout)
    # Wait for the ESP32-S3 to reset 
    time.sleep(2)
    return ser

def send_command(ser, command):
    # Ensure the command ends with a newline character
    command_str = command.strip() + '\n'
    ser.write(command_str.encode('utf-8'))
    # Small delay to allow the ESP32-S3 to process the command
    time.sleep(0.1)
    # Read all available responses
    responses = []
    while ser.in_waiting > 0:
        response = ser.readline().decode('utf-8').strip()
        if response:
            responses.append(response)
    return responses

def main():
    serial_port = find_serial_port()
    ser = open_serial_connection(serial_port)

    try:
        # Example commands
        commands = [
            'SET_MODE,4,OUTPUT',
            'SET_STATE,4,HIGH',
            'READ_PIN,4',
            'SET_STATE,4,LOW',
            'READ_PIN,4',
            'SET_MODE,4,INPUT',
            'READ_PIN,4'
        ]

        for cmd in commands:
            print(f"Sending command: {cmd}")
            responses = send_command(ser, cmd)
            for response in responses:
                print(f"Response: {response}")
            print("-" * 40)
            time.sleep(0.5)  # Optional delay between commands

    except KeyboardInterrupt:
        print("Interrupted by user.")

    finally:
        ser.close()
        print("Serial connection closed.")

if __name__ == '__main__':
    main()


