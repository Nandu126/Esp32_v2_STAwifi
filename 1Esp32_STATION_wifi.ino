#include <WiFi.h>                                     // needed to connect to setup an accesspoint

const char* ssid = "ZhouLab";
const char* password = "ZhouRobotics917";


void setup() {
  Serial.begin(115200);  
  
 WiFi.mode(WIFI_STA); //set esp to station mode
  
 AFMS.begin(); //connnecting to controller


  WiFi.begin(ssid, password);
  Serial.println("Establishing connection to WiFi with SSID: " + String(ssid));
 
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print("."); 
  }
  
  Serial.print("Connected to network with IP address: ");
  Serial.println(WiFi.localIP());
  
}

void loop() {
}

