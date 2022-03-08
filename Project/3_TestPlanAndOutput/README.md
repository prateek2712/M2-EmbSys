# M2-EmbSys

##  High level test plan
| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Output** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       | Integrate Potetiometer (as Flame Sensor) with Microcontroller |  None | Succesful Integration |Succesful Integration|Requirement based |
|  H_02       |Integrate Buzzer with Microcontroller|  None | Succesful Integration |Succesful Integration|Requirement based |
|  H_03       |Integrate LED with Microcontroller|  None | Succesful Integration |Succesful Integration|Requirement based |


##  Low level test plan

| **Test ID** | **Description**       | **Exp I/P** | **Exp O/P** | **Actual Output** |**Type Of Test**  |   
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | Use Potentiometer (as Flame Sensor) to give input to the Aurdino|  -  | -|-|Requirement based |
|  L_02       | Detect Fire infront of the sensor |  For simulation : Expected input for Flame  sensor is given with help of potentiometer  | LED Turns on|LED Turns on|Requirement based |
|  L_03       | To power the buzzer if fire is detected close to the  sensor | Fire is detected close to the sensor |Buzzer sound| Buzzer Sound |Requirement based    |
