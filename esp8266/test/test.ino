// #include <ESP8266WiFi.h>

// const char ssid[] = "ChinaNet-AVXs";
// const char pass[] = "c9rbav3d";

// WiFiClient client;

void setup() {
  // Serial.begin(9600);
  // Serial.println("esp8266");
  // initWiFi();
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
  pinMode(D8, OUTPUT);
  pinMode(D9, OUTPUT);
  pinMode(D10, OUTPUT);
}

void loop() {
  // Serial.println("hello esp8266");
  delay(1000);
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  digitalWrite(D5, HIGH);
  digitalWrite(D6, HIGH);
  digitalWrite(D7, HIGH);
  digitalWrite(D8, HIGH);
  digitalWrite(D9, HIGH);
  digitalWrite(D10, HIGH);
}

// void initWiFi() {
//   Serial.print("Connecting WiFi...");
//   WiFi.mode(WIFI_STA);
//   WiFi.begin(ssid, pass);
//   while (WiFi.status() != WL_CONNECTED) {
//     delay(500);
//     Serial.print(".");
//   }

//   Serial.print("");
//   Serial.println("WiFi connected");
//   Serial.println("IP address: ");
//   Serial.println(WiFi.localIP());
// }