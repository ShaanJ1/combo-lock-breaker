#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/i2c.h"
#include "hardware/pwm.h"
#include "hardware/uart.h"
#include "hardware/gpio.h"

/* 
 * Hardware: I2C, LCD, Matrix Keypad, Closed Loop Stepper Motor System.
 *
 * Pins:
 * - GPIO0: PUL- Stepper Driver
 * - GPIO1: DIR- Stepper Driver
 * - GPIO2: ENA - Stepper Driver
 * - GPIO3: ALM - Stepper Driver Alarm
 * - GPIO4: PWM Analog Feedback Servo
 * - GPIO26_ADC0: FB Analog Feedback Servo 
 * - GPIO6: SCL I2C LCD 1602
 * - GPIO7: SDA I2C LCD 1602
 * - GPIO8: Row 1 Keypad
 * - GPIO9: Row 2 Keypad
 * - GPIO10: Row 3 Keypad
 * - GPIO11: Row 4 Keypad
 * - GPIO12: Column 5 Keypad
 * - GPIO13: Column 6 Keypad
 * - GPIO14: Column 7 Keypad
 * - GPIO15: Column 8 Keypad
*/

// --- Pin Defines ---
#define STEPPER_PUL_PIN 0
#define STEPPER_DIR_PIN = 1
#define STEPPER_ENA_PIN = 2
#define STEPPER_ALM_PIN = 3

#define SERVO_PWM_PIN 5
#define SERVO_FB_PIN 26 // ADC0

#define LCD_SCL_PIN 6
#define LCD_SDA_PIN 7

#define KEYPAD_ROW1_PIN 8
#define KEYPAD_ROW2_PIN 9
#define KEYPAD_ROW3_PIN 10
#define KEYPAD_ROW4_PIN 11
#define KEYPAD_COLUMN1_PIN 12
#define KEYPAD_COLUMN2_PIN 13
#define KEYPAD_COLUMN3_PIN 14
#define KEYPAD_COLUMN4_PIN 15

// ---------------------------

void initStepper() {

}

void enableDriver() {
    
}

void calibrateStepper() {

}

void set_Stepper_Direction(int dir) {
    
}

void stepper_Pulse_Blocking(int steps, int pulse_delay) { // steps, delay

}

void moveStepperToPositiion(int position) {

}

void turnStepperClockwise(int amount) {
    
}

void stepper_counterclockwise(int amount) {
    
}

void displayToLCD(const char* message) {

}

// After the combination is found, disable the motor, and when it starts back up again, enable it.
// Enabling the motor makes the shaft hold its torque
// Disabling the motor makings the shaft able to free spin by hand

// -------------IMPORTANT NOTES:---------------
//  ENA must be ahead of DIR by at least 200ms. Usually, ENA+ and ENA- are NC(not connected). See“Connector P1 Configurations” for more information. 
//  DIR must be ahead of PUL effective edge by 2us to ensure correct direction;
//  Pulse width not less than 1us;
//  Low level width not less than 1us;
//  Duty cycle of PUL signal is recommended 50%.

double timeTaken = 0;

int main() {
    // Init standard libraries
    stdio_init_all();

    // Initialize hardware pins
    
    
}