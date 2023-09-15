# Ardufor

This is a study project on “how a traffic light works” for a kindergarten 
in the competition “First steps in science.”

<img src="./images/ardufor.jpg"/>

The project is a simple Arduino-controlled traffic light. The main goal of the project 
is to study how the traffic light works and to demonstrate how Arduino can be used to 
control traffic lights, as well as to provide a basic model that can be modified and 
expanded for more complex traffic management systems.

This project is aimed at beginners in the field of Arduino and electronics. 
The project can be used for educational purposes or to create prototypes of traffic 
management systems on a small scale. Since it is important for a child to understand 
what and how something works, the project was created based on the “Znatok” constructor: 
it is bright, no soldering is required, and everything is visual.

## Operation

The traffic light on the board is programmed to work in two modes: autonomous 
and with physical activation/deactivation by a person.
The autonomous mode simulates the operation of a traffic light with the inclusion 
of a red and green signal for 3 seconds, and yellow for one and a half. 
After the time, the LEDs for the red and green signals blink. The cycle repeats automatically.
The mode with human participation performs two sequences: red-yellow-green and green-yellow-red. 
Between the sequences, the traffic light waits for a person’s action and the indicator 
lights up, so the duration of one of the signals can be arbitrarily increased.

## Circuit
<img src="./images/circuit.jpg"/>

## Pins assignment
| Pin | Pin type     | Purpose        |
|-----|--------------|----------------|
| D5  | Discrete out | Red light      |
| D6  | Discrete out | Yellow light   |
| D8  | Discrete in  | Control button |
| D9  | Discrete out | Green light    |


## Program

<img src="./images/prog.png"/>

## Installing the program and making changes

The project contains [Arduino sketch](./src/svetofor/svetofor.ino) which can be loaded into board
with [Arduino IDE](https://www.arduino.cc/en/software).
The sketch was generated using the [ArduBlock platform](http://ardublock.ru/en/).
The project also contains [ArduBlock project file](./src/svetofor.ardublock).
Changes can be made either directly to the sketch or to the ArduBlock project.

## Links

[«Znatok» construction set](https://znatok.ru/)

[ArduBlock 2.0, Block coding program for Arduino Uno, Nano, Mega, Mini platforms](http://ardublock.ru/en/)

[Arduino, electronic construction set](https://www.arduino.cc/)

[Real sciense #14. How does a traffic light work? (video)](https://youtu.be/77OhiLxO4Ck?feature=shared)
