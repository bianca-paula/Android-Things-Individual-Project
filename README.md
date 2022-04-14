# Android-Things-Individual-Project

# 1. Project Description

    Nowadays, people enjoy having electronics or complex processes automated and adjusted to their preferences. The idea of having controlled Air Conditioning is extremely popular nowadays and this project shows a simple approach in order to achieve this.

    In this project a LED-controlled fan is implemented using a mini fan and three LEDs. The project is meant to act as a controlled 
    AC (Air Conditioner) system with three different modes: off, medium, high ventilation. 
    
    This type of project can be useful for developing a voice controlled system that can adjust the AC depending on the user's wishes, and it facilitates the process by no longer being required to manually set an AC using a remote control, instead using voice commands.
    
    The project is integrated with a voice controller application via a Bluetooth module.
	
	
# 2. Schematics

![Schematics](https://github.com/bianca-paula/Android-Things-Individual-Project/blob/main/Schematics_IndividualProject_CheranBianca.png)
	
# 3. Pre-Requisites
	- Arduino UNO R3 Controller Board
		○ https://docs.arduino.cc/hardware/uno-rev3
	- Breadboard 830
		○ https://www.digikey.com/catalog/en/partgroup/full-size-breadboard-830-tie-points/68965
	- Red, Yellow and Green LEDs (3 pieces)
	- Bluetooth HC-05 Module
		○ https://www.rhydolabz.com/wireless-bluetooth-ble-c-130_132/hc05-bluetooth-module-masterslave-p-1169.html
	- 4 x Resistors 220 ohm
		○ https://protosupplies.com/product/resistor-220-ohm-5-14w25-pack/
	- Jumper Wires
    - Elegoo Motor 3-6V DC
        ○ https://www.amazon.de/gp/product/B01ILR6AX4
    - General Purpose Transistor NPN
        ○ https://www.newark.com/on-semiconductor/pn2222abu/bipolar-transistor-npn-40v-to/dp/58K2047?COM=ref_hackster
    - 1N4007 – High Voltage, High Current Rated Diode
        ○ https://www.newark.com/w/search?st=18C8923&COM=ref_hackster
	- Voice recognition app on an Android phone (there are similar apps for iOS)
		○ https://play.google.com/store/apps/details?id=appinventor.ai_ashishmarch12.Bluetooth_Voice&hl=en
	- Arduino IDE
		○ https://www.arduino.cc/en/software
# 4. Setup and build
	1. Connect all components as in the circuit diagram
	2. Open the Arduino Bluetooth Voice Control App and click on the Bluetooth icon to connect to the Bluetooth module (when connecting for the first time the smartphone will ask for a passcode - use 0000 or 1234)
# 5. Running
	After the setup the project can be run as following:
		1. In the voice recognition app tap the button "click to speak" (the microphone button)
		2. The following commands are available:

            | Command   | Action                                                                                 |
            | ----------| ---------------------------------------------------------------------------------------|
            | turn on   | Blink all three LEDs to signal the application is on                                   |
            | turn off  | Turn RED LED on to signal the application is off and set fan speed to 0                |
            | 0         | Set the fan mode 0, turn off LEDs and set fan speed to 0                               |
            | 1         | Set the fan mode 1, turn on YELLOW LED and off the others and set fan speed to 130     |
            | 2         | Set the fan mode 2, turn on GREEN LED and off the others and set fan speed to 254      |
        3. If a correct command was given, the corresponding action will take place and a message with the command will also be printed
        on the command line
# 6. Demo
![Demo](https://github.com/bianca-paula/Android-Things-Individual-Project/blob/main/demo.JPEG)
