
# CAKE ROTATING STAND
#### The repo contains all the firmware codes for the project and instructions on how to load them to the hardware
<!-- <img src=""> -->

## Requirements
1) Set up the IDE, for this application you will need to download the Arduino ide [here](https://www.arduino.cc/en/software) if you don't have it already installed for your distributions
2) Instal the board support package for ESP32 by goint to ` Tools > Board:xx > Board Manager`. In the search-bar type ESP32 and select install ESP32 by Espressid Systems.  
3) Now select DOIT ESP32 DEVKITT V1 from ` Tools > Board:xx > ESP32 Arduino > DOIT ESP32 DEVKITT`
Once done proceed to the next instructions.
## Download the files 
4)  Download all the files on the `Code`:arrow_down_small: on this platform, In your downloads you will get the a folder :file_folder:  `cake_rotating_stand_main`this will have:
     - cake_rotating_stand_main.ino
</br>

5)  Open the `cake_rotating_stand_main.ino`  in `cake_rotating_stand_main`folder :file_folder: with the downloaded ide, compile and upload to the hardware `(procedure on how to use the ide is on the tutorial link)`:link:    [tutorial](https://www.youtube.com/watch?v=nL34zDTPkcs&t=3s)

# Uploading the codes  :arrow_up:
You can buy the FTDI from here :link: [buy ftdi](https://www.amazon.com/HiLetgo-FT232RL-Converter-Adapter-Breakout/dp/B00IJXZQ7C/ref=sr_1_3?keywords=FTDI&qid=1650483928&sr=8-3)

1) Insert the FTDI programmer cable socket onto UART headers. ...
2) <img src="https://github.com/skndungu/compressor_controller/blob/main/assets/img/USB-TTL-Connection.jpeg" height="200">
3) Open Arduino IDE software. ...
4) Next, call out the source code. ...
5) Select “FTDI” from the Tools > Programmer menu.
6) Select “Upload using Programmer” from the File menu.

You can also explore more from the following tutorial :link:[How to Use FTDI Programmer to upload Code](https://www.youtube.com/watch?v=JYchUapoqzc)
## Debugging 
To see the serial data as sent or received from either of the boards we can use the FTDI programmer or any USB to TTL converter so that you can have access to a serial port. Check out the headers on the board for uart communications 

## CAKE ROTATING STAND
The microcontroller at use is the ESP32-PICO-D4.

##  Working Principle
The VNH5019 Motor Driver is used to control the 12V DC motor and led indicators to illuminate the light.
</br>

The device(s) can be debugged by connecting it to a computer and retriving the necessary information via the serial monitor.
