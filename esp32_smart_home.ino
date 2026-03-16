#include <WiFi.h>

const char* ssid = "YOUR_WIFI";
const char* password = "YOUR_PASSWORD";

int relayPin = 5;
int pirPin = 13;

void setup() {
  Serial.begin(115200);

  pinMode(relayPin, OUTPUT);
  pinMode(pirPin, INPUT);

  WiFi.begin(ssid, password);

  while(WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.println("Connecting...");
  }

  Serial.println("WiFi Connected");
}

void loop() {

  int motion = digitalRead(pirPin);

  if(motion == HIGH){
    Serial.println("Intruder Detected!");
  }

}
