
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

[![Demo Video](docs/videos/demo_thumbnail.jpg)](docs/videos/demo_video.mp4) 

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
| Left hand close, right far   | Previous/Back    | Left ≤ 10cm, Right ≥ 30cm            |
| Right hand close, left far   | Next/Forward     | Right ≤ 10cm, Left ≥ 30cm            |
| Motion detection             | Play/Pause       | PIR sensor activation                |

---

## Troubleshooting

- **No response?**  
  Check your COM port and wiring.
- **Gestures not detected?**  
  Ensure sensors are powered and unobstructed.
- **Python errors?**  
  Confirm all dependencies are installed and permissions are set.

---



## License

MIT License

---


[8] https://www.e2enetworks.com/blog/hand-gesture-recognition-using-ml-algorithms
[9] https://www.mdpi.com/1424-8220/20/16/4566
[10] https://www.slideshare.net/slideshow/hand-gesture-recognition-systemfyp-report-50225618/50225618

---
Answer from Perplexity: pplx.ai/share
