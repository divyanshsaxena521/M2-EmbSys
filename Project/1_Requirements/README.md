# Requirements
## Introduction
A temperature sensor is a device, typically, a thermocouple or resistance temperature detector, that provides temperature measurement in a readable form through an electrical signal. A thermometer is the most basic form of a temperature meter that is used to measure the degree of hotness and coolness.

The heat control system is basically used to control the temperature of a room. When a user or person enters the room and sit on the chair which is intalled with the sensor ,the button sensor gets activated. After that, the user gets access to turn on the heater. The temperature sensor keeps monitoring the temperature and sends the analog value to the microcontroller. The microcontroller processes the analog input of the temperature sensor and outputs a temperature value through serial communication. All the activities of the control system are done on a microcontroller called Atmega328.

## Components Details
Push Button :- The push button switch is usually used to turn on and off the control circuit.

ATmega328 :- The ATmega328 microcontroller combines 32 KB ISP flash memory with read-while-write capabilities, 1 KB EEPROM, 2 KB SRAM, 23 general-purpose I/O lines, 32 general-purpose working registers, 3 flexible timer/counters with compare modes, internal and external interrupts, serial programmable USART, a byte-oriented 2-wire serial interface, SPI serial port, 6-channel 10-bit A/D converter (8 channels in TQFP and QFN/MLF packages), programmable watchdog timer with internal oscillator, and 5 software-selectable power-saving modes. The device operates between 1.8 and 5.5 volts. The device achieves throughput approaching 1 MIPS/MHz.

### Advantages
* Smoother temperature control.
* Automatic temperature control according to user's body temperature.
* Flexibility in changing the room temperature.
* power saver.

### Disadvantages
* 
* Analog to digital conversion is used 
* 

## 4 W's and 1 H
### Who
* users who wants a smart room.
### What
* maintains room temperature automatically.
### When
* user enters the room.
### Where
* At Home & offices.
### How
* By sensing the user's body temperature while sitting in the room.

## SWOT Analysis 
![SWOT analysis vaccine]
after SWOT analysis we concluded the following requirements. which are mentioned below:

## High Level Requirements
| ID | Description | 
| --- | --- |
| HL01 | System should be able to sense the user presence perfectly for further process | 
| HL02 | User should be able to change the room temperature manually |
| HL03 | System must recognise the user body temperture| 
| HL04 |  LEDs must be used for providing the output signal to the user |
| HL05 | System should recognize the error condition | 


## Low Level Requirement
| ID | Description |
| --- | --- |
| LL01 | Only new user must be given an option to select vaccine type | 
| LL02 | Total quantity of vaccines used must be shown by EOD | 
| LL03 | Full list of patients vaccinated must be set as output | 
| LL04 | Error condition must be shown to the user |
| LL05 | Room temperature info must be shown on the LCD display | 
