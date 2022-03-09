# Fire Alert System

# Introduction
* Fire Alert Systems are quite popular in commercial buildings and industries. These devices typically have a cluster of sensors that continuously monitor for any flame, gas, or fire in the structure and activate an alarm if any of these are detected. An IR Flame sensor, which has an IR photodiode that is sensitive to IR light, is one of the easiest ways to detect fire. Now, in the event of a fire, the fire will not only create heat but will also release IR rays; yes, every burning flame will emit some degree of IR light; this light is not visible to the naked eye, but our flame sensor can detect it and signal a microcontroller such as Arduino that a fire has occurred.

# Softwares Used
* Visual Studio
* SimulIDE
* Aurdino IDE




## Component Description

### Power Supply:
- External source of power supply that powers all devices, switches and microcontroller

### Microcontroller:
- Performs all operations required by our system. Takes input the signals from the Potentiometer and gives output by turning on the LED and BUZZER
### Flame Sensor
- A flame detector is a sensor designed to detect and respond to the presence of a flame or fire.

### Potentiometer
- A potentiometer is a type of position sensor. They are used to measure displacement in any direction. Linear potentiometers linearly measure displacement and rotary potentiometers measure rotational displacement.In this case Potentiometer is used as Flame sensor

### LED
- Recieves signals from the potiometer used as Flame Sensor and turn on when fire is dected

### Buzzer
- Acts as a device to communicate with the user when fire is detected

--------------------------------------

## SWOT

### Strengths
- Easy to understand the application and use it
- Early Detection. The earlier a fire is detected, the faster it will be that firefighters will respond. This can mean you...


 ### Weakness 
- In addition, smoke and heat from fires can dissipate too rapidly or accumulate too slowly for effective detection. In contrast, because flame detectors are optical devices, they can respond to flames in less than a second. This optical quality also limits the flame detector as not all fires have a flame.
### Opportunities
- Used In Homes,Offices,High Buildings

### Threats
- Other sensors can be used which have greater efficiency than Ultrasonic Sensor
- Many other similar applications available
----------------------------------------

## 4W's & 1H
### Who
- Can be used in every household

### What
- This is a utility application to determine if there is fire detected by turning on the buzzer and Leds.

### When 
-  When there is Fire Emergency

### Where
- Used In Homes,Offices,High Buildings
 

### How
- Developed using Arduino UNO and implemented on SimulIDE.  


# DETAIL REQUIREMENTS
## High Level Requirements-
|ID	        | Description	                                |Status
| :---         |     :---:      |          ---: |
|HL01	|To detect fire	    |Implemented|
|HL02	|To provide warning in form of sound with help of Buzzer and Indicate using LED	    |Implemented|

## Low Level Requirements

| ID	       | DESCRIPTION    | STATUS        |
| :---         |     :---:      |          ---: |
|LLR1	       |  Interface Potentiometer(Flame sensor) with Arduino Uno  |Implemented    |
|LLR2	       |Interface LED With Arduino uno   | Implemented  |
|LLR3	       |  Interface Buzzer with Arduino Uno	   |Implemented   |

# System Architecture

![System_Architecture](https://user-images.githubusercontent.com/47187002/157185020-18f1ab8d-8524-44d2-b8d3-284118a6147f.jpeg)



















# Flow Chart
![Flowchart](https://user-images.githubusercontent.com/47187002/157185075-82aa9e8c-82b3-402f-8cf7-aa246a886fd8.jpeg)


