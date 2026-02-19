#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author Akhil
 * @date 2026-02-19
 *
 * @details
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */

const int IR_PIN = 2;
int sensorState = 0;

void setup() {
    Serial.begin(9600);
    pinMode(IR_PIN, INPUT);
    Serial.println("System Initialized - IR Sensor Ready");
}

void loop() {
    sensorState = digitalRead(IR_PIN);

    if (sensorState == HIGH) {
        Serial.println("Obstacle Detected");
    } else {
        Serial.println("No Obstacle");
    }

    delay(300);
}
