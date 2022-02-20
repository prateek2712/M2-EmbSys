## Case Study - MP3 Player
# Description
An MP3 player is basically a storage device that contains solid-state memory, like flash memory, and software that will let you play ,display, and add data 

* 
- [ ]
![Blank diagram](https://user-images.githubusercontent.com/47187002/154832035-38155175-4157-4cb7-a2d5-50ebf8040f7e.jpeg)
 








## Component Description

# Power Supply
* External source of power supply that powers all devices, switches and microcontroller

# Microcontroller

* Performs all operations required by our system. Takes input as Temperature of the room and further processes this data to decide whether AC Needs to be turned on/off

# LCD Display
* To display data

# Keypad/Button Interface 
* To Give inputs to the device
# Memory Card Interface
* For Storing Data

# Stereo DAC-
*  Converts a digital audio signal into an analog one so that you can play the sound over headphones or speakers.
# Stereo ADC-
* ADC converts an analog input, such as a microphone collecting sound, into a digital signal.
# Clock-
* It tells the system when it's time to take the next sample
# Instruction Rom-
* For Storing Program
# Flash NAND- 
* NAND has a higher memory capacity than NOR.
# ASIC- 
* a chip that is custom designed for a specific purpose
# Actuators:
* Externally connected devices that perform operation as per the decision which the microcontroller takes. 


## V-Model




# Concept of Operation:
* MP3 player takes input of the user  ON/OFF
# Low Level Requirements:
* Switches to turn ON/OFF the system
Power Supply to the Microcontroller, Sensors and Actuators
# High Level Requirements:
* System must allow users to control the MP3 player ( use the onboard buttons for this)
* User must be able to play and pause of song
* user must be able to select a song

* System must use an external display to show a menu providing the following information:
* 1) Current playing song
* 2)Information about current playing song
* 3) Menu showing how to select a different song



# Test Cases:
* Are the decives receiving power supply? (Y/N)
* Is the decision made by the microcontroller to turn ON/OFF the device correct? (Y/N)
