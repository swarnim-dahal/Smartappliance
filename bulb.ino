#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <UniversalTelegramBot.h>

const char* ssid = "Shristi";
const char* password = "123456789";
const char* botToken = "7701790647:AAFd0aQzEMtQNAfTfQHIdl_E8xTwCJMUitk";
const String chatId = "control bulb";

WiFiClientSecure client;
UniversalTelegramBot bot(botToken, client);

const int relay1 = 26;
const int relay2 = 27;
const int relay3 = 32;
const int relay4 = 33;

void setup() {
    Serial.begin(115200);
    WiFi.begin(ssid, password);
    client.setInsecure();  // Required for ESP32 SSL connection

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println("\nConnected to WiFi!");

    bot.sendMessage(chatId, "Bot is online!", "");

    pinMode(relay1, OUTPUT);
    pinMode(relay2, OUTPUT);
    pinMode(relay3, OUTPUT);
    pinMode(relay4, OUTPUT);

    digitalWrite(relay1, HIGH);
    digitalWrite(relay2, HIGH);
    digitalWrite(relay3, HIGH);
    digitalWrite(relay4, HIGH);
}

void loop() {
    int messageCount = bot.getUpdates(bot.last_message_received + 1);

    for (int i = 0; i < messageCount; i++) {
        String text = bot.messages[i].text;
        String sender = bot.messages[i].chat_id;

        if (sender == chatId) {
            if (text == "/relay1_on") {
                digitalWrite(relay1, LOW);
                bot.sendMessage(chatId, "Relay 1 turned ON", "");
            } else if (text == "/relay1_off") {
                digitalWrite(relay1, HIGH);
                bot.sendMessage(chatId, "Relay 1 turned OFF", "");
            } else if (text == "/relay2_on") {
                digitalWrite(relay2, LOW);
                bot.sendMessage(chatId, "Relay 2 turned ON", "");
            } else if (text == "/relay2_off") {
                digitalWrite(relay2, HIGH);
                bot.sendMessage(chatId, "Relay 2 turned OFF", "");
            } else if (text == "/relay3_on") {
                digitalWrite(relay3, LOW);
                bot.sendMessage(chatId, "Relay 3 turned ON", "");
            } else if (text == "/relay3_off") {
                digitalWrite(relay3, HIGH);
                bot.sendMessage(chatId, "Relay 3 turned OFF", "");
            } else if (text == "/relay4_on") {
                digitalWrite(relay4, LOW);
                bot.sendMessage(chatId, "Relay 4 turned ON", "");
            } else if (text == "/relay4_off") {
                digitalWrite(relay4, HIGH);
                bot.sendMessage(chatId, "Relay 4 turned OFF", "");
            } else {
                bot.sendMessage(chatId, "Invalid command. Use /relay1_on, /relay1_off, etc.", "");
            }
        }
    }
    delay(1000);
}

