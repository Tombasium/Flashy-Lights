#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define LED_COUNT 8

#define LED_PIN 6

#define PAUSE 5

Adafruit_NeoPixel lights(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  // put your setup code here, to run once:
  lights.begin();
  lights.show();
  pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i =  1; i < 128; i++){
    for(int j = 0; j < LED_COUNT; j++){
      lights.setPixelColor(j, i, i/4, 0);
    }
    lights.show();
    delay(PAUSE);
  }
  for(int i = 128; i > 1; i--){
    for(int j = 0; j < LED_COUNT; j++){
      lights.setPixelColor(j, i, i/4, 0);
    }
    lights.show();
    delay(PAUSE);
  }
  // for(int i = 0; i < LED_COUNT; i++) {
  //   for(int j = 0; j < LED_COUNT; j++){
  //     if(j == i){
  //       lights.setPixelColor(j, 0, 255, 0);
  //     }
  //     else{
  //       lights.setPixelColor(j, 0, 0, 0);
  //     }
  //   }
  //   lights.show();
  //   delay(500);
  // }
}