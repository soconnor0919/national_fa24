#ifndef CONSTANTS_H
#define CONSTANTS_H

// Digital Pins
#define LED_PIN 3
#define MOTOR_PIN 11
#define PUMP_PIN 10
#define VALVE_PIN 9

// LED Count
#define LED_COUNT 14 

/*
 * MEASUREMENT THRESHOLD VALUES:
 * For the Luminol reaction, the threshold values are:
 * Start: 1000, End: 100
 * For testing purposes, the threshold values are:
 * Start: 500, End: 50
 */
extern float START_THRESHOLD;
extern float END_THRESHOLD;
extern float MAX_THRESHOLD;

#endif // CONSTANTS_H