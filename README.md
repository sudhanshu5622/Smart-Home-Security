# Smart-Home-Security
Smart Door Lock System – Secure keyless entry using a QR code or mobile app with a solenoid lock controlled by an ESP32. Home Automation Hub – Remote control of lights, fans, and appliances via smartphone or voice assistants (Alexa/Google Assistant). Intruder Alert System – Detects movement with sensors and cameras, sending instant notifications 
# 🏠 Ultimate IoT Smart Home & Security Hub
An all-in-one IoT solution for home automation and security powered by **ESP32**, **Firebase**, and **Cloud Integration**.

![Project Overview](https://socialify.git.ci)

## 🚀 Key Features

### 1. Smart Door Lock (QR & App Based)
Secure your entry points with a keyless system.
*   **Hardware:** Solenoid Lock, Relay Module, ESP32.
*   **Function:** Unlock via a unique encrypted QR code or a toggle switch on a mobile app.
*   **Security:** Time-based QR tokens to prevent unauthorized replay attacks.

### 2. Global Home Automation Hub
Control your world from anywhere.
*   **Hardware:** Multi-channel Relay Module, DHT11 (Temp/Humidity).
*   **Voice Control:** Fully integrated with **Google Assistant** and **Alexa** via Sinric Pro or Adafruit IO.
*   **Dashboard:** Real-time monitoring of appliances and room climate on a custom mobile dashboard.

### 3. AI Intruder Alert System
Real-time surveillance and instant notifications.
*   **Hardware:** PIR Motion Sensor, ESP32-CAM.
*   **Alerts:** Sends instant **WhatsApp/Email** notifications with a photo attachment when movement is detected.
*   **Storage:** Captures and uploads intruder images to a Cloud/Telegram bot.

---

## 🛠️ Tech Stack
*   **Microcontroller:** ESP32 / ESP32-CAM
*   **Language:** C++ (Arduino IDE)
*   **Cloud/Backend:** Firebase Realtime Database
*   **Communication:** MQTT / HTTPs / WebSockets
*   **Platform:** Blynk / Sinric Pro / IFTTT

---

## 🔌 Circuit Diagram
> *Replace this placeholder with an image of your Proteus or Fritzing diagram.*
![Circuit Diagram](https://via.placeholder.com)

---

## 📂 Project Structure
```bash
├── Firmware/
│   ├── Smart_Lock.ino         # Logic for Solenoid & QR
│   ├── Home_Auto.ino          # Relay & Voice control
│   └── Intruder_Alert.ino     # Camera & Notification logic
├── App/
│   └── Config_Guide.md        # Mobile dashboard setup
└── README.md
