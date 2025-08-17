# ☀️ Arduino Powered Smart Solar Panel
This project demonstrates a basic smart solar panel system using an Arduino UNO, LDR sensors, and a servo motor to track the direction of sunlight and adjust the panel's orientation accordingly.
![iidtl final](https://github.com/user-attachments/assets/c684836d-c00c-48a8-8b88-aa59c9a6a004)


# 📌 Features
Dual LDR sensors for detecting light intensity on left and right sides.

Servo motor that rotates to follow the direction of maximum light.

Real-time light tracking with serial monitor logs.

Simple hardware implementation using Arduino and basic electronic components.

# 🔧 Components Used
Component	Quantity
Arduino UNO	1
LDR (Light Sensor)	2
Servo Motor (SG90)	1
Resistors (220Ω)	3
Capacitor (1µF)	1
Red LED	1
Battery (1.5V AA)	3
Battery Holder	1
Breadboard & Wires	As needed
![component](https://github.com/user-attachments/assets/c0848311-bd56-4c2c-b072-86cada161f92)

# 🧠 How It Works
Two LDRs (left and right) measure the light intensity.

The Arduino compares both values.

If there is a significant difference, it adjusts the servo motor to point toward the stronger light source.

An LED is used to indicate power or status (optional).

# 🧪 Circuit Diagram
The complete schematic is available in the schematic.png file.
![TinkerCAD Project Diagram](https://github.com/user-attachments/assets/2044a64e-954b-47ba-affd-c8cbd7ee9e7b)
You can also simulate and test this in Tinkercad.

Schematic Diagram -

![Solar Panel Schematic Diagram](https://github.com/user-attachments/assets/558f6ff6-9b66-4803-9ec2-bc7ba8d1aa79)

# 🚀 Getting Started
Connect all components as per the circuit diagram.

Upload the code to your Arduino UNO using the Arduino IDE.

Open the Serial Monitor to observe the LDR values and servo movements.

Test by shining light on either LDR and observe the servo motor rotation.

# 📝 Future Improvements
Add a second axis for vertical tracking.

Use a solar panel to power the system.

Store peak sunlight time and direction using RTC and EEPROM.

Implement energy storage and automatic night shutdown.

# 📷 Demo
   

https://github.com/user-attachments/assets/ccc5c155-cfa2-4b1a-bda5-830c56fd95cc

# 🧑‍💻 Developed by
Sanskar Tiwari  
Siddhant Patil  
Rohan Tatar  
Pranav Oswal  
Suyash Pekhale  
Satyam Soni


