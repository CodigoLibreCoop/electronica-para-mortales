#include <BluetoothSerial.h>
#include <ESP32Servo.h>

BluetoothSerial SerialBT;

Servo baseServo;
Servo arm1Servo;
Servo arm2Servo;

int baseAngle = 90;

void setup() {

  Serial.begin(115200);

  SerialBT.begin("RobotArm-ESP32");

  baseServo.attach(13);
  arm1Servo.attach(12);
  arm2Servo.attach(14);

  baseServo.write(baseAngle);
  //arm1Servo.write(90);
  //arm2Servo.write(90);

  Serial.println("Bluetooth Ready");
}

void loop() {

  if (SerialBT.available()) {

    String cmd = SerialBT.readStringUntil('\n');

    cmd.trim();

    Serial.println("Received: " + cmd);

    if (cmd.startsWith("A")) {

      int angle = cmd.substring(1).toInt();

      angle = constrain(angle, 0, 0); // Se deben configurar segun el motor utilizado

      arm1Servo.write(angle);
    }

    else if (cmd.startsWith("B")) {

      int angle = cmd.substring(1).toInt();

      angle = constrain(angle, 0, 0); // Se deben configurar segun el motor utilizado

      arm2Servo.write(angle);
    }

    else if (cmd == "L") {

      baseAngle -= 10;

      baseAngle = constrain(baseAngle, 100, 180);

      baseServo.write(baseAngle);
    }

    else if (cmd == "R") {

      baseAngle += 10;

      baseAngle = constrain(baseAngle, 100, 180); // Se deben configurar segun el motor utilizado

      baseServo.write(baseAngle);
    }
  }

  delay(20);
}