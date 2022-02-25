# M2_EmbSys
## contents
* Introduction
* workflow
* Folder structure
* Aim
* Input, process, output.
* Instruction to execute.
* Folder description.
* References

## Introduction
The heat control system is basically used to control the temperature of a room. When a user or person enters the room and sit on the chair which is installed with the sensor ,the button sensor gets activated. After that, the user gets access to turn on the heater. The temperature sensor keeps monitoring the temperature and sends the analog value to the microcontroller. The microcontroller processes the analog input of the temperature sensor and outputs a temperature value through serial communication. All the activities of the control system are done on a microcontroller called Atmega328.

## workflow 
| Codacy | Codiga | CI | Unity |
| --- | --- | --- | --- |


## Folder structure
| 1_Requirements | 2_Design | 3_Implementation | 4_TestplanAndOutput | 5_Report | 6_ImagesAndVideos | 7_Others |
| --- | --- | --- | --- | --- | --- | --- |
| Documents detailing requirements and research | Documents related to design of model | All codes and make file | test plans with requirements | summary of all the folders | screenshots of working projects | refrences and supporting documents |

## Aim
* Automatic temperature control display of the room.
* flexibility in changing the room temperature.
* Localization of operation ie input and output to the user.
## Input
* user presence in the room.
* user body temperature sensing in the room for further process.
## Process
* When the two switches are closed, the first LED glows indicating the actuation of the system and the heater.
* Next the analog input from the temperature sensor is received and digitized.
* The digitized temperature input is visualized using Pulse Width Modulation.
* Temperature sensor works as :

ADC Value (Temp Sensor)| Output PWM
----------|----------
0-200 | 20% - 20 °C
210-500 | 40% - 25 °C
510-700 | 70% - 29 °C
710-1024 | 95% - 33 °C

## Output
* The corresponding temperature values based on the digitized temperature input is transmitted by the UART protocol. Here the data is displayed on the serial monitor.

 ## Instructions to execute
1. clone my repository "M2-EmbSys"
2. open terminal and select "AVR-WSL"
3. Run "make run" command in terminal for main code execution

## Folder description
| Folder | Description |
| --- | --- |
| inc | Contains header files |
| src | Contains additional source file for compilation |


## References
|[Getting started ](https://youtu.be/_z0ssXxOM7U)|[project reference](https://www.electronicshub.org/embedded-systems-projects-ideas/)|
