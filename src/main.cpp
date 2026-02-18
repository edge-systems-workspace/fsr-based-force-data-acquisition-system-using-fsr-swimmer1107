/**
 * @file FSR_Force_Measurement.ino
 * @brief Force measurement using Force Sensitive Resistor (FSR).
 *
 * This program reads analog values from an FSR sensor connected
 * to analog pin A0. The sensor value (0–1023) increases as more
 * force or pressure is applied. The value is displayed on the
 * Serial Monitor every 500 milliseconds.
 *
 * @author Pulkit Kulshreshtha
 * @date 18 Feb 2026
 */

// Pin Definitions
int fsrPin = A0;      ///< FSR connected to analog pin A0
int fsrValue = 0;     ///< Stores analog value read from FSR

/**
 * @brief Initializes serial communication.
 *
 * This function runs once when the Arduino starts.
 * It sets up Serial communication at 9600 baud rate.
 */
void setup() {
  Serial.begin(9600);
}

/**
 * @brief Continuously reads force value from FSR.
 *
 * Steps:
 * 1. Reads analog value (0–1023) from FSR
 * 2. Prints force value on Serial Monitor
 * 3. Waits 500 milliseconds before next reading
 */
void loop() {

  fsrValue = analogRead(fsrPin);  ///< Read analog force value

  Serial.print("Force Sensor Value: ");
  Serial.println(fsrValue);

  delay(500);
}
