# Requirements
## contents
* Introduction.
   * components details.
* Block Diagram.
* Adavntages and Disadvantages.
* WWWWH(4W's and 1H)
    * Who
    * What
    * When
    * Where
    * How
* SWOT ANALYSIS
    * Strenght
    * Weakness
    * Opportunities
    * Threats
* Requirements
    * High Level Requirements 
    * Low level Requirements


## Introduction
A temperature sensor is a device, typically, a thermocouple or resistance temperature detector, that provides temperature measurement in a readable form through an electrical signal. A thermometer is the most basic form of a temperature meter that is used to measure the degree of hotness and coolness.

The heat control system is basically used to control the temperature of a room. When a user or person enters the room and sit on the chair which is intalled with the sensor ,the button sensor gets activated. After that, the user gets access to turn on the heater. The temperature sensor keeps monitoring the temperature and sends the analog value to the microcontroller. The microcontroller processes the analog input of the temperature sensor and outputs a temperature value through serial communication. All the activities of the control system are done on a microcontroller called Atmega328.

## Components Details
Push Button :- The push button switch is usually used to turn on and off the control circuit.

potentiometer :- A potentiometer is a three-terminal resistor with a sliding or rotating contact that forms an adjustable voltage divider. If only two terminals are used, one end and the wiper, it acts as a variable resistor or rheostat.

LED :- A light-emitting diode (LED) is a semiconductor light source that emits light when current flows through it. Electrons in the semiconductor recombine with electron holes, releasing energy in the form of photons.

oscilloscope :-  It is a type of electronic test instrument that graphically displays varying signal voltages, usually as a calibrated two-dimensional plot of one or more signals as a function of time. The displayed waveform can then be analyzed for properties such as amplitude, frequency, rise time, time interval, distortion, and others.

 Resistor :- A resistor is a passive two-terminal electrical component that implements electrical resistance as a circuit element. In electronic circuits, resistors are used to reduce current flow, adjust signal levels, to divide voltages, bias active elements, and terminate transmission lines, among other uses. High-power resistors that can dissipate many watts of electrical power as heat 

ATmega328 :- The ATmega328 microcontroller combines 32 KB ISP flash memory with read-while-write capabilities, 1 KB EEPROM, 2 KB SRAM, 23 general-purpose I/O lines, 32 general-purpose working registers, 3 flexible timer/counters with compare modes, internal and external interrupts, serial programmable USART, a byte-oriented 2-wire serial interface, SPI serial port, 6-channel 10-bit A/D converter (8 channels in TQFP and QFN/MLF packages), programmable watchdog timer with internal oscillator, and 5 software-selectable power-saving modes. The device operates between 1.8 and 5.5 volts. The device achieves throughput approaching 1 MIPS/MHz.

### Block diagram
![block diagram](https://user-images.githubusercontent.com/98813747/155710913-fd8eb1f6-e631-4a73-bd78-b0d202db8a72.png)

### Advantages
* Smoother temperature control.
* Automatic temperature control according to user's body temperature.
* Flexibility in changing the room temperature.
* power saver.

### Disadvantages
* costly equipments are used like CRO for output.
* Temp to CAN shows the value of temperature gone over protocol
* Heater will check the heater button is ON.

## 4W's and 1 H
![5W1H ](https://user-images.githubusercontent.com/98813747/155713466-6c8882f1-321a-404f-bf56-e03183f33dfa.png)

### Who
* users who wants a smart room.
### What
* maintains room temperature automatically.
### When
* user enters the room and user is sited.
### Where
* At Home & offices.
### How
* By sensing the user's body temperature while sitting in the room.

## SWOT Analysis 
![SWOT Analysis](https://user-images.githubusercontent.com/98813747/155724546-93690147-3d81-450b-aed5-b0d58defbb9c.png)

after SWOT analysis we concluded the following requirements. which are mentioned below:

## High Level Requirements
| ID | Description | status |
| --- | --- | --- |
| HL01 | System should be able to sense the user presence perfectly for further process |  success |
| HL02 | User should be able to change the room temperature manually | success |
| HL03 | System must recognise the user body temperture| success |
| HL04 |  LEDs must be used for providing the output signal to the user | success |
| HL05 | System should recognize the error condition | future | 


## Low Level Requirement
| ID | Description | status |
| --- | --- | --- |
| LL01 | When the two switches are closed, the first LED glows indicating the actuation of the system and the heater | success | 
| LL02 | Analog input value must be recieved from temperature sensor| success | 
| LL03 | digitalised temperature value must be set to output | success |
| LL04 | Error condition must be shown to the user | future |
| LL05 | Room temperature info must be shown on the LCD display | success |

## programming
* Serial program mode

|Serial| programming|
|:--:|:------------------------------------------------------:|
|Symbol|	Pins|	I/O	Description|
|MOSI	|PB3	I	|Serial data in|
|MISO|	PB4	O | Serial Data out|
|SCK	|PB5	I	|Serial Clock|
