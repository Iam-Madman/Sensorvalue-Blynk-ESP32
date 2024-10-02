#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "BLYNK_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "BLYNK_TEMPLATE_NAME"
#define BLYNK_AUTH_TOKEN "BLYNK_AUTH_TOKEN" 
//replace the above with your blynk credentials

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "YOUR_SSID"; //replace this with your ssid
char pass[] = "YOUR_PASSWORD"; //replace this with your password

void setup() {
  Serial.begin(115200);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
  Blynk.run();
  int sensorValue = analogRead(34);
  Blynk.virtualWrite(V1, sensorValue);
  Serial.println(sensorValue);
  delay(1000);
}

