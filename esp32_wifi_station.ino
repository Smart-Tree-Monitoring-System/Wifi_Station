// Enable the devices to connect to the Websites using Internet
#include <WiFi.h>
#include <HTTPClient.h>
// WiFi Credentials
const char* ssid = "your_SSID";
const char* password = "your_PASSWORD";

void setup() {
    Serial.begin(115200);
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println("\nWiFi connected");
    }

void loop() {
}
