import serial  # Serial communication
import time  # Delay functions
import pyautogui  # Keyboard and mouse automation

# Create Serial port object (Ensure COM port is correct)
ArduinoSerial = serial.Serial('COM3', 9600)  
time.sleep(2)  # Wait for connection

while True:
    incoming = ArduinoSerial.readline().decode('utf-8').strip()  # Read serial data
    print("Gesture Detected:", incoming)

    # 🎮 **Game Controls (Subway Surfers)**
    if incoming == 'left':
        pyautogui.press('left')  # Move Left in Game
    elif incoming == 'right':
        pyautogui.press('right')  # Move Right in Game
    elif incoming == 'jump':
        pyautogui.press('up')  # Jump in Game
    elif incoming == 'slide':
        pyautogui.press('down')  # Slide in Game

    # 🎵 **YouTube & Media Controls**
    elif incoming == 'pause':
        pyautogui.press('space')  # Play/Pause Media
    elif incoming == 'next':
        pyautogui.hotkey('shift', 'n')  # Next Video
    elif incoming == 'back':
        pyautogui.hotkey('shift', 'p')  # Previous Video
    elif incoming == 'scrollup':
        pyautogui.scroll(10)  # Scroll Up
    elif incoming == 'scrolldown':
        pyautogui.scroll(-10)  # Scroll Down

    time.sleep(0.3)  # Add slight delay to prevent multiple triggers
