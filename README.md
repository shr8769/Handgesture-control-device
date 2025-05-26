
# Hand Gesture Controlled Computer

A touchless, Arduino-based system for controlling your computer using hand gestures—ideal for games, media, and accessibility.

---

## Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Demo](#demo)
- [Hardware Requirements](#hardware-requirements)
- [Circuit & Connections](#circuit--connections)
- [Installation](#installation)
- [Usage](#usage)
- [Gesture Reference](#gesture-reference)
- [Troubleshooting](#troubleshooting)
- [License](#license)

---

## Overview

This project presents a hand gesture-controlled computer system using an Arduino Uno, two HC-SR04 ultrasonic sensors, and one PIR motion sensor. The system enables touch-free interactions by interpreting specific hand movements and motions as control commands.

- **Ultrasonic sensors** measure hand distances to trigger gestures for scrolling and media navigation (forward/backward).
- **PIR sensor** detects motion for play/pause functionality.
- The Arduino processes sensor data and communicates with a Python script via serial communication.
- The Python script (using PyAutoGUI) simulates keystrokes to control system functions.

This cost-effective solution enables intuitive human-computer interaction with applications in accessibility, smart environments, and touchless computing.

---

## Features

- 🎮 Control games (e.g., Subway Surfers) with arrow key gestures
- 🎵 Play/pause, next, and previous media tracks
- 📜 Scroll through web pages and documents
- 👋 Activate play/pause with motion detection
- 💻 Works on Windows, Mac, and Linux

---

## Demo

### Project Poster

![image](https://github.com/user-attachments/assets/8b2f16c1-5b32-46a4-ad30-997585188d29)

### Video Demo
https://github.com/user-attachments/assets/6fd19683-ed17-433f-87e8-84d47cdd6341


https://github.com/user-attachments/assets/aeace8d3-8143-4478-8e4d-4f7b11e8fe1a

---

## Hardware Requirements

- **Arduino Uno** ×1
- **HC-SR04 Ultrasonic Sensor** ×2
- **PIR Motion Sensor** ×1
- Breadboard & jumper wires
- USB cable for Arduino

---

## Circuit & Connections

**Ultrasonic Sensor 1 (Left):**
- VCC → 5V (Arduino)
- GND → GND
- Trig → Pin 6
- Echo → Pin 7

**Ultrasonic Sensor 2 (Right):**
- VCC → 5V
- GND → GND
- Trig → Pin 8
- Echo → Pin 9

**PIR Motion Sensor:**
- VCC → 5V
- GND → GND
- OUT → Pin 10

---

## Installation

### 1. Hardware Setup

- Assemble the sensors and connect them to the Arduino as shown above.

### 2. Arduino Code

- Upload the provided Arduino code to your Uno using the Arduino IDE.

### 3. Python Environment

- Install Python 3.7 or later.
- Install required packages:
  ```
  pip install pyserial pyautogui
  ```

### 4. Python Script

- Edit `gesture_controller.py` to set the correct COM port for your Arduino.
- Run the script:
  ```
  python gesture_controller.py
  ```

---

## Usage

- Place your hands in front of the sensors as per the gesture table below.
- The system will detect gestures and trigger the corresponding computer actions.

---

## Gesture Reference

| Gesture                      | Action           | Distance Range                       |
|------------------------------|------------------|--------------------------------------|
| Both hands close             | Scroll Down      | ≤ 20cm both sensors                  |
| Both hands medium            | Scroll Up        | 20–50cm both sensors                 |
| Left hand close              | Previous/Back    | Left ≤ 10cm, Right ≥ 30cm            |
| Right hand close             | Next/Forward     | Right ≤ 10cm, Left ≥ 30cm            |
| Motion detection             | Play/Pause       | PIR sensor activation                |

---

## Troubleshooting

- **No response?**  
  Check your COM port and wiring.
- **Gestures not detected?**  
  Ensure sensors are powered and unobstructed.
- **Python errors?**  
  Confirm all dependencies are installed and permissions are set.
  To help users find the correct port for their Arduino, add a clear instruction section in your README. Here’s a concise statement you can include:

---

**Finding Your Arduino Port**

Before running the Python script, make sure to check and update the serial port (`COM` port on Windows or `/dev/tty*` on Mac/Linux) in your script.  
- **Windows:**  
  1. Open the Arduino IDE.  
  2. Go to **Tools > Port**.  
  3. Note the port labeled with your Arduino board, e.g., `COM3 (Arduino Uno)`[2][4][6].  
  4. Alternatively, open **Device Manager** and look under **Ports (COM & LPT)** for the Arduino port[4][6].

- **Mac/Linux:**  
  1. Open the Arduino IDE and check **Tools > Port** for a port like `/dev/cu.usbmodemXXXX`[2][4].  
  2. Or, open Terminal and run:  
     ```bash
     ls /dev/tty*
     ```
     Look for a device such as `/dev/ttyACM0` or `/dev/ttyUSB0`[4].

Update this port in your Python script:
```python
ArduinoSerial = serial.Serial('COM3', 9600)  # Replace 'COM3' with your actual port
```



---



## License

MIT License

---
Built with ❤️ during my fourth semester as a hands-on learning experience.
Feel free to fork, contribute, or use this as a learning base.
---


