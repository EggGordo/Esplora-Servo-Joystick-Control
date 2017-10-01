# Esplora-Servo-Joystick-Control

This program moves two servo's acording to the joystick's X and Y position

I found the pin readouts on this [website](http://www.pighixxx.com/test/portfolio-items/esplora/?portfolioID=314#prettyPhoto)

# How Does It Work?

The program reads the Esplora's joystick X and Y read outs through a 9600 baud serial output and maps it to a servo compatible input. The program then writes to the servo the new number and repeats.

# What Do I Need?

Libraries [Esplora](https://www.arduino.cc/en/Reference/EsploraLibrary) and [Servo](https://www.arduino.cc/en/Reference/Servo)which can be downloaded through the [Arduino IDE](https://www.arduino.cc/en/Main/Software).

# FAQ

1."Can I use this program for my own program?" 

Yes, you can.

2. "I don't have an Esplora, can I use a different arduino board with this program?"

Without editing, no. You will need to change a lot. Message me if you need help.

3. "Why do you only post projects for the Esplora?"

Theres really not a lot of projects to get started with the Esplora except with the examples provided by the Esplora Library.
