// esp32 Dev Module
#include <WiFi.h>
#include <PubSubClient.h>
#include <PubSubClientTools.h>

#define pinX 33
#define pinY 32
#define pinBT 23
#define pinLed 4


//const String ssid = "AiroHome";
//const String pass = "Alessandro01";

const String ssid = "sistembed";
const String pass = "lastessa";

#define MQTT_SERVER "mqtt.atrent.it"
//#define MQTT_SERVER "test.mosquitto.org"
//#define MQTT_SERVER "192.168.1.57"

WiFiClient espClient;
PubSubClient client(MQTT_SERVER, 1883, espClient);
PubSubClientTools mqtt(client);


void setupWifi() {
    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid.c_str(), pass.c_str());

    Serial.print("Connecting...");
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println();

    Serial.print("Connected, IP address: ");
    Serial.println(WiFi.localIP());
}

void setupMQTT() {
    Serial.print("Connecting to MQTT: " + String(MQTT_SERVER) + " ... ");
    if (client.connect("zAiroESP32")) {
        Serial.println("MQTT connected");
        mqtt.subscribe("#", 0);
        /*
        mqtt.subscribe("SistEmbed/", 0);
        mqtt.subscribe("SistEmbed/fdossena/bright", luminosita);
        */

    } else {
        Serial.println("Failed, rc=" + client.state());
    }
}


void setup(){
    Serial.begin(115200);

    pinMode(pinX, INPUT);
    pinMode(pinY, INPUT);
    pinMode(pinBT, INPUT);
    pinMode(pinLed, OUTPUT);

    setupWifi();
    setupMQTT();

}

String msg;
void loop(){
  int x = analogRead(pinX);
  int y = analogRead(pinY);
  int bottone = !digitalRead(pinBT);
  

  msg = String(x) + ":" + String(y);
  //mqtt.publish("SistEmbed/joystick", String(x) + ":" + String(y));
  mqtt.publish("SistEmbed/zAiro/joystick", msg);
  Serial.println("?: " + String(client.state()));
  Serial.println("x: " + String(x) + "\ty: " + String(y)+ " \tp: " + String(bottone));
  delay(500);
}
