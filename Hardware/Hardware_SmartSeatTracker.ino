#include <WiFi.h>
#include <PubSubClient.h>
#include <Wire.h>
#include <LiquidCrystal.h>
#include <Servo.h>
#include <Adafruit_NeoPixel.h>
#include <LiquidCrystal_I2C.h>

// WiFi network parameters
const char* ssid = "CE-Hub-Student";
const char* password = "casa-ce-gagarin-public-service";

// MQTT broker information
const char* mqtt_server = "mqtt.cetools.org"; // MQTT server address
const char* mqtt_topic = "student/CASA0019/G2/DATA/#"; // MQTT topic of interest

String receivedData[14]; // Array for storing received data
int messageCount = 0; // Record of received message count

int processmax = 14;

WiFiClient wifiClient;
PubSubClient client(wifiClient);

String rooms[14]; // Array for storing room numbers
int availableSpace[14]; // Array for storing room seat availability
float temperatures[14]; // Array for storing room temperatures
int entryCount = 0; // Entry count counter

LiquidCrystal_I2C lcd(0x3F, 16, 2); // Replace 0x27 with the I2C address of the LCD

Servo myServo;

const int LEDPIN = A3;
const int buttonPin1 = A1; // The first button is connected to pin 8
const int buttonPin2 = A2; // The second button is connected to pin 9

const int r019 = A4;
const int r018 = A5;
const int r107 = 2;
const int r101 = 3;
const int r1c1 = 4;
const int r110 = 5;
const int r120 = 6;
const int r203 = 7;
const int r201 = 8;
const int r206 = 9;
const int r219 = 10;
const int r214 = 11;
const int r305 = 12;
const int r313 = 13;

int floors = 1; // Initial value for the first digit
int pressrooms = 1; // Initial value for the second digit
int truerooms = 1;
String floorname = "GND";
int roomPosition = 0;

Adafruit_NeoPixel pixels(60, LEDPIN);

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);

  pinMode(r019, OUTPUT);
  pinMode(r018, OUTPUT);
  pinMode(r107, OUTPUT);
  pinMode(r101, OUTPUT);
  pinMode(r1c1, OUTPUT);
  pinMode(r110, OUTPUT);
  pinMode(r120, OUTPUT);
  pinMode(r203, OUTPUT);
  pinMode(r201, OUTPUT);
  pinMode(r206, OUTPUT);
  pinMode(r219, OUTPUT);
  pinMode(r214, OUTPUT);
  pinMode(r305, OUTPUT);
  pinMode(r313, OUTPUT);

  myServo.attach(A0);
  pixels.begin();

  lcd.init();
  lcd.backlight();

  Serial.println("start to setup");

  Serial.println("begin to link wifi");
  connectWiFi();

  // Set up MQTT server and callback function
  client.setServer(mqtt_server, 1883); // Default MQTT port is 1883
  client.setCallback(callback);

  // Connect to the MQTT broker
  connectMQTT();
}

