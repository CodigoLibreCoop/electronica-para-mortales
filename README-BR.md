# Eletrônica para Mortais 🤖💡

Ver README en español: [aquí](README.md)

Este repositório contém exemplos simples e escaláveis para projetos de robótica, automação e interação sem fio usando ESP32.

---

# Projetos incluídos

## LED controlado por Bluetooth | pasta led/

Controle de um LED conectado ao GPIO 33 do ESP32 via Bluetooth Serial.

### Features

* Ligar e desligar remotamente
* Comunicação Bluetooth clássica
* Compatível com Android
* Base simples para domótica ou automação

### Hardware

* ESP32
* LED
* Resistor 220Ω
* Protoboard

### Comandos

| Comando | Ação |
| --- | --- |
| `1` | Ligar LED |
| `0` | Desligar LED |

---

## 🦾 Braço robótico controlado por Bluetooth | pasta brazo

Braço robótico controlado via Bluetooth usando servomotores MG996R e ESP32.

### Features

* Movimento sem fio
* Controle independente de servos
* Base para projetos de robótica avançada
* Arquitetura escalável para IA ou visão computacional

### Hardware

* ESP32
* 3x MG996R (também servem os MG996)
* Fonte externa 5V (ou uma fonte ATX)
* Jumpers
* Estrutura do braço robótico (Link do modelo usado: )

### Pinos utilizados

| Servo | GPIO |
| --- | --- |
| Base | 13 |
| Arm 1 | 12 |
| Arm 2 | 14 |

### Exemplo de comandos

| Comando | Ação |
| --- | --- |
| `B90` | Base a 90° |
| `A145` | Arm1 a 45° |
| `A290` | Arm2 a 90° |

---

# ⚙️ Requisitos

## Arduino IDE

Baixar em:

[Arduino IDE](https://www.arduino.cc/en/software)

## ESP32 Board Package

No Arduino IDE, instalar:
Placa: esp32
Bibliotecas: ESP32Servo e BluetoothSerial

### Apps recomendados

Para enviar comandos Bluetooth pelo Android: Serial Bluetooth Terminal (Play Store)

Para simular circuitos: [Wokwi](https://wokwi.com/)

### Licença

MIT License

Livre para usar, modificar e experimentar.

### Autor

Lucma [Canal do YouTube](https://www.youtube.com/@SoyLucma)

Conteúdo sobre:

* Eletrônica
* ESP32
* Robótica
* Programação
* IA
