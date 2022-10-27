#include <Arduino.h>

#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[] = "qOPWlItHVAfs9Xtv2WtjLW_i2hB2Id2Y";
char ssid[] = "Creammy_2.4G";
char pass[] = "0637365282";

char server_ip[]="192.168.1.20"; // your local Blynk Server IP address

void setup()
{

Serial.begin(9600);

// Blynk.begin(auth, ssid, pass);
Blynk.begin(auth, ssid, pass, "192.168.1.20", 8080);
}

void loop()
{
Blynk.run();
}