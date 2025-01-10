#include <Adafruit_SPITFT.h>
#include <gfxfont.h>
#include <DHT.h>
#include <SPI.h>
#include <Wire.h>
#include <DHT_U.h>

int sw=128;
int sh=64;
int dp=2;
#define DHTTYPE DHT11
DHT dht(dp,DHTTYPE);
Adafruit_SSD1306 display(-1);

void setup() {
  DHT.begin(9600);
  display.begin(SSD1306_I2C_ADDRESS,0x3C);
//  display.clearDisplay();
//  display.setTextSize(2);
//  display.setTextColor(WHITE);
//
//  display.setCursor(0,0);
//  display.println("Niranjan");
//  display.display();
  dht.begin();
  display.clearDisplay();




}

void loop() {



  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);

    // Delay between measurements.
  delay(delayMS);
  // Get temperature event and print its value.
  sensors_event_t event;
  dht.temperature().getEvent(&event);
  if (isnan(event.temperature)) {
    Serial.println("Error reading temperature!");
  }
  else {
    display.setCursor(0,5);
  display.print("Temp : ");
  display.print(temp);
  display.println(" C");
  }
  // Get humidity event and print its value.
  dht.humidity().getEvent(&event);
  if (isnan(event.relative_humidity)) {
    Serial.println("Error reading humidity!");
  }
  else {
     display.setCursor(0,20);
  display.print("Humidity: ");
  display.print(hum);
  display.print(" %");
  }

  float hum=dht.readHumidity();
  float temp=dht.readTemperature();


  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);

  display.display();

}

