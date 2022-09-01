#include <Arduino.h>

#define debugLevel 1  //1 = Debug, prints get executed, 0 = No debug, prints do not show.
#define LEDPIN 21

void setup() {
  // put your setup code here, to run once:
  if (debugLevel > 0) {
    Serial.begin(115200);
  }
}

void loop() {
  Serial.printf("Start loop\n\r");
  Serial.printf("Stop loop\n\r");
  delay(1000);
}