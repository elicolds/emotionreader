# Emotion Reader: Interactive Kinetic Facade

## 📌 Project Description
**MorphoSkin** is an **interactive kinetic facade** that responds to human presence and emotions using **face gesture recognition**. When a person approaches, the facade's skeleton opens via **servo motors**, revealing an **LED panel** that changes colors based on detected facial expressions.

This project combines **Arduino, OpenCV,and RGB LED strips** to create a dynamic, emotion-responsive lighting installation.

## 🚀 Features
- 🔵 **Facial Emotion Recognition:** Detects emotions like *happiness* using OpenCV.
- 🟢 **Proximity-based Interaction:** The facade opens when a person approaches, using an ultrasonic sensor.
- 🔴 **Dynamic LED Colors:** RGB LED strips change color based on the detected emotion.
- 🟡 **Real-time Processing:** Uses Python and OpenCV for gesture recognition and communicates with Arduino for LED control.

---

## 🛠️ Hardware Requirements
- 🎥 **Camera** (for face gesture recognition)
- 🔌 **Arduino Uno**
- 🟢 **12V RGB LED Strip**
- ⚡ **12V 5A Power Supply**
- 🔘 **3 x MOSFETs (IRF520 or IRLZ44N)**
- 🛠 **Resistors (220Ω)**
- 📡 **VL53L0X ToF (Time-of-Flight) Sensor** (for proximity detection)
- 🔩 **Servo Motors** (for facade opening mechanism)
- 🖥 **Computer with Python 3 and OpenCV**

---

## 📦 Installation

### **1️⃣ Clone the repository**
```bash
git clone https://github.com/elicolds/emotionreader.git
cd emotionreader
