# Fire Alert System

# Introduction
* Fire Alert Systems are quite popular in commercial buildings and industries. These devices typically have a cluster of sensors that continuously monitor for any flame, gas, or fire in the structure and activate an alarm if any of these are detected. An IR Flame sensor, which has an IR photodiode that is sensitive to IR light, is one of the easiest ways to detect fire. Now, in the event of a fire, the fire will not only create heat but will also release IR rays; yes, every burning flame will emit some degree of IR light; this light is not visible to the naked eye, but our flame sensor can detect it and signal a microcontroller such as Arduino that a fire has occurred.

# Softwares Used
* Visual Studio
* SimulIDE
* Aurdino IDE

# Component Description

### Sensor(Ultrasonic Sensor)
As the name indicates, ultrasonic sensors measure distance by using ultrasonic waves. The sensor head emits an ultrasonic wave and receives the wave reflected back from the target. The ultrasonic waves emitted hits the water and the distance is measured. This information is given to the microprocessor as input.
### LCD display
* 16×2 LCD is a 32 digits display screen for all kinds of CMOS/TTL devices. This word comes from the liquid crystal and 16X2 represents its screen size. In Liquid crystal display 16×2, there are 2 rows and 16 columns. 
* In this project LCD display is used to provide the information by indicating the water level, the state of the motor, the height data can be visualized
in the LCD 16 × 2 display. The LCD displays the real-time data of the water height in the water tank. This takes input from the microprocessor.
### Relay
*  A relay is electro mechanical switch which is controlled electrically. It is used for isolation of two circuits having different operating voltages.
*  Relay in this project energises the motor when the water level is below the threshold and de-energises the motor when water level reaches a certain level.
### Driver circuit
A relay driver circuit is a circuit which can drive, or operate, a relay so that it can function appropriately in a circuit.
### Memory


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
