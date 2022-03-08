# M2_EmbSys
[For simulation click here](https://drive.google.com/file/d/1QgVXk4VbBREhOznuBr2jFEvvJnRlxrRf/view?usp=sharing)
 
## Contents
* Introduction
* workflow
* Folder structure
* Folder description.
* function structure
* Aim
* Input, process, output.
* Instruction to execute.
* Output(simulide)
* Execution & Working.
* References.
* Learning resources.

## Introduction
The heat control system is basically used to control the temperature of a room. When a user or person enters the room and sit on the chair which is installed with the sensor ,the button sensor gets activated. After that, the user gets access to turn on the heater. The temperature sensor keeps monitoring the temperature and sends the analog value to the microcontroller. The microcontroller processes the analog input of the temperature sensor and outputs a temperature value through serial communication. All the activities of the control system are done on a microcontroller called Atmega328.


## workflow 
| Build | Code quality score | Cpp check| codiga code grade | codacy |
| --- | --- | --- | --- | --- |
 [![Build-Linux](https://github.com/divyanshsaxena521/M2_EmbSys/actions/workflows/build.yml/badge.svg)](https://github.com/divyanshsaxena521/M2_EmbSys/actions/workflows/build.yml)| ![code quality score](https://api.codiga.io/project/31608/score/svg) | [![cppcheck-action-test](https://github.com/divyanshsaxena521/M2_EmbSys/actions/workflows/cpp%20check.yml/badge.svg)](https://github.com/divyanshsaxena521/M2_EmbSys/actions/workflows/cpp%20check.yml) | ![codica code grade](https://api.codiga.io/project/31608/status/svg)| [![Codacy Badge](https://app.codacy.com/project/badge/Grade/ef3f4784dd50404e86be1b786067e299)](https://www.codacy.com/gh/divyanshsaxena521/M2_EmbSys/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=divyanshsaxena521/M2_EmbSys&amp;utm_campaign=Badge_Grade) |

## Folder structure
| 1_Requirements | 2_Design | 3_Implementation | 4_TestplanAndOutput | 5_Report | 6_ImagesAndVideos | 7_Others |
| --- | --- | --- | --- | --- | --- | --- |
| Documents detailing requirements and research | Documents related to design of model | All codes and make file | test plans with requirements | summary of all the folders | screenshots of working projects | refrences and supporting documents |


## Folder description
| Folder | Description | 
| --- | --- | 
| inc | Contains header files |
| src | Contains additional source file for compilation |
| simulation | contains all simulide and hex files for simulation |
| Documentation | contains Doxy file & all documents related to this project |


## Functions 

| Feature Id | Feature |
| -----------|---------|
|F_01|  sensing if the person is seated  |
|F_02| Blinking the LED  |

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
1. clone my repository "M2_EmbSys"
2. open terminal and select "AVR-WSL"
3. Run "make run" command in terminal for main code execution

## Output(simulide)
| serial monitor | circuit | oscilloscope | RAM table |
| --- | --- | --- | --- |
|![Serial_Monitor](https://user-images.githubusercontent.com/98813747/157101977-5f9869ab-6d1f-4a64-890b-20def19c3632.gif)|![Circuit](https://user-images.githubusercontent.com/98813747/157101985-8b25f0c5-65a4-43ff-991c-e4ac0622d68c.gif)|![Oscilloscope](https://user-images.githubusercontent.com/98813747/157101988-9d893c13-804c-47b6-8da5-73aa6e516ddc.gif)|![RAM_table](https://user-images.githubusercontent.com/98813747/157101990-f6b933bb-303f-44e6-bb03-935a3edc59b9.gif)|


## Execution & Working


https://user-images.githubusercontent.com/98813747/157096672-ed8a0543-3194-451a-9e09-64eef0bb1fab.mp4


## References
[Getting started ](https://youtu.be/_z0ssXxOM7U)

## Learning Resources

1.[gcc makefile](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html#zz-2.1)

2.[github workflow](https://www.programiz.com/c-programming/c-dynamic-memory-allocation)

3.[structure in c](https://www.studytonight.com/c/structures-in-c.php/)
