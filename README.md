# Melody
The push-button is used to control devices like turning on and off a light-emitting diode (LED) when the push button is pressed or not.
The task is to control the led using a push button with a microcontroller.

A push-button usually has four pins that are connected internally in pairs.
We only need to use two of the four pins, which are NOT in the same connected pair. Accordingly, there are four ways to do wiring with the button.

Step -1: Gather the below material from IoT Kit
● 1 X ESP32
● 1 x Resistor 330 ohm
● 1 x Push Button
● 1 x USB Cable
● 1 x LED
● 1 x Breadboard
● 6 x Jumper Wires

Step -2 Mount Components
Mount Resistors, LED, Pushbuttons on the breadboard as mentioned below:
● Connect the longer leg of the LED to one end of the resistor
● As we can only use two ends of the push-button, mount it that way so it covers the middle breaker

Step-3:Wiring Connections:
Provide power supply i.e VCC (+ve) and (GND(-ve) to LED & resistor.
● Connect the positive part of the LED (Longer Leg) with one end of the resistor and other end of the resistor to ESP32 GPIO pin D26 ( D31, D32, D25, D26, D12, D13) that are called Input/Output pins. To supply positive voltage, we can use any one of the mentioned pins. Just below the resistor pin, insert the male jumper wire and connect to ESP32 GPIO pins
● Now connect the negative part (shorter leg) of the LED and to one (GND(-ve)) pin of the ESP32. Take a male jumper wire and connect just below the shorter leg of the LED and drag it to the (GND(-ve)) terminal of the ESP32.
● Connect push button one terminal is with ESP32 GPIO D12 (I/O) pin of ESP32 and other terminals of a push-button is connected to GND
● Will read these two states of the push button and turn on and turn off LED accordingly.

Now it's time for programming
Open the Arduino IDE
● Define a pin for the PUSHBUTTON_PIN =12 (D12)
● Define a pin for the LED_PIN =12 (D26)
● Declare variable button
● void setup() function is used to initialize everything
● Describe pinMode() for both LED,PushButton Pin Mode() :PinMode() will declare LED as digital OUTPUT, & Push Button as INPUT_PULL UP
● void loop() function is used to execute the main process.
● In the void loop() function, the digitalRead() function reads the state of the push button and stores its value in the variable button.
● digitalRead() : The digitalRead() function is used to determine whether the input pin is HIGH or LOW. If the input pin state is HIGH, it is returned as HIGH and otherwise as LOW. You only need to pass the pin number as an argument to this function.
● If the condition is used to check the state of variable Push_button_state
● When Push_button_state is HIGH, LED_PIN will be turned on, and otherwise, it will remain off.
● digitalWrite() will help to change the state of LED

So, Now press the push button, it will turn your LED on, when you release the button it will be off
