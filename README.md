# 🧤 The Third Eye Glove

**The Third Eye Glove** is an Arduino-based assistive technology project designed to help visually impaired individuals detect nearby obstacles. The system uses an ultrasonic sensor to detect objects and provides an alert through a buzzer.

## 📌 Project Overview

The glove acts as an additional sensing mechanism for the user. An **HC-SR04 ultrasonic sensor** continuously measures the distance between the user and nearby obstacles. When an obstacle is detected within a predefined range, the Arduino activates a buzzer to alert the user.

The goal of this project is to create a **simple, portable, and affordable obstacle-detection system** that can be integrated into a wearable glove.

## ⚙️ Features

* 🦯 Real-time obstacle detection
* 📡 HC-SR04 ultrasonic distance sensing
* 🔊 Audio feedback using a buzzer
* 🧤 Wearable glove-based design
* 🔋 Portable battery-powered system
* 💰 Low-cost components

## 🛠️ Components Used

* Arduino UNO
* HC-SR04 Ultrasonic Sensor
* Buzzer
* MOSFET/Transistor
* Resistor
* Diode
* Battery
* Connecting Wires
* Glove

## 🔌 Working Principle

1. The **HC-SR04 ultrasonic sensor** sends ultrasonic waves.
2. The waves reflect back when they encounter an obstacle.
3. The sensor calculates the distance to the obstacle.
4. The **Arduino UNO** processes the distance data.
5. If an obstacle is within the defined range, the **buzzer is activated**.
6. The audio alert informs the user about the nearby obstacle.

## 💻 Technologies Used

* **Arduino**
* **Embedded C/C++**
* **Ultrasonic Sensing**
* **Basic Electronics**
* **Sensor-Based Automation**


## 🚀 Getting Started

### 1. Clone the repository

```bash
git clone https://github.com/your-username/THE-THIRD-EYE-GLOVE.git
```

### 2. Open the Arduino code

Open `Third_Eye_Glove.ino` using the **Arduino IDE**.

### 3. Connect the components

Connect the ultrasonic sensor, buzzer, and other components to the Arduino UNO according to the circuit diagram.

### 4. Upload the code

Select:

**Board → Arduino UNO**

Then select the appropriate COM port and upload the code.

## 📸 Project Images

Add pictures of the glove, circuit, and working prototype here.

## 🔮 Future Improvements
* Add a vibration motor for tactile obstacle alerts.
* Add multiple ultrasonic sensors for wider obstacle detection.
* Implement different audio patterns based on distance.
* Add rechargeable battery support.
* Improve the compactness and comfort of the glove.
* Add Bluetooth/GPS-based functionality.
* Develop a more advanced alert system.

## 👨‍💻 Author

**Amit Kumar**

B.Tech CSE Student

## 📜 License

This project is created for **educational and project-development purposes**.
