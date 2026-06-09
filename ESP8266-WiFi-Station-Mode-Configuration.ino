#include <ESP8266WiFi.h>
void setup() {
 Serial.begin(115200);
 WiFi.mode(WIFI_STA);
 WiFi.begin("dasarianjani","NAD@1960");
 Serial.print("connecting to wifi");
 while (WiFi.status() != WL_CONNECTED){
  Serial.print(".");
  delay(200);
 }
 Serial.println();
 Serial.print("IP Address:");
 Serial.print(WiFi.localIP());

 Serial.print("Mac Address:");
 Serial.print(WiFi.macAddress());
}


void loop() {
  // put your main code here, to run repeatedly:

}