void loop() {
  if (!client.connected()) {
    connectMQTT();
  }
  client.loop();

  int savefloors = floors;

  if (digitalRead(buttonPin1) == LOW) {
    delay(100); // Prevent button bounce

    digitalWrite(r019, LOW);
    digitalWrite(r018, LOW);
    digitalWrite(r107, LOW);
    digitalWrite(r101, LOW);
    digitalWrite(r1c1, LOW);
    digitalWrite(r110, LOW);
    digitalWrite(r120, LOW);
    digitalWrite(r203, LOW);
    digitalWrite(r201, LOW);
    digitalWrite(r206, LOW);
    digitalWrite(r219, LOW);
    digitalWrite(r214, LOW);
    digitalWrite(r305, LOW);
    digitalWrite(r313, LOW);

    lcd.clear();
    pixels.clear();
    if (floors < 4) {
      floors++;
    } else {
      floors = 1; // Restart when reaching the limit
    }
    while (digitalRead(buttonPin1) == LOW) {
      delay(10); // Wait for button release
    }
  }

  if (digitalRead(buttonPin2) == LOW) {
    delay(100); // Prevent button bounce

    digitalWrite(r019, LOW);
    digitalWrite(r018, LOW);
    digitalWrite(r107, LOW);
    digitalWrite(r101, LOW);
    digitalWrite(r1c1, LOW);
    digitalWrite(r110, LOW);
    digitalWrite(r120, LOW);
    digitalWrite(r203, LOW);
    digitalWrite(r201, LOW);
    digitalWrite(r206, LOW);
    digitalWrite(r219, LOW);
    digitalWrite(r214, LOW);
    digitalWrite(r305, LOW);
    digitalWrite(r313, LOW);

    lcd.clear();
    if (pressrooms < 10) {
      pressrooms++;
    } else {
      pressrooms = 1; // Restart when reaching the limit
    }

    while (digitalRead(buttonPin2) == LOW) {
      delay(10); // Wait for button release
    }
  }

  if (floors == 1) {
    floorname = "GND";
    myServo.write(0);
    if (pressrooms > 2) {
      truerooms = 2;
      pressrooms = 10;
    } else {
      truerooms = pressrooms;
    }

    if (truerooms == 1) {
      digitalWrite(r019, HIGH);
      roomPosition = findRoomPosition("019");
    } else if (truerooms == 2) {
      digitalWrite(r018, HIGH);
      roomPosition = findRoomPosition("018");
    }

    for (int i = 0; i < 15; i++) {
      pixels.setPixelColor(i, 150, 0, 0);
    }

    //pixels.show();
  } // end floor GND

  if (floors == 2) {
    floorname = "1st";
    myServo.write(60);
    if (pressrooms > 5) {
      truerooms = 5;
      pressrooms = 10;
    } else {
      truerooms = pressrooms;
    }

    if (truerooms == 1) {
      digitalWrite(r107, HIGH);
      roomPosition = findRoomPosition("107");
    } else if (truerooms == 2) {
      digitalWrite(r101, HIGH);
      roomPosition = findRoomPosition("101");
    } else if (truerooms == 3) {
      digitalWrite(r1c1, HIGH);
      roomPosition = findRoomPosition("1C1");
    } else if (truerooms == 4) {
      digitalWrite(r110, HIGH);
      roomPosition = findRoomPosition("110");
    } else if (truerooms == 5) {
      digitalWrite(r120, HIGH);
      roomPosition = findRoomPosition("120");
    }

    for (int i = 15; i < 30; i++) {
      pixels.setPixelColor(i, 150, 0, 0);
    }

    //pixels.show();
  } // end floor 1st

  if (floors == 3) {
    floorname = "2nd";
    myServo.write(120);
    if (pressrooms > 5) {
      truerooms = 5;
      pressrooms = 10;
    } else {
      truerooms = pressrooms;
    }

    if (truerooms == 1) {
      digitalWrite(r203, HIGH);
      roomPosition = findRoomPosition("203");
    } else if (truerooms == 2) {
      digitalWrite(r201, HIGH);
      roomPosition = findRoomPosition("201");
    } else if (truerooms == 3) {
      digitalWrite(r206, HIGH);
      roomPosition = findRoomPosition("206");
    } else if (truerooms == 4) {
      digitalWrite(r219, HIGH);
      roomPosition = findRoomPosition("219");
    } else if (truerooms == 5) {
      digitalWrite(r214, HIGH);
      roomPosition = findRoomPosition("214");
    }
    for (int i = 30; i < 45; i++) {
      pixels.setPixelColor(i, 150, 0, 0);
    }

    //pixels.show();
  }

  if (floors == 4) {
    floorname = "3rd";
    myServo.write(180);
    if (pressrooms > 2) {
      truerooms = 2;
      pressrooms = 10;
    } else {
      truerooms = pressrooms;
    }

    if (truerooms == 1) {
      digitalWrite(r305, HIGH);
      roomPosition = findRoomPosition("305");
    } else if (truerooms == 2) {
      digitalWrite(r313, HIGH);
      roomPosition = findRoomPosition("313");
    }

    for (int i = 45; i < 60; i++) {
      pixels.setPixelColor(i, 150, 0, 0);
    }

    //pixels.show();
  }

  if (savefloors != floors) {
    pixels.show();
  }
  Serial.println(floors);
  Serial.println(truerooms);
  Serial.println(roomPosition);

  lcd.setCursor(0, 0);
  lcd.print("F:");
  lcd.setCursor(2, 0);
  lcd.print(floorname);

  lcd.setCursor(0, 1);
  lcd.print("R:");
  lcd.setCursor(2, 1);
  lcd.print(rooms[roomPosition]);

  lcd.setCursor(6, 0);
  lcd.print("Seats:");
  lcd.setCursor(12, 0);
  lcd.print(availableSpace[roomPosition]);

  lcd.setCursor(6, 1);
  lcd.print("Tem  :");
  if (temperatures[roomPosition] > 0) {
    lcd.setCursor(12, 1);
    lcd.print(temperatures[roomPosition]);
  } else {
    lcd.setCursor(12, 1);
    lcd.print("NaN");
  }
}

void connectWiFi() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Connect to WiFi...");

  while (WiFi.status() != WL_CONNECTED) {
    WiFi.begin(ssid, password);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Connecting...");
    delay(5000);
  }
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("WiFi connected!");
  Serial.println("WiFi connected!");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

void connectMQTT() {
  lcd.clear();
  while (!client.connected()) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Connecting to MQTT...");
    if (client.connect("ArduinoClient")) {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Connected to MQTT!");
      client.subscribe(mqtt_topic);
      Serial.println(mqtt_topic);
    } else {
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("MQTT connection failed");
      delay(5000);
    }
  }
  lcd.clear();
}

void callback(char* topic, byte* payload, unsigned int length) {
  String data = ""; // Store received data

  for (int i = 0; i < length; i++) {
    data += (char)payload[i]; // Add each received character to the string
  }

  receivedData[messageCount] = data; // Store received data in the array
  messageCount++; // Increase message count
  Serial.println(data);

  if (messageCount == 14) {
    parseReceivedData(receivedData); // Parse data
    messageCount = 0;
  }
}

void parseReceivedData(String data[]) {

  Serial.println("Start analysis");

  for (int i = 0; i < processmax ; i++) {
    Serial.println(i);
    Serial.println(data[i]);
    String line = data[i]; // Get data for the current line

    int comma1 = line.indexOf(',');
    int comma2 = line.indexOf(',', comma1 + 1);

    String room = line.substring(0, comma1); // Room number
    int available = line.substring(comma1 + 1, comma2).toInt(); // Available seats
    float temperature = line.substring(comma2 + 1).toFloat(); // Room temperature
    
    // Store data into arrays
    rooms[i] = room;
    availableSpace[i] = available;
    temperatures[i] = temperature;

  }

    Serial.println("End analysis");
}

int findRoomPosition(const String& roomName) {
  for (int i = 0; i < 14; i++) {
    if (rooms[i] == roomName) {
      return i; // Return the position of the room name in the array
    }
  }
  return 0; // Return -1 if the matching room name is not found
}