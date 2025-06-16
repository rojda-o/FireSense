#include <ESP8266WiFi.h>
#include <WiFiClientSecure.h>
#include <UniversalTelegramBot.h>

// WiFi bilgileri
const char* ssid = "";
const char* password = "";

// Telegram bilgileri
#define BOT_TOKEN ""  // BotFather'dan alınan token
#define CHAT_ID ""   // Kendi kullanıcı ID'niz

WiFiClientSecure client;
UniversalTelegramBot bot(BOT_TOKEN, client);

int led = D0;            // LED pin
int buzzer = D1;         // Buzzer pin
int digitalPin = D2;     // IR digital interface
int analogPin = A0;      // IR analog interface
int digitalVal;          // Digital readings
int analogVal;           // Analog readings

bool messageSent = false;

void setup()
{
  pinMode(led, OUTPUT);           // Set LED as output
  pinMode(buzzer, OUTPUT);        // Set Buzzer as output
  pinMode(digitalPin, INPUT);     // Set flame sensor digital pin as input
  Serial.begin(9600);             // Start serial communication

  // Wi-Fi bağlantısı
  WiFi.begin(ssid, password);
  Serial.print("WiFi bağlantısı kuruluyor...");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println(" Bağlandı!");

  // Güvenli bağlantı için
  client.setInsecure();  // SSL doğrulaması devre dışı
}

void loop()
{
  // Read digital interface (Flame sensor)
  digitalVal = digitalRead(digitalPin); 

  if (digitalVal == HIGH) // Flame is detected
  {
    digitalWrite(led, LOW);    // Turn ON LED (depending on LED logic)
    digitalWrite(buzzer, LOW); // Turn ON buzzer

    if (!messageSent) {
      bot.sendMessage(CHAT_ID, " ALEV ALGILANDI! 🔥");
      messageSent = true;
    }
  }
  else
  {
    digitalWrite(led, HIGH);   // Turn OFF LED
    digitalWrite(buzzer, HIGH); // Turn OFF buzzer
    messageSent = false;
  }

  // Read analog interface (optional)
 // analogVal = analogRead(analogPin); 
 // Serial.println(analogVal); // Print analog value to serial monitor

  delay(100); // Wait 100ms
}
