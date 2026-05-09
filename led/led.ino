#include <BluetoothSerial.h>

BluetoothSerial SerialBT;

// Pin del LED
#define LED_PIN 33

void setup() {

  Serial.begin(115200);

  // Inicializa Bluetooth
  SerialBT.begin("LED-ESP32");

  // Configura el pin del LED como salida
  pinMode(LED_PIN, OUTPUT);

  // LED apagado al iniciar
  digitalWrite(LED_PIN, LOW);

  Serial.println("Bluetooth Ready");
}

void loop() {

  if (SerialBT.available()) {

    String cmd = SerialBT.readStringUntil('\n');
    cmd.trim();

    Serial.println("Received: " + cmd);

    // Apagar LED
    if (cmd == "0") {

      Serial.println("Apagando LED");
      digitalWrite(LED_PIN, LOW);

    }

    // Encender LED
    else if (cmd == "1") {

      Serial.println("Encendiendo LED");
      digitalWrite(LED_PIN, HIGH);

    }

  }

  delay(20);
}