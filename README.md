# **ESP32-Based IoT Smart Lighting Control System**

## **Overview**
This project implements an IoT-based smart lighting control system using the **ESP32-WROOM-32** microcontroller and a **4-channel relay module**. The system enables users to remotely control a light bulb via Wi-Fi, eliminating the need for traditional physical switches and providing a modern, energy-efficient solution for home automation.

The ESP32 operates in **Access Point (AP) mode**, creating a local Wi-Fi network that users can connect to using their **smartphones, tablets, or computers**. A **web server** hosted on the ESP32 processes user requests, allowing seamless control of the light bulb through a simple **web interface**.

## **Features**
- **Wi-Fi Hotspot**: The ESP32 creates a local network, allowing users to control lights without an internet connection.
- **Web-Based Control**: Users can toggle lights ON/OFF via an intuitive web interface.
- **Manual Control**: Push buttons provide an alternative way to switch lights.
- **Scalability**: The system can be expanded to integrate additional sensors and actuators.
- **Energy Efficiency**: The setup supports automation using motion and light sensors to reduce energy consumption.

## **Hardware Components**
- **ESP32-WROOM-32** (Microcontroller with built-in Wi-Fi & Bluetooth)
- **4-Channel Relay Module** (Controls electrical loads)
- **LED Light Bulb** (Demonstration unit)
- **Push Buttons** (For manual switching)
- **Power Supply** (5V DC for ESP32, 5V/12V for relay module)

## **Software Implementation**
- The ESP32 hosts a **web server** to handle user interactions.
- Relays are controlled via **GPIO pins**.
- A simple **HTML and CSS-based UI** allows easy operation.
- The system supports **manual push-button control**.

## **Project Workflow**
1. **ESP32 initializes as a Wi-Fi Access Point.**
2. **Users connect to the ESP32 Wi-Fi network.**
3. **A web-based interface allows control of relays.**
4. **Push buttons provide additional manual control.**
5. **ESP32 processes user input and switches the relays accordingly.**

## **Installation and Setup**
1. **Flash the ESP32 with the provided firmware (`bulb.ino`).**
2. **Power the ESP32 and relay module.**
3. **Connect your device to the ESP32’s Wi-Fi network.**
4. **Open the web interface to control the lights.**

## **Future Enhancements**
- **Internet-Based Control**: Integrate with cloud platforms like **MQTT, Blynk, or Firebase**.
- **Voice Assistant Integration**: Enable control via **Google Assistant, Alexa, or Siri**.
- **Mobile App Support**: Develop an **Android/iOS app** for an improved user experience.
- **Energy Monitoring**: Implement **current sensors** to track power usage.

## **Conclusion**
This project demonstrates how IoT can transform home automation, offering **energy efficiency, remote control, and user convenience**. By leveraging the capabilities of the ESP32, this system serves as a foundation for future smart home solutions.
