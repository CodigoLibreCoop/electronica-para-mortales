
# Electronica para Mortales 🤖💡

Veja a README em português: [aqui](README-BR.md)   

Este repositorio contiene ejemplos simples y escalables para proyectos de robótica, automatización e interacción inalámbrica usando ESP32.

---

# Proyectos incluidos

## Bluetooth LED Control | carpeta led/

Control de un LED conectado al GPIO 33 del ESP32 mediante Bluetooth Serial.

### Features
- Encendido y apagado remoto
- Comunicación Bluetooth clásica
- Compatible con Android
- Base simple para domótica o automatización

### Hardware
- ESP32
- LED
- Resistencia 220Ω
- Protoboard

### Comandos

| Comando  | Acción  |
|----------|---------|
| `1` | Encender LED |
| `0` | Apagar LED   |

---

## 🦾 Bluetooth Robot Arm | carpeta brazo

Brazo robótico controlado mediante Bluetooth usando servomotores MG996R y ESP32.

### Features
- Movimiento inalámbrico
- Control independiente de servos
- Base para proyectos de robótica avanzada
- Arquitectura escalable para IA o visión artificial

### Hardware
- ESP32
- 3x MG996R (tambien sirven los MG996)
- Fuente externa 5V (o una fuente ATX)
- Jumpers
- Estructura del brazo robótico (Link del modelo usado: )

### Pines utilizados
| Servo | GPIO |
|-------|------|
| Base  |  13  |
| Arm 1 |  12  |
| Arm 2 |  14  |

### Ejemplo de comandos
| Comando  |  Acción  |
|-----------|---------|
| `B90`  | Base a 90° |
| `A145` | Arm1 a 45° |
| `A290` | Arm2 a 90° |

---

# ⚙️ Requisitos

## Arduino IDE
Descargar desde:

[Arduino IDE](https://www.arduino.cc/en/software)

## ESP32 Board Package

Desde Arduino IDE instalar:
Placa: esp32
Librerias: ESP32Servo y BluetoothSerial


### Apps recomendadas

Para enviar comandos Bluetooth desde Android: Serial Bluetooth Terminal (Play Store)
Para simular circuitos: [Wokwi](https://wokwi.com/)

### Licencia

MIT License

Libre para usar, modificar y experimentar.

### Autor

@lucmadev | [Canal de Youtube](https://www.youtube.com/@SoyLucma)

Contenido sobre:

- Electrónica
- ESP32
- Robótica
- Programación
- IA
