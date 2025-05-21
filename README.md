<p align="center">
  <img src="Wattnera.jpg" alt="Wattnera Logo" width="600"/>
</p>

# Wattnera – Smart Power Monitoring System

**Wattnera** is a real-time power monitoring system built using an **ESP32 microcontroller** and an **ACS712 current sensor**. It measures electrical current, calculates power usage, tracks energy consumption and outputs data via Serial Monitor., diagnostics. This project was designed to explore embedded systems and DIY IoT device development. Future upgrades include OLED display integartion and smart load control.

---

#Project Versions

### Version 1 - Sensor Test
- Basic Current Sensing with ACS712
- Real-time current + voltage output to Serial Monitor

### Version 2 - Power _ Energy Tracking
- Calculates power using assumed voltge
- Accumulates energy in Wh overtime
- Outputs displayed in Serial Monitor

> Next version: OLED screen display + optimal Wi-Fi logging


---
## Features
- Real-time current sensing with ACS712 sensor
- Microcontroller-based system (ESP32)
- Serial Monitor output for live readings
- Power and energy tracking
- Optional Wi-Fi integration to log data remotely (Google Sheets or dashboard)
- Compact final version soldered on perfboard
- Managed with Trello & documented step-by-step

---

## Circuit Diagram
*Coming soon – includes ESP32 + ACS712 wiring diagram*

---

## Components
- ESP32 Dev Board (Micro USB)
- ACS712 Current Sensor (5A or 30A)
- Breadboard + Jumper Wires
- USB Cable
- (Optional) Solderable Perfboard for final version

---

## Sample Output
Current: 1.56 A
Current: 2.34 A
Current: 0.05 A

---

## Live Demo *(Coming Soon)*
- Screenshot of live data output
- Optional video demo or dashboard link

---

## Why I Built This
I wanted to build something tangible that blends **electronics**, **code**, and **project management**. Wattnera represents my first complete personal IoT system — one I scoped, tracked, built, and documented from scratch. It reflects my growth in embedded systems and technical planning.

---

## What I Learned
- ESP32 + sensor wiring and analog data reading
- Arduino IDE configuration + serial output handling
- Project planning using Trello
- GitHub documentation for real-world presentation
- Confidence in moving from breadboard to soldered hardware

---

## Future Plans
- Wi-Fi logging to Google Sheets or custom dashboard
- Voltage sensing + power calculations (P = IV)
- Overcurrent alerts or safety shutdown features
- 3D printed case or PCB design

---

*Created with passion*
