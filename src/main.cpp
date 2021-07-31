#include <Arduino.h>
#define LED_PIN 13
#define BLINK_DELAY 1000

void setup() {
    pinMode(LED_PIN, OUTPUT);  // put your setup code here, to run once:
}

void loop() {
    digitalWrite(LED_PIN, HIGH);
    delay(BLINK_DELAY);
    digitalWrite(LED_PIN, LOW);
    delay(BLINK_DELAY);   // put your main code here, to run repeatedly:
}
