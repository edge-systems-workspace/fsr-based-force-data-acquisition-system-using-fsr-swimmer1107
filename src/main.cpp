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
