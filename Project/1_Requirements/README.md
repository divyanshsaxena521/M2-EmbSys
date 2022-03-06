# **Requirements**
## **contents:**
* Introduction.
   * components details.
   * software used.
* Research.   
* Adavntages.
* SWOT ANALYSIS
    * Strenght
    * Weakness
    * Opportunities
    * Threats
* Requirements
    * High Level Requirements 
    * Low level Requirements
* WWWWH(4W's and 1H)
    * Who
    * What
    * When
    * Where
    * How



# **Introduction:**

The heating system is basically used to control the temperature. The user gets access to turn on the heater. The temperature sensor keeps monitoring the temperature and sends the analog value to the microcontroller. The microcontroller processes the analog input of the temperature sensor and outputs a temperature value through serial communication. All the activities of the activities of the control system are done on a microcontroller called Atmega328. The functionality of the heat control system is coded in embedded c and the working is demonstrated using simuation in a software called SimulIDE.

## Components Details:
Push Button :- The push button switch is usually used to turn on and off the control circuit.

potentiometer :- A potentiometer is a three-terminal resistor with a sliding or rotating contact that forms an adjustable voltage divider. If only two terminals are used, one end and the wiper, it acts as a variable resistor or rheostat.

LED :- A light-emitting diode (LED) is a semiconductor light source that emits light when current flows through it. Electrons in the semiconductor recombine with electron holes, releasing energy in the form of photons.

oscilloscope :-  It is a type of electronic test instrument that graphically displays varying signal voltages, usually as a calibrated two-dimensional plot of one or more signals as a function of time. The displayed waveform can then be analyzed for properties such as amplitude, frequency, rise time, time interval, distortion, and others.

 Resistor :- A resistor is a passive two-terminal electrical component that implements electrical resistance as a circuit element. In electronic circuits, resistors are used to reduce current flow, adjust signal levels, to divide voltages, bias active elements, and terminate transmission lines, among other uses. High-power resistors that can dissipate many watts of electrical power as heat 

ATmega328 :- The ATmega328 microcontroller combines 32 KB ISP flash memory with read-while-write capabilities, 1 KB EEPROM, 2 KB SRAM, 23 general-purpose I/O lines, 32 general-purpose working registers, 3 flexible timer/counters with compare modes, internal and external interrupts, serial programmable USART, a byte-oriented 2-wire serial interface, SPI serial port, 6-channel 10-bit A/D converter (8 channels in TQFP and QFN/MLF packages), programmable watchdog timer with internal oscillator, and 5 software-selectable power-saving modes. The device operates between 1.8 and 5.5 volts. The device achieves throughput approaching 1 MIPS/MHz.

## software used:
    * SimulIDE
    * GCC Compiler for AVR
    * VS Code

# **Research:**

Seat warmers were first introduced by Cadillac in 1966 to help with backaches. Some vehicles come with car seat warmers, which heat up the seat with the push of a button. Normally the buttons are located on the side of the driver and passenger door. In some vehicles, just the bottom of the seat warms up, where in others both the bottom and back warm up.


# **Advantages:**

Heated seats can make cars much more comfortable in the winter, or for those who often get cold even in the summer. The heater in most vehicles work well, but the car’s seat warmer is close to your body allowing you to warm up faster. In some cases, the seat warms up before the rest of the vehicle does.

 
# **SWOT Analysis:**

![SWOT Analysis](https://user-images.githubusercontent.com/98813747/155724546-93690147-3d81-450b-aed5-b0d58defbb9c.png)


**Strength:**

The advantage of such devices is that you can not wait until the entire salon warms up, and immediately go on business. After all, heating has a local effect, so they do their job in 2-5 minutes.

**Weakness:**
- If you do not follow the recommendations and go too far with the temperature, this can lead to a decrease in the driver’s attentiveness, cause fatigue and headaches, and also increase the risk of catching a cold due to a violation of the body’s temperature regime.
- the power cord is plugged in only after you fix the cape;
- if you spill any liquid on the heater cover, immediately turn off the device;
- if you leave the car, do not leave the device turned on;
- you can not wash the capes, iron, maximum-shake;
- Use dry bags to store the heater.

**Opportunities:**

The advanced technologies in automotive seat heaters are predicted to increase the growth of the market in the review period. The latest features like modern seat heaters like consistent and controlled warmth, heating level adjustment are attracting the consumers and are expected to propel the market growth. Growing demand for comfort and energy capabilities in vehicles is accelerating market growth.

**Threats:**
- A lack of regulation for these seats has left consumers more open to injuries.
- Within 10 minutes at 120 degrees an individual can experience third-degree burns. For those with the inability to feel the temperature at the time, this can prove even more dangerous. Those who have been diagnosed with conditions such as paralysis, diabetes, and neuropathy are less like to feel the heat in their lower extremities.
- High electrical resistance could cause the heater pad in the seat to overheat.

After SWOT analysis we concluded the following requirements. which are mentioned below:

##  Requirements
### High Level Requirements:
| ID | Description | Status |
|------| ------| ------|
| HLR1 | When the two switches are closed, the first LED glows indicating the actuation of the system and the heater. | Implemented
|HLR2  | Next the analog input from the temperature sensor is received and digitized.| Implemented
|HLR3  | The hard disk must be 4 GB . |	Implemented
|HLR4  | The web browser must be Microsoft Internet Explorer with a resolution of at least 800 \* 600. |	Implemented

#### Low Level Requirements:

| ID | Description | Status |
|-------|------|------|
| LLR1 | The digitized temperature input is visualized using Pulse Width Modulation.| Implemented 
| LLR2 | The system runs effectively on Windows 2000 server but it will also run equally well on compatible operating systems.  | Implemented
| LLR3 | The corresponding temperature values based on the digitized temperature input is transmitted by the UART protocol. Here the data is displayed on the serial monitor.| Implemented 


# **4W and 1H:**

![5W1H ](https://user-images.githubusercontent.com/98813747/155713466-6c8882f1-321a-404f-bf56-e03183f33dfa.png)

**What:**
Heated seats can make cars much more comfortable in the winter, or for those who often get cold even in the summer. The heater in most vehicles work well, but the car's seat warmer is close to your body allowing you to warm up faster. In some cases, the seat warms up before the rest of the vehicle does.

**When:**
Heated front seats not only offer luxurious comfort, relaxation and benefits for physical health, but also increase safety. Heating seats and backrests ensures a high level of well-being and prevents a cramped posture. Winter clothes limiting freedom of movement can be dispensed with. This also results in better operation of the restraint system by reducing the slack in safety belts. People with back or kidney problems benefit from a possible reduction of pain. It is mostly used in cars.

**Where:**
In car seats

**Why:**
Heated seats can bring a lot of different benefits beyond just having a nice and warm place to sit. The single greatest benefit that heated seats can bring is the therapeutic warmth it offers. This is great for older drivers or people with a few aches and pains.

**How:**
The longer the seat cushion stays on, the hotter it gets. If it were to stay on for too long, it would get hot enough to become uncomfortable or even dangerous to sit in. It could even start a fire in the cushion. To prevent this, most car seat heaters have a thermostat. The thermostat measures the temperature in the cushion. When it reaches a certain temperature, the thermostat sends a signal, automatically turning off the relay until the seat cools down a bit. At that point, the thermostat turns the relay back on again. Many seat cushions also have “high” and “low” settings that let the driver control the temperature of the seat cushions.
